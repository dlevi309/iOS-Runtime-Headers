/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_activate;
-(void)_deactivate;
-(void)_updateDisplay;
-(BOOL)hasTapAction;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handleMonogramTextReload;
-(void)_reloadMonogramText;
-(void)_configureForLegacyDisplay:(id)arg1 ;
@end

