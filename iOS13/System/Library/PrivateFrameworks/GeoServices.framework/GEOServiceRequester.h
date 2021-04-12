/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOServiceRequester : NSObject {

	NSMapTable* _pendingRequests;
	os_unfair_lock_s _pendingRequestsLock;

}
-(id)init;
-(void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
@end

