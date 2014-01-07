//
//  MessagesManager.h
//  TextSecureiOS
//
//  Created by Frederic Jacobs on 30/11/13.
//  Copyright (c) 2013 Open Whisper Systems. All rights reserved.
//

// The Messages Manager class is crucial, it does do all the Messages processing.
// It gets push notifications payloads and processes them and does hence work heavily with the database.


#import <Foundation/Foundation.h>
#import "TSProtocol.hh"
@class TSMessage;

@interface TSMessagesManager : NSObject <TSProtocol>
+ (id)sharedManager;

- (void) processPushNotification:(NSDictionary*)pushDict;
@end
