/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>

@protocol OS_dispatch_source;
@class geo_isolater, NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface GEODataRequestThrottler : NSObject <GEOConfigChangeListenerDelegate> {

	geo_isolater* _isolation;
	NSDictionary* _defaultThrottlePolicy;
	NSDictionary* _globalThrottlePolicy;
	BOOL _throttlePoliciesCached;
	NSMutableDictionary* _throttlers;
	NSObject*<OS_dispatch_source> _updateStateTimer;
	int _defaultChangedNotification;
	id _networkChangedNotification;
	unsigned char _throttleEventLogLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedThrottler;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE88*)arg1 ;
-(id)init;
-(id)throttlerForKeyPath:(id)arg1 ;
-(BOOL)allowRequest:(SCD_Struct_GE91)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(NSString *)description;
-(void)pruneThrottlers;
-(void)getInfoForRequest:(SCD_Struct_GE91)arg1 client:(id)arg2 timeUntilNextReset:(double*)arg3 availableRequestCount:(unsigned*)arg4 ;
-(void)_withThrottlersForKey:(GEOThrottleKey)arg1 auditToken:(id)arg2 do:(/*^block*/id)arg3 ;
-(void)reset;
-(void)_reset;
-(id)_init;
-(void)_updateSavedState:(id)arg1 ;
-(void)_pruneThrottlers;
-(void)dealloc;
@end

