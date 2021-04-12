/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(BOOL)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(BOOL)_finishRequest:(id)arg1 ;
@end

