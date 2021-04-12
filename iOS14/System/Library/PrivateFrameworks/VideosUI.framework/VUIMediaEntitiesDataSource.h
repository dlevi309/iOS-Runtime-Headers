/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryDataSource.h>

@class VUIMediaEntityFetchRequest, NSArray, NSDictionary;

@interface VUIMediaEntitiesDataSource : VUILibraryDataSource {

	BOOL _shouldFetchArtworkInfoDictionaries;
	VUIMediaEntityFetchRequest* _fetchRequest;
	NSArray* _mediaEntities;
	NSArray* _grouping;
	NSDictionary* _artworkInfoDictionaryByPurchaseID;

}

@property (nonatomic,retain) VUIMediaEntityFetchRequest * fetchRequest;                     //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) NSArray * mediaEntities;                                       //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,retain) NSArray * grouping;                                            //@synthesize grouping=_grouping - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchArtworkInfoDictionaries;                       //@synthesize shouldFetchArtworkInfoDictionaries=_shouldFetchArtworkInfoDictionaries - In the implementation block
@property (nonatomic,retain) NSDictionary * artworkInfoDictionaryByPurchaseID;              //@synthesize artworkInfoDictionaryByPurchaseID=_artworkInfoDictionaryByPurchaseID - In the implementation block
-(NSArray *)grouping;
-(VUIMediaEntityFetchRequest *)fetchRequest;
-(void)setGrouping:(NSArray *)arg1 ;
-(void)setFetchRequest:(VUIMediaEntityFetchRequest *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(NSArray *)mediaEntities;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(BOOL)shouldFetchArtworkInfoDictionaries;
-(void)setArtworkInfoDictionaryByPurchaseID:(NSDictionary *)arg1 ;
-(void)setShouldFetchArtworkInfoDictionaries:(BOOL)arg1 ;
-(NSDictionary *)artworkInfoDictionaryByPurchaseID;
@end

