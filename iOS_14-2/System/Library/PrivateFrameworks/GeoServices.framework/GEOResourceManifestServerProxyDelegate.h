/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1;

@end

