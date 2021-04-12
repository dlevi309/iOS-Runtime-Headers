/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSCache, NSObject, NSString;

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver> {

	BOOL _isRequestingShiftFunction;
	os_unfair_lock_s _lock;
	NSMutableArray* _locationsToShift;
	NSCache* _shiftFunctionCache;
	int _resetPrivacyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL locationShiftEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_proxy;
+(void)useLocalProxy;
+(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_GE32)arg1 ;
+(unsigned)locationShiftFunctionVersion;
+(BOOL)isLocationShiftEnabled;
+(void)flushDiskCache;
-(id)init;
-(void)dealloc;
-(void)_reset;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6 callbackQueue:(id)arg7 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(BOOL)_shiftLocation:(id)arg1 ;
-(void)_requestNextShiftFunctionIfNecessary;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(BOOL)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(SCD_Struct_GE32*)arg3 shiftedAccuracy:(double*)arg4 ;
-(BOOL)locationShiftEnabled;
-(void)shiftCoordinate:(SCD_Struct_GE32)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftCoordinate:(SCD_Struct_GE32)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(BOOL)shiftCoordinate:(SCD_Struct_GE32)arg1 accuracy:(double)arg2 shiftedCoordinate:(SCD_Struct_GE32*)arg3 shiftedAccuracy:(double*)arg4 ;
-(void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

