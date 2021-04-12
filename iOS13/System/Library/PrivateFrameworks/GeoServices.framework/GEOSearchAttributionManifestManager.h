/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	id<GEOSearchAttributionServerProxy> _serverProxy;

}

@property (nonatomic,readonly) id<GEOSearchAttributionServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(id)sharedManager;
+(void)useProxy:(Class)arg1 ;
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(void)setUseLocalProxy:(BOOL)arg1 ;
-(id)init;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<GEOSearchAttributionServerProxy>)serverProxy;
@end

