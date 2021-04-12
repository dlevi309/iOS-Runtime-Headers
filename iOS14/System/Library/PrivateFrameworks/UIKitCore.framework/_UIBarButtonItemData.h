/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceData.h>
#import <UIKitCore/_UIBarButtonItemDataFallback.h>

@protocol _UIBarButtonItemDataFallback;
@class NSDictionary, UIImage, UIImageSymbolConfiguration, NSString;

@interface _UIBarButtonItemData : _UIBarAppearanceData <_UIBarButtonItemDataFallback> {

	NSDictionary* _titleTextAttributes[4];
	UIImage* _backgroundImage[4];
	UIOffset _titlePositionAdjustment[4];
	UIOffset _backgroundImagePositionAdjustment[4];
	UIImageSymbolConfiguration* _imageSymbolConfiguration;
	UIImageSymbolConfiguration* _compactImageSymbolConfiguration;
	UIImage* _backIndicatorImage;
	UIImage* _backIndicatorTransitionMaskImage;
	UIImageSymbolConfiguration* _backIndicatorSymbolConfiguration;
	UIImageSymbolConfiguration* _compactBackIndicatorSymbolConfiguration;
	id<_UIBarButtonItemDataFallback> _fallback;
	struct {
		unsigned hasUserFont : 1;
		unsigned hasUserColor : 1;
		unsigned hasUserTitlePosition : 1;
		unsigned hasUserBackgroundImage : 1;
		unsigned hasUserBackgroundImagePosition : 1;
	}  _stateFlags[4];
	SCD_Struct_UI34 _dataFlags;
	long long _style;

}

@property (nonatomic,readonly) long long style;                                                                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL isBackButtonData; 
@property (nonatomic,readonly) id<_UIBarButtonItemDataFallback> fallback; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * imageSymbolConfiguration; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * compactImageSymbolConfiguration; 
@property (nonatomic,readonly) UIImage * backIndicatorImage; 
@property (nonatomic,readonly) UIImage * backIndicatorTransitionMaskImage; 
@property (nonatomic,readonly) UIImage * compactBackIndicatorImage; 
@property (nonatomic,readonly) UIImage * compactBackIndicatorTransitionMaskImage; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * backIndicatorSymbolConfiguration; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * backIndicatorTransitionMaskSymbolConfiguration; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * compactBackIndicatorSymbolConfiguration; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * compactBackIndicatorTransitionMaskSymbolConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardBackButtonData;
+(id)standardItemDataForStyle:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(id)replicate;
-(void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(long long)hashInto:(long long)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2 ;
-(void)describeInto:(id)arg1 ;
-(UIImage *)backIndicatorTransitionMaskImage;
-(id)initWithStyle:(long long)arg1 ;
-(id)_fallbackColorForState:(long long)arg1 ;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(UIImage *)compactBackIndicatorTransitionMaskImage;
-(UIImageSymbolConfiguration *)compactBackIndicatorSymbolConfiguration;
-(void)resetBackIndicatorImages;
-(UIImageSymbolConfiguration *)compactBackIndicatorTransitionMaskSymbolConfiguration;
-(void)setBackgroundImagePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(long long)arg2 ;
-(UIImage *)compactBackIndicatorImage;
-(id)colorForState:(long long)arg1 style:(long long)arg2 ;
-(UIOffset)titlePositionAdjustmentForState:(long long)arg1 ;
-(UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2 ;
-(void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(UIImage *)backIndicatorImage;
-(id<_UIBarButtonItemDataFallback>)fallback;
-(UIImageSymbolConfiguration *)compactImageSymbolConfiguration;
-(void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)isBackButtonData;
-(id)backgroundImageForState:(long long)arg1 ;
-(UIImageSymbolConfiguration *)backIndicatorSymbolConfiguration;
-(void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2 ;
-(id)dataWithNewFallback:(id)arg1 ;
-(UIImageSymbolConfiguration *)backIndicatorTransitionMaskSymbolConfiguration;
-(id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1 ;
-(UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2 ;
-(id)backgroundImageForState:(long long)arg1 style:(long long)arg2 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 ;
-(long long)style;
-(id)_fallbackFontForState:(long long)arg1 ;
-(id)titleTextAttributesForState:(long long)arg1 ;
-(void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2 ;
-(id)fontForState:(long long)arg1 style:(long long)arg2 ;
@end

