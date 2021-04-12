/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, CALayer, CAReplicatorLayer, NSArray;

@interface NTKExplorerDialView : UIView {

	CLKDevice* _device;
	BOOL _editing;
	CALayer* _ringLayer;
	CAReplicatorLayer* _hourReplicatorLayer;
	CALayer* _hourTickLayer;
	CAReplicatorLayer* _minuteReplicatorLayer;
	CAReplicatorLayer* _minuteCollectionLayer;
	CALayer* _minuteTickLayer;
	CAReplicatorLayer* _subdialReplicatorLayer;
	CALayer* _secondTickLayer;
	NSArray* _hourNumerals;
	NSArray* _minuteNumerals;
	unsigned long long _currentDensityTransition;
	unsigned long long _density;

}

@property (assign,nonatomic) unsigned long long density;              //@synthesize density=_density - In the implementation block
@property (nonatomic,readonly) CALayer * subdialLayer; 
-(void)setDensity:(unsigned long long)arg1 ;
-(unsigned long long)density;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)cleanupAfterZoom;
-(void)prepareForZoom;
-(void)prepareForEditing;
-(void)cleanupAfterEditing;
-(void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3 ;
-(void)applyZoomFraction:(double)arg1 ;
-(id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2 ;
-(void)_applyDensity:(unsigned long long)arg1 ;
-(CALayer *)subdialLayer;
-(void)_addOrRemoveChildLayers;
-(id)_minuteTickShowAnimation;
-(id)_secondTickBrightenAnimation;
-(id)_numeralShowAnimation;
-(id)_secondTickDimAnimation;
-(id)_hourNumeralHideAnimation;
-(id)_minuteClusterExpandAnimation;
-(id)_minuteTickShrinkAndGrow;
-(id)_minuteTickBreakAnimation;
@end

