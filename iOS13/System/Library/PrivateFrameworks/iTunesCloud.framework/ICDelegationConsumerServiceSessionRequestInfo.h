/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject {

	unsigned long long _accountID;
	unsigned long long _fairPlaySessionID;

}

@property (nonatomic,readonly) unsigned long long accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) unsigned long long fairPlaySessionID;              //@synthesize fairPlaySessionID=_fairPlaySessionID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)accountID;
-(unsigned long long)fairPlaySessionID;
-(id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2 ;
@end

