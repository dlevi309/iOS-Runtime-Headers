/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate;

@interface NTKStopwatchComplicationController : NTKComplicationController <NTKTimeTravel> {

	NSDate* _timeTravelDate;

}

@property (nonatomic,__weak,readonly) id<NTKStopwatchComplicationDisplay> legacyDisplay; 
@property (nonatomic,retain) NSDate * timeTravelDate;                                                 //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)_activate;
-(void)_deactivate;
-(void)_updateDisplay;
-(BOOL)hasTapAction;
-(id)complicationApplicationIdentifier;
-(NSDate *)timeTravelDate;
-(void)performTapAction;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleStopwatchChange;
@end

