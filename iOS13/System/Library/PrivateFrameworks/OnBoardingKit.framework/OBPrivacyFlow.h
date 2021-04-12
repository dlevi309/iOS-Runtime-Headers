/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)localizedTitle;
-(id)_iconType;
-(BOOL)platformSupported;
-(id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(OBImage *)buttonIcon;
-(NSString *)localizedShortTitle;
-(id)_currentPlatform;
-(id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4 ;
-(BOOL)isPersonallyIdentifiable;
-(void)setButtonIcon:(OBImage *)arg1 ;
-(BOOL)_conformsToRequirement:(id)arg1 ;
-(id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3 ;
-(BOOL)_conformsToRequirements:(id)arg1 ;
-(id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3 ;
-(id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)_bundleImageNamed:(id)arg1 ;
-(id)initWithSplashContent:(id)arg1 ;
-(unsigned long long)contentVersion;
-(BOOL)showInCombinedList;
-(NSString *)localizedButtonTitle;
-(NSString *)localizedButtonCaption;
-(NSArray *)localizedContentList;
@end

