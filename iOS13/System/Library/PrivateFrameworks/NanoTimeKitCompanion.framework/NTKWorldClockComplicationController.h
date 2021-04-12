/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_activate;
-(void)_deactivate;
-(void)_updateDisplay;
-(void)_handleTimeZoneChange;
-(void)_handleLocaleChange;
-(BOOL)hasTapAction;
-(id)complicationApplicationIdentifier;
-(void)performTapAction;
-(void)setPauseDate:(id)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleAbbreviationStoreChange:(id)arg1 ;
-(void)_startTimeTravelAnimated:(BOOL)arg1 ;
-(void)_endTimeTravelAnimated:(BOOL)arg1 ;
@end

