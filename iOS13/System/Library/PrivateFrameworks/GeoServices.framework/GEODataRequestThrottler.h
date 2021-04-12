/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)_init;
-(void)reset;
-(void)_reset;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE122*)arg1 ;
-(void)pruneThrottlers;
-(void)_withThrottlersForKey:(GEOThrottleKey)arg1 auditToken:(id)arg2 do:(/*^block*/id)arg3 ;
-(id)throttlerForKeyPath:(id)arg1 ;
-(void)_pruneThrottlers;
-(void)_updateSavedState:(id)arg1 ;
-(BOOL)allowRequest:(SCD_Struct_GE94)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(void)getInfoForRequest:(SCD_Struct_GE94)arg1 client:(id)arg2 timeUntilNextReset:(double*)arg3 availableRequestCount:(unsigned*)arg4 ;
@end

