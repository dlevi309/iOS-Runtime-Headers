/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOLocationShifterProxy.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSNumber, NSString;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _shiftingEnabled;
	NSNumber* _shiftingFxnVersion;
	NSCache* _shiftFunctionCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSCache * memoryCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)flushDiskCache;
-(NSCache *)memoryCache;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(unsigned)locationShiftFunctionVersion;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)_isLocationShiftRequiredForCoordinateInProcess:(GEOCoarseLocationLatLng)arg1 ;
-(BOOL)isLocationShiftEnabled;
-(BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(GEOCoarseLocationLatLng)arg1 ;
@end

