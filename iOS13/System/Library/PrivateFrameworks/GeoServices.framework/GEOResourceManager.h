/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;

}
+(id)sharedManager;
+(id)sharedManagerForConfiguration:(id)arg1 ;
+(id)sharedManagerForTileGroupIdentifier:(unsigned)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)allResourceNames;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
@end

