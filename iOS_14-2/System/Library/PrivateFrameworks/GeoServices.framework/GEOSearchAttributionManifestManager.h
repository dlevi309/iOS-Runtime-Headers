/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	id<GEOSearchAttributionServerProxy> _serverProxy;

}

@property (nonatomic,readonly) id<GEOSearchAttributionServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(id)sharedManager;
+(void)useProxy:(Class)arg1 ;
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(id)init;
-(id<GEOSearchAttributionServerProxy>)serverProxy;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

