/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	HSHomeSharingLibrary* _library;

}

@property (nonatomic,retain) HSHomeSharingLibrary * library;              //@synthesize library=_library - In the implementation block
-(HSHomeSharingLibrary *)library;
-(void)setLibrary:(HSHomeSharingLibrary *)arg1 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
@end

