/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBFlow.h>

@class NSBundle, NSString, NSDictionary, OBImage, NSArray;

@interface OBPrivacyFlow : OBFlow {

	NSBundle* _bundle;
	NSString* _splashContentName;
	NSDictionary* _splashPlist;
	BOOL _buttonIconLoaded;
	OBImage* _buttonIcon;
	NSString* _buttonTitle;
	NSString* _buttonCaption;
	NSString* _splashTitle;
	NSString* _splashShortTitle;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long contentVersion; 
@property (nonatomic,readonly) BOOL platformSupported; 
@property (nonatomic,readonly) BOOL showInCombinedList; 
@property (getter=isPersonallyIdentifiable,nonatomic,readonly) BOOL personallyIdentifiable; 
@property (nonatomic,readonly) OBImage * buttonIcon; 
@property (nonatomic,readonly) NSString * localizedButtonTitle; 
@property (nonatomic,readonly) NSString * localizedButtonCaption; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) NSArray * localizedContentList; 
+(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
+(id)flowWithBundle:(id)arg1 ;
+(id)_splashPlistFromBundle:(id)arg1 forContentName:(id)arg2 ;
-(NSString *)localizedTitle;
-(id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3 ;
-(id)initWithBundle:(id)arg1 ;
-(BOOL)isPersonallyIdentifiable;
-(id)initWithSplashContent:(id)arg1 ;
-(NSString *)localizedButtonTitle;
-(id)_currentPlatform;
-(id)_splashPlist;
-(id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4 ;
-(BOOL)platformSupported;
-(NSArray *)localizedContentList;
-(BOOL)_conformsToRequirement:(id)arg1 ;
-(id)_bundleImageNamed:(id)arg1 ;
-(id)_iconType;
-(id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3 ;
-(NSString *)localizedShortTitle;
-(id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(void)setButtonIcon:(OBImage *)arg1 ;
-(unsigned long long)contentVersion;
-(NSString *)identifier;
-(id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(OBImage *)buttonIcon;
-(id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(BOOL)_conformsToRequirements:(id)arg1 ;
-(id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(NSString *)localizedButtonCaption;
-(BOOL)showInCombinedList;
@end

