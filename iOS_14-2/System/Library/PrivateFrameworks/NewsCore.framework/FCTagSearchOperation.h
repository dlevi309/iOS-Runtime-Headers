/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSString, FCTagRecordSource, FCCKContentDatabase, FCAssetManager, FCStreamingResults, NSError;

@interface FCTagSearchOperation : FCOperation {

	id<FCContentContext> _contentContext;
	NSString* _searchString;
	unsigned long long _tagType;
	unsigned long long _batchSize;
	/*^block*/id _searchResultsBlock;
	FCTagRecordSource* _tagRecordSource;
	FCCKContentDatabase* _contentDatabase;
	FCAssetManager* _assetManager;
	FCStreamingResults* _searchResults;
	NSError* _searchError;

}

@property (nonatomic,retain) FCTagRecordSource * tagRecordSource;                //@synthesize tagRecordSource=_tagRecordSource - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * contentDatabase;              //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,retain) FCAssetManager * assetManager;                      //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) FCStreamingResults * searchResults;                 //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSError * searchError;                              //@synthesize searchError=_searchError - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NSString * searchString;                              //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) unsigned long long tagType;                         //@synthesize tagType=_tagType - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                       //@synthesize batchSize=_batchSize - In the implementation block
@property (copy) id searchResultsBlock;                                          //@synthesize searchResultsBlock=_searchResultsBlock - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(id)_localIdentifier;
-(FCCKContentDatabase *)contentDatabase;
-(void)setAssetManager:(FCAssetManager *)arg1 ;
-(id<FCContentContext>)contentContext;
-(FCTagRecordSource *)tagRecordSource;
-(id)searchResultsBlock;
-(void)setTagType:(unsigned long long)arg1 ;
-(void)setSearchResultsBlock:(id)arg1 ;
-(FCAssetManager *)assetManager;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setSearchResults:(FCStreamingResults *)arg1 ;
-(unsigned long long)tagType;
-(FCStreamingResults *)searchResults;
-(void)setSearchError:(NSError *)arg1 ;
-(void)_performSearchQuery:(/*^block*/id)arg1 ;
-(NSError *)searchError;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(NSString *)searchString;
-(id)_establishStreamOfTags;
-(void)setContentDatabase:(FCCKContentDatabase *)arg1 ;
@end

