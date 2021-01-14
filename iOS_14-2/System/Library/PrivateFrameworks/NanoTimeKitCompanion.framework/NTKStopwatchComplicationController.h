/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_deactivate;
-(void)_activate;
-(void)_updateDisplay;
-(NSDate *)timeTravelDate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleStopwatchChange;
@end

