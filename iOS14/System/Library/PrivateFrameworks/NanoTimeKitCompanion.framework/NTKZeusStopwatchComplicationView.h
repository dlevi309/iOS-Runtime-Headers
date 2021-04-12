/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>
#import <libobjc.A.dylib/NTKStopwatchComplicationDisplay.h>

@class NTKColoringLabel, NSString;

@interface NTKZeusStopwatchComplicationView : NTKZeusComplicationView <NTKStopwatchComplicationDisplay> {

	NTKColoringLabel* _label;
	long long _stopwatchState;

}

@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)contentFrame;
-(id)_createLabel;
-(void)layoutSubviews;
-(id)initWithBackgroundView:(id)arg1 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(CGRect)padContentFrame:(CGRect)arg1 ;
-(void)setStopwatchState:(long long)arg1 elapsedTime:(double)arg2 shouldPauseTextCountdown:(BOOL)arg3 timeTravelDate:(id)arg4 ;
@end

