/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage {

	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
-(EDMessagePersistence *)messagePersistence;
-(long long)databaseID;
-(id)initWithMessage:(id)arg1 messagePersistence:(id)arg2 ;
@end

