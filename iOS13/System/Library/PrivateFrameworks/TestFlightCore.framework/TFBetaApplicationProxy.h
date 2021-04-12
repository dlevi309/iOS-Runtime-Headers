/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@class NSString;

@interface TFBetaApplicationProxy : NSObject {

	NSString* _bundleIdentifier;
	NSString* _logKey;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                                                        //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredLocalizedDisplayNameForInstalledVersion; 
-(NSString *)bundleIdentifier;
-(NSString *)logKey;
-(id)initForAppWithIdentifier:(id)arg1 ;
-(BOOL)isProactiveFeedbackEnabledForInstalledVersion;
-(NSString *)preferredLocalizedDisplayNameForInstalledVersion;
-(BOOL)isBetaAppLaunchScreenEnabledForInstalledVersion;
-(void)deviceWillInstallVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9 ;
-(void)setProactiveFeedbackEnabled:(BOOL)arg1 forVersion:(id)arg2 build:(id)arg3 ;
-(void)setBetaAppLaunchScreenEnabled:(BOOL)arg1 forVersion:(id)arg2 build:(id)arg3 ;
-(void)updateLocalizedTestNotes:(id)arg1 forVersion:(id)arg2 build:(id)arg3 ;
-(void)overwriteMetadataForInstalledVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9 ;
@end

