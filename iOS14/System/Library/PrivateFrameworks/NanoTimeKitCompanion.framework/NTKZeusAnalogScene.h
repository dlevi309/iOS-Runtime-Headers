/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NSDate, SKNode, NSArray, SKSpriteNode, NTKZeusColorPalette, NSCalendar;

@interface NTKZeusAnalogScene : NTKAnalogScene {

	NSDate* _overrideDate;
	SKNode* _fontContainerNodes[2];
	NSArray* _fontHourNodes[2];
	SKNode* _logoContainerNode;
	SKSpriteNode* _logo1Node;
	SKSpriteNode* _logo2Node;
	SKNode* _multicolorContainerNode;
	SKSpriteNode* _multicolorBackground;
	SKSpriteNode* _multicolorSplit[6];
	double _previousCorrectionTime;
	double _currentTime;
	double _startSplitRotation;
	double _endSplitRotation;
	double _rotationDuration;
	NTKZeusColorPalette* _palette;
	unsigned long long _currentDensity;
	unsigned long long _style;
	BOOL _isEditing;
	BOOL _isStatusIconVisible;
	double _bleedZRotation;
	BOOL _scrubbing;
	NSCalendar* _calendar;

}

@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;              //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                        //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) double backgroundAlpha; 
-(void)update:(double)arg1 ;
-(NSCalendar *)calendar;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)applyStyle:(unsigned long long)arg1 ;
-(double)backgroundAlpha;
-(BOOL)isScrubbing;
-(void)dealloc;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 forDevice:(id)arg2 ;
-(void)applyDensity:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)_significantTimeChanged;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_update12ForStatusIconVisibility;
-(void)_update12ForStatusIconVisibilityAnimated:(BOOL)arg1 ;
-(id)_hoursNodeForStyle:(unsigned long long)arg1 bleed:(unsigned long long)arg2 ;
-(void)_displayZoomScale:(double)arg1 fraction:(double)arg2 ;
-(void)_applyHourLabelCollectionNode:(id)arg1 ;
-(CGPoint)_logoContainerPositionForStyle:(unsigned long long)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromHourLabelCollectionNode:(id)arg2 toHourLabelCollectionNode:(id)arg3 ;
-(void)_applyDialColor:(id)arg1 withBleed:(unsigned long long)arg2 ;
-(void)_applyComplicationColor:(id)arg1 ;
-(id)_nodeForBleed:(unsigned long long)arg1 ;
-(double)_digitAlphaForEditMode:(long long)arg1 ;
-(id)auxiliaryScrubbingObscuredNodes;
-(void)setAdjustsForStatusBarIcon:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)centerOf4NumeralForStyle:(unsigned long long)arg1 ;
-(void)setOverrideDate:(id)arg1 hourRadians:(double)arg2 minuteRadians:(double)arg3 secondRadians:(double)arg4 ;
-(double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(BOOL)arg2 ;
-(unsigned long long)currentDensity;
-(double)_lowerComplicationAlphaForEditing:(BOOL)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 witScale:(double)arg4 ;
-(double)_splitAngle;
@end

