/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/_GEODirectionsRequesterServerProxy.h>

@class geo_isolater, NSMutableArray, NSString;

@interface _GEODirectionsRequesterServerRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy> {

	geo_isolater* _isolater;
	NSMutableArray* _pendingRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_finishRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(BOOL)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(void)cancelRequest:(id)arg1 ;
@end

