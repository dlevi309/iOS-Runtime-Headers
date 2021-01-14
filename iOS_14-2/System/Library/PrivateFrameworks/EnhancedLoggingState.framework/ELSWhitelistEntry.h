/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
*/


@class NSString;

@interface ELSWhitelistEntry : NSObject {

	BOOL _requiresFollowup;
	BOOL _retry;
	NSString* _bundleIdentifier;
	NSString* _parameterName;
	NSString* _displayNameLocalizationKey;
	NSString* _descriptionLocalizationKey;
	NSString* _sensitiveInformationLocalizationKey;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * parameterName;                                      //@synthesize parameterName=_parameterName - In the implementation block
@property (nonatomic,retain) NSString * displayNameLocalizationKey;                         //@synthesize displayNameLocalizationKey=_displayNameLocalizationKey - In the implementation block
@property (nonatomic,retain) NSString * descriptionLocalizationKey;                         //@synthesize descriptionLocalizationKey=_descriptionLocalizationKey - In the implementation block
@property (nonatomic,readonly) NSString * sensitiveInformationLocalizationKey;              //@synthesize sensitiveInformationLocalizationKey=_sensitiveInformationLocalizationKey - In the implementation block
@property (nonatomic,readonly) BOOL requiresFollowup;                                       //@synthesize requiresFollowup=_requiresFollowup - In the implementation block
@property (nonatomic,readonly) BOOL retry;                                                  //@synthesize retry=_retry - In the implementation block
-(BOOL)retry;
-(NSString *)bundleIdentifier;
-(void)setParameterName:(NSString *)arg1 ;
-(NSString *)parameterName;
-(void)setDisplayNameLocalizationKey:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)displayNameLocalizationKey;
-(id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 sensitiveInformationLocalizationKey:(id)arg5 needsWAPIKeys:(BOOL)arg6 requiresFollowup:(BOOL)arg7 retry:(BOOL)arg8 ;
-(id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 baseLocalizationKey:(id)arg3 needsWAPIKeys:(BOOL)arg4 requiresFollowup:(BOOL)arg5 retry:(BOOL)arg6 ;
-(NSString *)descriptionLocalizationKey;
-(void)setDescriptionLocalizationKey:(NSString *)arg1 ;
-(NSString *)sensitiveInformationLocalizationKey;
-(BOOL)requiresFollowup;
@end

