/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {

	GEOLocationShifter* _locationShifter;

}

@property (getter=isLocationShiftEnabled,nonatomic,readonly) BOOL locationShiftEnabled; 
+(BOOL)isLocationShiftRequiredForLocation:(id)arg1 ;
-(id)init;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(BOOL)isLocationShiftEnabled;
@end

