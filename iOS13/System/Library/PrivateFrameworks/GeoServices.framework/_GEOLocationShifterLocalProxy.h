/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOLocationShifterProxy.h>

@protocol OS_dispatch_queue;
@class _GEOLocationShiftRequester, NSObject, GEOLocationShifterPersistence, NSString;

@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy> {

	_GEOLocationShiftRequester* _requester;
	int _resetPrivacyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) GEOLocationShifterPersistence * persistentCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_GE32)arg1 ;
-(unsigned)locationShiftFunctionVersion;
-(BOOL)isLocationShiftEnabled;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushDiskCache;
-(GEOLocationShifterPersistence *)persistentCache;
-(void)_prunePersistentCache;
-(void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

