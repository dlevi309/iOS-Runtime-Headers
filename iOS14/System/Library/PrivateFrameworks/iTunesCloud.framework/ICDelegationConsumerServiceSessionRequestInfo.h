/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject {

	unsigned long long _accountID;
	unsigned long long _fairPlaySessionID;

}

@property (nonatomic,readonly) unsigned long long accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) unsigned long long fairPlaySessionID;              //@synthesize fairPlaySessionID=_fairPlaySessionID - In the implementation block
-(unsigned long long)accountID;
-(unsigned long long)fairPlaySessionID;
-(id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

