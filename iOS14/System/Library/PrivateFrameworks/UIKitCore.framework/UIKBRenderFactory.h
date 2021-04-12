/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIKBRenderingContext, NSMutableArray, NSArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject {

	UIKBRenderingContext* _renderingContext;
	NSMutableArray* _segmentTraits;
	BOOL _suppressSegmentTraits;
	double _rivenSizeFactor;
	BOOL _lightweightFactory;
	double _scale;
	CGSize _stretchFactor;
	BOOL _boldTextEnabled;
	BOOL _increasedContrastEnabled;
	BOOL _allowsPaddles;
	BOOL _preferStringKeycapOverImage;
	BOOL _drawsOneHandedAffordance;

}

@property (nonatomic,readonly) NSArray * segmentTraits;                                //@synthesize segmentTraits=_segmentTraits - In the implementation block
@property (assign,nonatomic) double rivenSizeFactor;                                   //@synthesize rivenSizeFactor=_rivenSizeFactor - In the implementation block
@property (assign,nonatomic) BOOL lightweightFactory;                                  //@synthesize lightweightFactory=_lightweightFactory - In the implementation block
@property (assign,nonatomic) BOOL increasedContrastEnabled;                            //@synthesize increasedContrastEnabled=_increasedContrastEnabled - In the implementation block
@property (assign,nonatomic) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize stretchFactor;                                     //@synthesize stretchFactor=_stretchFactor - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                  //@synthesize renderingContext=_renderingContext - In the implementation block
@property (getter=renderConfig,readonly) UIKBRenderConfig * renderConfig; 
@property (assign,nonatomic) BOOL allowsPaddles;                                       //@synthesize allowsPaddles=_allowsPaddles - In the implementation block
@property (assign,nonatomic) BOOL preferStringKeycapOverImage;                         //@synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage - In the implementation block
@property (nonatomic,readonly) BOOL boldTextEnabled;                                   //@synthesize boldTextEnabled=_boldTextEnabled - In the implementation block
@property (assign,nonatomic) BOOL drawsOneHandedAffordance;                            //@synthesize drawsOneHandedAffordance=_drawsOneHandedAffordance - In the implementation block
+(BOOL)_enabled;
+(id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3 ;
+(BOOL)couldUseGlyphSelectorForDisplayString:(id)arg1 ;
+(Class)factoryClassForVisualStyle:(SCD_Struct_UI94)arg1 ;
+(id)factoryForVisualStyle:(SCD_Struct_UI94)arg1 renderingContext:(id)arg2 skipLayoutSegments:(BOOL)arg3 ;
+(id)_characterSetForGlyphSelectors;
+(id)segmentedControlColor:(BOOL)arg1 ;
+(id)lightweightFactoryForVisualStyle:(SCD_Struct_UI94)arg1 renderingContext:(id)arg2 ;
+(id)factoryForVisualStyle:(SCD_Struct_UI94)arg1 renderingContext:(id)arg2 ;
+(long long)_graphicsQuality;
-(id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(BOOL)arg4 blurBlending:(BOOL)arg5 ;
-(void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4 ;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(double)scale;
-(void)setStretchFactor:(CGSize)arg1 ;
-(BOOL)preferStringKeycapOverImage;
-(id)displayContentsForKey:(id)arg1 ;
-(id)defaultKeyBackgroundColorName;
-(UIKBRenderConfig *)renderConfig;
-(CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2 ;
-(CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2 ;
-(double)RivenFactor:(double)arg1 ;
-(id)backgroundTraitsForKeyplane:(id)arg1 ;
-(BOOL)popupKeyUsesCustomKeyContentView:(id)arg1 ;
-(Class)contentViewClassForPopupKey:(id)arg1 ;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(double)keyCornerRadius;
-(void)setLightweightFactory:(BOOL)arg1 ;
-(double)emojiPopupDividerKeyOffset;
-(void)scaleTraits:(id)arg1 ;
-(void)setupLayoutSegments;
-(CGPoint)RivenPointFactor:(CGPoint)arg1 ;
-(id)lowQualityLayeredBackgroundColorName;
-(void)lowQualityTraits:(id)arg1 ;
-(long long)enabledBlendForm;
-(id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(BOOL)lightweightFactory;
-(void)customizeLanguageIndicatorTraitsForTraits:(id)arg1 ;
-(id)hashStringElement;
-(BOOL)keyIsRightToLeftSensitive:(id)arg1 ;
-(BOOL)useBlueThemingForKey:(id)arg1 ;
-(id)controlKeyBackgroundColorName;
-(id)deleteKeyImageName;
-(BOOL)allowsPaddles;
-(id)deleteOnKeyImageName;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(double)skinnyKeyThreshold;
-(id)globalEmojiKeyImageName;
-(id)keyImageNameWithSkinnyVariation:(id)arg1 ;
-(id)handwritingMoreKeyImageName;
-(id)messagesWriteboardKeyImageName;
-(id)globalKeyImageName;
-(id)dismissKeyImageName;
-(id)dictationKeyImageName;
-(id)copyKeyImageName;
-(id)leftArrowKeyImageName;
-(id)rightArrowKeyImageName;
-(id)cutKeyImageName;
-(id)pasteKeyImageName;
-(id)undoKeyImageName;
-(id)boldKeyImageName;
-(id)biuKeyImageName;
-(id)multitapCompleteKeyImageName;
-(id)ZWNJKeyImageName;
-(id)lightKeycapsFontName;
-(id)muttitapReverseKeyImageName;
-(void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2 ;
-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1 ;
-(double)translucentGapWidth;
-(long long)lightHighQualityEnabledBlendForm;
-(id)defaultKeyShadowColorName;
-(id)_controlKeyBackgroundColorName;
-(id)_defaultControlKeyBackgroundColorName;
-(void)suppressLayoutSegments;
-(void)setPreferStringKeycapOverImage:(BOOL)arg1 ;
-(id)controlKeyShadowColorName;
-(void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2 ;
-(id)thinTextFontName;
-(void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2 ;
-(void)addLayoutSegment:(id)arg1 ;
-(UIKBRenderingContext *)renderingContext;
-(BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2 ;
-(id)controlKeyForegroundColorName;
-(id)spaceKeyGrabberHandlesImageName;
-(id)thinKeycapsFontName;
-(id)lightPadKeycapsFontName;
-(id)lightTextFontName;
-(BOOL)allowsPaddleForKey:(id)arg1 ;
-(long long)glyphSelectorForDisplayString:(id)arg1 ;
-(double)rivenSizeFactor;
-(BOOL)boldTextEnabled;
-(void)setRivenSizeFactor:(double)arg1 ;
-(BOOL)increasedContrastEnabled;
-(void)setAllowsPaddles:(BOOL)arg1 ;
-(void)setIncreasedContrastEnabled:(BOOL)arg1 ;
-(BOOL)drawsOneHandedAffordance;
-(void)setDrawsOneHandedAffordance:(BOOL)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)passcodeEdgeWeight;
-(id)passcodeKeyEdgeColorName;
-(id)passcodeActiveControlKeyTraits;
-(id)passcodeShiftedControlKeyTraits;
-(void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3 ;
-(id)passcodeBackgroundTraitsForKeyplane:(id)arg1 ;
-(id)passcodeControlKeyTraits;
-(id)extraPasscodePaddleTraits;
-(id)traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(CGSize)stretchFactor;
-(void)dealloc;
-(NSArray *)segmentTraits;
@end

