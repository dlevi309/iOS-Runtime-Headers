/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(VSAccount *)account;
-(void)setAccount:(VSAccount *)arg1 ;
-(VSAccountMetadata *)accountMetadata;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
-(void)setLogoLoadOperation:(VSOptional *)arg1 ;
-(VSOptional *)logoLoadOperation;
-(BOOL)didCreateAccount;
-(void)setDidCreateAccount:(BOOL)arg1 ;
@end

