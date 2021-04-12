/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NSTimer, NSString, CLLocation;

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel> {

	NSDate* _timeTravelDate;
	struct {
		unsigned wantsPhaseName : 1;
		unsigned wantsPhaseNumber : 1;
		unsigned wantsEventAndDate : 1;
		unsigned wantsLocked : 1;
		unsigned wantsPaused : 1;
	}  _displayFlags;
	NSTimer* _afterEventTimer;
	BOOL _paused;
	BOOL _missedUpdateWhilePaused;
	NSString* _token;
	CLLocation* _location;

}

@property (nonatomic,retain) NSString * token;                                                        //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,__weak,readonly) id<NTKMoonPhaseComplicationDisplay> legacyDisplay; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(CLLocation *)location;
-(void)_deactivate;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)_activate;
-(void)_updateDisplay;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setShowsLockedUI:(BOOL)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_asyncUpdateDisplay;
-(void)_updateDisplayForced:(BOOL)arg1 ;
-(void)_invalidateEventTimer;
-(void)_afterEventTimerFired:(id)arg1 ;
-(void)_scheduleAfterEventTimer:(id)arg1 ;
@end

