/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportBookmark, FCFeedViewportDiff;

@interface FCFeedViewportUpdateHeadlinesOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	double _maxArticleAge;
	FCFeedViewportBookmark* _fromBookmark;
	FCFeedViewportBookmark* _toBookmark;
	/*^block*/id _updateHeadlinesCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _resultDiff;
	FCFeedViewportBookmark* _adjustedFromBookmark;
	FCFeedViewportBookmark* _adjustedToBookmark;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                            //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * resultDiff;                            //@synthesize resultDiff=_resultDiff - In the implementation block
@property (nonatomic,retain) FCFeedViewportBookmark * adjustedFromBookmark;              //@synthesize adjustedFromBookmark=_adjustedFromBookmark - In the implementation block
@property (nonatomic,retain) FCFeedViewportBookmark * adjustedToBookmark;                //@synthesize adjustedToBookmark=_adjustedToBookmark - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                                  //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                          //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (assign,nonatomic) double maxArticleAge;                                       //@synthesize maxArticleAge=_maxArticleAge - In the implementation block
@property (nonatomic,copy) FCFeedViewportBookmark * fromBookmark;                        //@synthesize fromBookmark=_fromBookmark - In the implementation block
@property (nonatomic,copy) FCFeedViewportBookmark * toBookmark;                          //@synthesize toBookmark=_toBookmark - In the implementation block
@property (nonatomic,copy) id updateHeadlinesCompletionHandler;                          //@synthesize updateHeadlinesCompletionHandler=_updateHeadlinesCompletionHandler - In the implementation block
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(double)maxArticleAge;
-(void)setMaxArticleAge:(double)arg1 ;
-(FCFeedViewportBookmark *)fromBookmark;
-(void)setAdjustedFromBookmark:(FCFeedViewportBookmark *)arg1 ;
-(FCFeedViewportBookmark *)toBookmark;
-(void)setAdjustedToBookmark:(FCFeedViewportBookmark *)arg1 ;
-(FCFeedViewportBookmark *)adjustedFromBookmark;
-(FCFeedViewportBookmark *)adjustedToBookmark;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(id)updateHeadlinesCompletionHandler;
-(FCFeedViewportDiff *)resultDiff;
-(void)setFromBookmark:(FCFeedViewportBookmark *)arg1 ;
-(void)setToBookmark:(FCFeedViewportBookmark *)arg1 ;
-(void)setUpdateHeadlinesCompletionHandler:(id)arg1 ;
@end

