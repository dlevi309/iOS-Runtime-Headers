/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <libobjc.A.dylib/MPArtworkDataSource.h>

@class NSCache, NSString;

@interface NMSRecommendationArtworkDataSource : NSObject <MPArtworkDataSource> {

	NSCache* _fallbackCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSource;
+(id)artworkCacheDirectory;
-(id)init;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(BOOL)arg2 ;
-(void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2 ;
-(id)_cachedRepresentationForCatalog:(id)arg1 ;
-(id)_cachedArtworkImageWithToken:(id)arg1 ;
-(BOOL)artworkCacheExistsForToken:(id)arg1 ;
@end

