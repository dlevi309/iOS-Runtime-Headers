/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol _GEOLocationShifterProxy <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@required
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_GE32)arg1;
-(unsigned)locationShiftFunctionVersion;
-(BOOL)isLocationShiftEnabled;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)flushDiskCache;

@end

