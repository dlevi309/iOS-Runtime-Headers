/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSIdentityProvider, NSString;

@interface VSIdentityProviderInfoQueryResult : NSObject {

	BOOL _isInSetTopBoxMode;
	VSIdentityProvider* _identityProvider;
	NSString* _designatedAppBundleIdentifier;

}

@property (nonatomic,copy) VSIdentityProvider * identityProvider;                 //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSString * designatedAppBundleIdentifier;              //@synthesize designatedAppBundleIdentifier=_designatedAppBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isInSetTopBoxMode;                              //@synthesize isInSetTopBoxMode=_isInSetTopBoxMode - In the implementation block
-(id)description;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setIsInSetTopBoxMode:(BOOL)arg1 ;
-(BOOL)isInSetTopBoxMode;
-(NSString *)designatedAppBundleIdentifier;
-(void)setDesignatedAppBundleIdentifier:(NSString *)arg1 ;
@end

