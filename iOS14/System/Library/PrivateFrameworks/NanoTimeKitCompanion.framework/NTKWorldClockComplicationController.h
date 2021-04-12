/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NTKWorldClockComplication;

@interface NTKWorldClockComplicationController : NTKComplicationController <NTKTimeTravel> {

	struct {
		unsigned wantsShortCity : 1;
		unsigned wantsLongCity : 1;
	}  _displayFlags;
	NSDate* _timeTravelDate;

}

@property (nonatomic,__weak,readonly) id<NTKWorldClockComplicationDisplay> legacyDisplay; 
@property (nonatomic,readonly) NTKWorldClockComplication * complication; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)_handleTimeZoneChange;
-(void)_deactivate;
-(void)_activate;
-(void)_updateDisplay;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setPauseDate:(id)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)_handleLocaleChange;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleAbbreviationStoreChange:(id)arg1 ;
-(void)_startTimeTravelAnimated:(BOOL)arg1 ;
-(void)_endTimeTravelAnimated:(BOOL)arg1 ;
@end

