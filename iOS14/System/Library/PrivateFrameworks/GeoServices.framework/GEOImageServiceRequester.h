/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)cancelImageServiceRequest:(id)arg1 ;
-(BOOL)_finishRequest:(id)arg1 ;
-(unsigned long long)calculateFreeableSize;
@end

