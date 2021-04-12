/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource
-(id)init;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
@end

