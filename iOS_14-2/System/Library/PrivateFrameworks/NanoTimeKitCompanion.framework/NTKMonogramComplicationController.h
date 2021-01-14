/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSString;

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel> {

	NSString* _monogramText;

}

@property (nonatomic,__weak,readonly) id<NTKMonogramComplicationDisplay> legacyDisplay; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)_deactivate;
-(void)_activate;
-(void)_updateDisplay;
-(BOOL)hasTapAction;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handleMonogramTextReload;
-(void)_reloadMonogramText;
-(void)_configureForLegacyDisplay:(id)arg1 ;
@end

