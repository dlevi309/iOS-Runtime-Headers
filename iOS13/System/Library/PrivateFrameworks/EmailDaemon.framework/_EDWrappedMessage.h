/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EMMessage;

@interface _EDWrappedMessage : NSObject {

	EMMessage* _message;
	long long _databaseID;

}

@property (nonatomic,readonly) EMMessage * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
-(EMMessage *)message;
-(long long)databaseID;
-(id)initWithMessage:(id)arg1 databaseID:(long long)arg2 ;
@end

