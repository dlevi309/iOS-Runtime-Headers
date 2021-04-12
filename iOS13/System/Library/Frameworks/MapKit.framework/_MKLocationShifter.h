/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {

	GEOLocationShifter* _locationShifter;

}

@property (getter=isLocationShiftEnabled,nonatomic,readonly) BOOL locationShiftEnabled; 
+(BOOL)isLocationShiftRequiredForLocation:(id)arg1 ;
-(id)init;
-(BOOL)isLocationShiftEnabled;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
@end

