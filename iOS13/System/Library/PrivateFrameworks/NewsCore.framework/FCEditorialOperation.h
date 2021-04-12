/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, NSArray, FCVideoArticlesOperationResult, FCSpotlightOperationResult, NSError;

@interface FCEditorialOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	NSArray* _trendingHeadlines;
	FCVideoArticlesOperationResult* _topVideosResult;
	FCVideoArticlesOperationResult* _moreVideosResult;
	FCSpotlightOperationResult* _spotlightResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;
	NSArray* _editorialSectionGroups;

}

@property (copy) NSArray * trendingHeadlines;                                      //@synthesize trendingHeadlines=_trendingHeadlines - In the implementation block
@property (retain) FCVideoArticlesOperationResult * topVideosResult;               //@synthesize topVideosResult=_topVideosResult - In the implementation block
@property (retain) FCVideoArticlesOperationResult * moreVideosResult;              //@synthesize moreVideosResult=_moreVideosResult - In the implementation block
@property (copy) NSArray * editorialSectionGroups;                                 //@synthesize editorialSectionGroups=_editorialSectionGroups - In the implementation block
@property (retain) FCSpotlightOperationResult * spotlightResult;                   //@synthesize spotlightResult=_spotlightResult - In the implementation block
@property (retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                             //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                      //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCVideoArticlesOperationResult *)topVideosResult;
-(FCVideoArticlesOperationResult *)moreVideosResult;
-(NSArray *)trendingHeadlines;
-(FCSpotlightOperationResult *)spotlightResult;
-(void)enumerateEditorialSectionsByRecencyWithBlock:(/*^block*/id)arg1 ;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(NSArray *)editorialSectionGroups;
-(void)setTrendingHeadlines:(NSArray *)arg1 ;
-(void)setTopVideosResult:(FCVideoArticlesOperationResult *)arg1 ;
-(void)setMoreVideosResult:(FCVideoArticlesOperationResult *)arg1 ;
-(void)setSpotlightResult:(FCSpotlightOperationResult *)arg1 ;
-(void)setEditorialSectionGroups:(NSArray *)arg1 ;
@end

