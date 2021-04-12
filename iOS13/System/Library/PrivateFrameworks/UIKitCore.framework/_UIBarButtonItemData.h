/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIImageSymbolConfiguration* _compactPreferredSymbolConfiguration;
	UIImage* _backIndicatorImage;
	UIImage* _backIndicatorTransitionMaskImage;
	id<_UIBarButtonItemDataFallback> _fallback;
	struct {
		unsigned hasUserFont : 1;
		unsigned hasUserColor : 1;
		unsigned hasUserTitlePosition : 1;
		unsigned hasUserBackgroundImage : 1;
		unsigned hasUserBackgroundImagePosition : 1;
	}  _stateFlags[4];
	SCD_Struct_UI30 _dataFlags;
	long long _style;

}

@property (nonatomic,readonly) long long style;                                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL isBackButtonData; 
@property (nonatomic,readonly) id<_UIBarButtonItemDataFallback> fallback; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * compactPreferredSymbolConfiguration; 
@property (nonatomic,readonly) UIImage * backIndicatorImage; 
@property (nonatomic,readonly) UIImage * backIndicatorTransitionMaskImage; 
@property (nonatomic,readonly) UIImage * compactBackIndicatorImage; 
@property (nonatomic,readonly) UIImage * compactBackIndicatorTransitionMaskImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardItemDataForStyle:(long long)arg1 ;
+(id)standardBackButtonData;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(UIImageSymbolConfiguration *)compactPreferredSymbolConfiguration;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(id)backgroundImageForState:(long long)arg1 ;
-(UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 ;
-(UIOffset)titlePositionAdjustmentForState:(long long)arg1 ;
-(UIImage *)compactBackIndicatorImage;
-(UIImage *)backIndicatorImage;
-(UIImage *)compactBackIndicatorTransitionMaskImage;
-(UIImage *)backIndicatorTransitionMaskImage;
-(id)titleTextAttributesForState:(long long)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(long long)arg2 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(void)setBackgroundImagePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(id<_UIBarButtonItemDataFallback>)fallback;
-(id)dataWithNewFallback:(id)arg1 ;
-(BOOL)isBackButtonData;
-(id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1 ;
-(void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(void)resetBackIndicatorImages;
-(id)fontForState:(long long)arg1 style:(long long)arg2 ;
-(id)colorForState:(long long)arg1 style:(long long)arg2 ;
-(UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2 ;
-(id)backgroundImageForState:(long long)arg1 style:(long long)arg2 ;
-(UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2 ;
-(void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(id)_fallbackFontForState:(long long)arg1 ;
-(id)_fallbackColorForState:(long long)arg1 ;
@end

