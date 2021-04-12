/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EMMessage;

@interface _EDWrappedMessage : NSObject {

	long long _databaseID;
	EMMessage* _message;

}

@property (nonatomic,readonly) EMMessage * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
-(EMMessage *)message;
-(long long)databaseID;
-(id)initWithMessage:(id)arg1 databaseID:(long long)arg2 ;
@end

