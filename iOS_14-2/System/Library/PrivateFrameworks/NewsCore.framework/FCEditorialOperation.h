/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, NSArray, FCSpotlightOperationResult, NSError;

@interface FCEditorialOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	NSArray* _trendingHeadlines;
	FCSpotlightOperationResult* _spotlightResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;
	NSArray* _editorialSectionGroups;

}

@property (copy) NSArray * trendingHeadlines;                                  //@synthesize trendingHeadlines=_trendingHeadlines - In the implementation block
@property (copy) NSArray * editorialSectionGroups;                             //@synthesize editorialSectionGroups=_editorialSectionGroups - In the implementation block
@property (retain) FCSpotlightOperationResult * spotlightResult;               //@synthesize spotlightResult=_spotlightResult - In the implementation block
@property (retain) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                  //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(FCSpotlightOperationResult *)spotlightResult;
-(NSArray *)editorialSectionGroups;
-(id)catchUpCompletionHandler;
-(FCCloudContext *)context;
-(void)setError:(NSError *)arg1 ;
-(void)setTrendingHeadlines:(NSArray *)arg1 ;
-(NSError *)error;
-(void)setSpotlightResult:(FCSpotlightOperationResult *)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setEditorialSectionGroups:(NSArray *)arg1 ;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(NSArray *)trendingHeadlines;
-(void)enumerateEditorialSectionsByRecencyWithBlock:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

