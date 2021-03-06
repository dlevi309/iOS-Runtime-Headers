/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKVictoryAnalogBackgroundColorPalette, NTKVictoryAnalogBackgroundViewDelegate;
@class CLKDevice, UIImage, UIView, NSMutableArray, NSArray, NSMutableDictionary, NSDictionary, CAMediaTimingFunction, NTKVictoryLogoButton;

@interface NTKVictoryAnalogBackgroundView : UIView {

	CLKDevice* _device;
	UIImage* _dotImage;
	UIView* _contentView;
	NSMutableArray* _ringLayers;
	BOOL _ringLayerIsDigit[12];
	NSArray* _largeHourMarkerLabels;
	NSArray* _mediumNumberLayers;
	NSMutableDictionary* _smallHourMarkerLabelsByIndex;
	NSArray* _temporaryNumberLayers;
	NSArray* _activeDigitIndices;
	BOOL _canonicalDigitStatesByStyle[3][12];
	NSDictionary* _transitionDigitTargetStates;
	NSArray* _transitionDigitIndices;
	NSArray* _transitionStaticDigitIndices;
	unsigned long long _transitionFromStyle;
	unsigned long long _transitionToStyle;
	CAMediaTimingFunction* _transitionTimingFunction;
	NTKVictoryLogoButton* _logoButton;
	NTKVictoryLogoButton* _smallLogoButton;
	CGPoint _logoPositionRing;
	CGPoint _logoPositionNoDigits;
	CGPoint _logoPositionBig;
	CGPoint _logoPositionSmallFont;
	CGPoint _logoPositionCircularDial;
	double _dialShapeFraction;
	id<NTKVictoryAnalogBackgroundColorPalette> _palette;
	unsigned long long _style;
	unsigned long long _dialShape;
	UIImage* _logoImage;
	id<NTKVictoryAnalogBackgroundViewDelegate> _delegate;

}

@property (nonatomic,retain) id<NTKVictoryAnalogBackgroundColorPalette> palette;                      //@synthesize palette=_palette - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long dialShape;                                            //@synthesize dialShape=_dialShape - In the implementation block
@property (nonatomic,retain) UIImage * logoImage;                                                     //@synthesize logoImage=_logoImage - In the implementation block
@property (assign,nonatomic,__weak) id<NTKVictoryAnalogBackgroundViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_disabledLayerActions;
-(id<NTKVictoryAnalogBackgroundColorPalette>)palette;
-(id<NTKVictoryAnalogBackgroundViewDelegate>)delegate;
-(id)_dotImage;
-(void)setDelegate:(id<NTKVictoryAnalogBackgroundViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setLogoImage:(UIImage *)arg1 ;
-(void)setPalette:(id<NTKVictoryAnalogBackgroundColorPalette>)arg1 ;
-(UIImage *)logoImage;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(unsigned long long)dialShape;
-(void)setInTimeTravel:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 fromPalette:(id)arg4 toPalette:(id)arg5 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4 ;
-(void)willBeginEditing;
-(void)_logoTapped:(id)arg1 ;
-(CGPoint)logoPositionForStyle:(unsigned long long)arg1 ;
-(id)_circularDialLogoImage;
-(CGPoint)centerPointForSmallHourMarkerAtIndex:(unsigned long long)arg1 ;
-(void)layoutNumbers;
-(CGPoint)_ringDigitOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addLogoButtonIfNeeded;
-(void)_createRingLayersIfNeeded;
-(void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
-(void)_clearTransitionStateForStyle:(unsigned long long)arg1 ;
-(BOOL)isCircularDial;
-(void)addSmallLogoButtonIfNeeded;
-(void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
-(void)setDialShape:(unsigned long long)arg1 ;
-(double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4 ;
-(id)_activeRingLayers;
-(void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(BOOL)arg2 ;
-(double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4 ;
-(CATransform3D)_intermediateTransformForBigNumberAtIndex:(unsigned long long)arg1 fraction:(double)arg2 ;
-(CGAffineTransform)_affineTransformFromTransform3D:(CATransform3D)arg1 ;
-(id)_bigNumberInitialTransforms;
-(void)_applyPalette:(id)arg1 forStyle:(unsigned long long)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4 animateElements:(BOOL)arg5 ;
-(id)_activeRingObjects;
-(CGColorRef)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3 ;
-(id)_createAndAddLayersWithCount:(unsigned long long)arg1 ;
-(id)_createSmallHourMarkerLabelForIndex:(id)arg1 ;
-(id)_createHourMarkerLabelsWithFontSize:(double)arg1 ;
-(unsigned long long)_digitForIndex:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromDialShape:(unsigned long long)arg2 toDialShape:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromOlympusStyle:(unsigned long long)arg2 toOlympusStyle:(unsigned long long)arg3 ;
@end

