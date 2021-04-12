/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage {

	long long _databaseID;
	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
-(long long)databaseID;
-(EDMessagePersistence *)messagePersistence;
-(id)initWithMessage:(id)arg1 messagePersistence:(id)arg2 ;
@end

