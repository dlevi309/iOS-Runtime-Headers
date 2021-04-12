/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class geo_isolater, NSHashTable, NSMapTable;

@interface GEOImageServiceRequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingRequests;
	NSMapTable* _requestToIdentifier;

}
+(id)sharedRequester;
-(id)init;
-(unsigned long long)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(unsigned long long)calculateFreeableSize;
-(BOOL)_finishRequest:(id)arg1 ;
-(void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)cancelImageServiceRequest:(id)arg1 ;
@end

