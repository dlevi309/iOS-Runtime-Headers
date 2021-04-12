/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCRestrictions : NSObject {

	BOOL _testing;
	long long _buildVersionNumber;
	long long _isExplicitContentAllowedOverride;

}

@property (assign,nonatomic) BOOL testing;                                            //@synthesize testing=_testing - In the implementation block
@property (assign,nonatomic) long long isExplicitContentAllowedOverride;              //@synthesize isExplicitContentAllowedOverride=_isExplicitContentAllowedOverride - In the implementation block
@property (assign,nonatomic) long long buildVersionNumber;                            //@synthesize buildVersionNumber=_buildVersionNumber - In the implementation block
@property (nonatomic,readonly) BOOL isExplicitContentAllowed; 
+(id)sharedInstance;
+(long long)integerRepresentationOfShortVersionString:(id)arg1 ;
-(long long)buildVersionNumber;
-(void)t_startForcingExplicitContentDisallowed;
-(id)init;
-(BOOL)isContentAllowedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(long long)isExplicitContentAllowedOverride;
-(BOOL)isExplicitContentAllowed;
-(void)setBuildVersionNumber:(long long)arg1 ;
-(void)setIsExplicitContentAllowedOverride:(long long)arg1 ;
-(void)t_stopForcingExplicitContentDisallowed;
-(BOOL)testing;
-(BOOL)isNewsVersionAllowedWithMinNewsVersion:(long long)arg1 maxNewsVersion:(long long)arg2 ;
-(void)setTesting:(BOOL)arg1 ;
-(BOOL)isNewsVersionAllowed:(long long)arg1 ;
@end

