/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class VSAccountMetadata, VSAccount, VSOptional;

@interface VSIdentityProviderResponse : NSObject {

	BOOL _didCreateAccount;
	VSAccountMetadata* _accountMetadata;
	VSAccount* _account;
	VSOptional* _logoLoadOperation;

}

@property (nonatomic,copy) VSAccountMetadata * accountMetadata;              //@synthesize accountMetadata=_accountMetadata - In the implementation block
@property (nonatomic,retain) VSAccount * account;                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL didCreateAccount;                          //@synthesize didCreateAccount=_didCreateAccount - In the implementation block
@property (nonatomic,retain) VSOptional * logoLoadOperation;                 //@synthesize logoLoadOperation=_logoLoadOperation - In the implementation block
-(VSAccount *)account;
-(void)setAccount:(VSAccount *)arg1 ;
-(id)init;
-(id)description;
-(VSAccountMetadata *)accountMetadata;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
-(void)setLogoLoadOperation:(VSOptional *)arg1 ;
-(VSOptional *)logoLoadOperation;
-(BOOL)didCreateAccount;
-(void)setDidCreateAccount:(BOOL)arg1 ;
@end

