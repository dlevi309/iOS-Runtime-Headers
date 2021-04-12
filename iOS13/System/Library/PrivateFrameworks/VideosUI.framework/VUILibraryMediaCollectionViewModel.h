/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray, NSDictionary;

@interface VUILibraryMediaCollectionViewModel : NSObject {

	NSArray* _seasonViewModels;
	NSDictionary* _seasonBySeasonIdentifier;
	NSDictionary* _episodeShelfViewControllerBySeasonIdentifier;
	NSDictionary* _productLockupViewBySeasonIdentifier;
	NSDictionary* _episodesBySeasonIdentifer;

}

@property (nonatomic,retain) NSArray * seasonViewModels;                                               //@synthesize seasonViewModels=_seasonViewModels - In the implementation block
@property (nonatomic,retain) NSDictionary * seasonBySeasonIdentifier;                                  //@synthesize seasonBySeasonIdentifier=_seasonBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * episodeShelfViewControllerBySeasonIdentifier;              //@synthesize episodeShelfViewControllerBySeasonIdentifier=_episodeShelfViewControllerBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * productLockupViewBySeasonIdentifier;                       //@synthesize productLockupViewBySeasonIdentifier=_productLockupViewBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * episodesBySeasonIdentifer;                                 //@synthesize episodesBySeasonIdentifer=_episodesBySeasonIdentifer - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
-(BOOL)hasContent;
-(NSArray *)seasonViewModels;
-(NSDictionary *)productLockupViewBySeasonIdentifier;
-(NSDictionary *)episodeShelfViewControllerBySeasonIdentifier;
-(NSDictionary *)seasonBySeasonIdentifier;
-(NSDictionary *)episodesBySeasonIdentifer;
-(void)setSeasonViewModels:(NSArray *)arg1 ;
-(void)setSeasonBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setProductLockupViewBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setEpisodeShelfViewControllerBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setEpisodesBySeasonIdentifer:(NSDictionary *)arg1 ;
@end

