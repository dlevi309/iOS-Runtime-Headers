/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol MPArtworkDataSource;
@class MPArtworkCatalog;

@interface _VUIMediaPlayerImageLoaderOperationSet : NSObject {

	id<MPArtworkDataSource> _dataSource;
	MPArtworkCatalog* _artworkCatalog;

}

@property (nonatomic,retain) id<MPArtworkDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;               //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(id<MPArtworkDataSource>)dataSource;
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
@end

