/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKChronoSubDial.h>

@class SKNode;

@interface NTKChronoUpperSubDial : NTKChronoSubDial {

	SKNode* _upper60Ticks;
	SKNode* _upper30Ticks;
	SKNode* _upper63Ticks;
	SKNode* _30mLabels;
	SKNode* _15mLabels;
	SKNode* _3mLabels;
	SKNode* _2mLabels;

}
-(void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3 ;
-(id)initWithRadius:(double)arg1 forDevice:(id)arg2 ;
-(id)labelsForTimeScale:(unsigned long long)arg1 ;
-(id)ticksForTimeScale:(unsigned long long)arg1 ;
-(void)updateTimeScale:(unsigned long long)arg1 ;
-(void)colorize:(id)arg1 ;
@end

