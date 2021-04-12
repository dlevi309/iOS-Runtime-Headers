/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>
#import <libobjc.A.dylib/NTKStopwatchComplicationDisplay.h>

@class NTKColoringLabel, NSString;

@interface NTKZeusStopwatchComplicationView : NTKZeusFramedComplicationView <NTKStopwatchComplicationDisplay> {

	NTKColoringLabel* _label;
	long long _stopwatchState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)init;
-(CGRect)contentFrame;
-(void)layoutSubviews;
-(id)_createLabel;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)setStopwatchState:(long long)arg1 elapsedTime:(double)arg2 shouldPauseTextCountdown:(BOOL)arg3 timeTravelDate:(id)arg4 ;
@end

