/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL isDiagnosticsUsageEnabled; 
+(id)sharedInstance;
+(long long)integerRepresentationOfShortVersionString:(id)arg1 ;
-(id)init;
-(BOOL)isExplicitContentAllowed;
-(BOOL)isContentAllowedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(BOOL)testing;
-(long long)isExplicitContentAllowedOverride;
-(void)setIsExplicitContentAllowedOverride:(long long)arg1 ;
-(long long)buildVersionNumber;
-(BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(void)t_startForcingExplicitContentDisallowed;
-(void)t_stopForcingExplicitContentDisallowed;
-(BOOL)isDiagnosticsUsageEnabled;
-(BOOL)isNewsVersionAllowed:(long long)arg1 ;
-(void)setBuildVersionNumber:(long long)arg1 ;
-(void)setTesting:(BOOL)arg1 ;
@end

