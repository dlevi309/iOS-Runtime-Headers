/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

