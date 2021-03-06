//
//  TSWhisperMessage.h
//  TextSecureiOS
//
//  Created by Christine Corbett Moran on 1/6/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifdef __cplusplus
#import "WhisperMessage.pb.hh"
#endif
#import "TSWhisperMessage.hh"

@interface TSEncryptedWhisperMessage : TSWhisperMessage

@property (nonatomic,strong) NSData* ephemeralKey;
@property (nonatomic,strong) NSNumber* counter;
@property (nonatomic,strong) NSNumber* previousCounter;
@property (nonatomic,strong) NSData* hmac;
-(id) initWithTextSecure_WhisperMessage:(NSData*) data;
-(NSData*) getTextSecure_WhisperMessage;
-(id) initWithEphemeralKey:(NSData*)ephemeral previousCounter:(NSNumber*)prevCounter counter:(NSNumber*)ctr encryptedMessage:(NSData*)ciphertext forVersion:(NSData*)version withHMAC:(NSData*)mac;

@end
