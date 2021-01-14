/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class ACAccount;

@interface ACDAccountChange : NSObject {

	int _changeType;
	ACAccount* _account;
	ACAccount* _oldAccount;

}

@property (nonatomic,readonly) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) ACAccount * oldAccount;              //@synthesize oldAccount=_oldAccount - In the implementation block
+(id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(ACAccount *)account;
-(int)changeType;
-(id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(ACAccount *)oldAccount;
@end

