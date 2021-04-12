/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSCache;


@protocol _GEOLocationShifterProxy <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSCache * memoryCache; 
@required
-(void)flushDiskCache;
-(NSCache *)memoryCache;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1;
-(unsigned)locationShiftFunctionVersion;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isLocationShiftEnabled;

@end

