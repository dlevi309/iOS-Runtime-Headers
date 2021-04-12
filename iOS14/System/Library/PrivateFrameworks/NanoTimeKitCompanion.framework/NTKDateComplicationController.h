/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NTKDateComplication;

@interface NTKDateComplicationController : NTKComplicationController <NTKTimeTravel> {

	unsigned long long _displayDateStyle;
	NSDate* _timeTravelDate;

}

@property (nonatomic,readonly) NTKDateComplication * complication; 
@property (nonatomic,__weak,readonly) id<NTKDateComplicationDisplay> legacyDisplay; 
+(id)textForDateStyle:(unsigned long long)arg1 ;
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_textForDate:(id)arg1 dateStyle:(unsigned long long)arg2 ;
-(void)_deactivate;
-(void)_activate;
-(void)_updateDisplay;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleTimeChangeNotification;
-(void)_setTextInDisplayIfNeededWithDate:(id)arg1 ;
@end

