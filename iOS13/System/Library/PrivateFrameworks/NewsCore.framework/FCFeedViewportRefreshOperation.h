/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRefreshOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	/*^block*/id _refreshCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _resultDiff;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                  //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * resultDiff;                  //@synthesize resultDiff=_resultDiff - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id refreshCompletionHandler;                        //@synthesize refreshCompletionHandler=_refreshCompletionHandler - In the implementation block
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
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(FCFeedViewportDiff *)resultDiff;
-(void)_continueWithRefreshDate:(id)arg1 forYouConfig:(id)arg2 ;
-(id)refreshCompletionHandler;
-(void)setRefreshCompletionHandler:(id)arg1 ;
@end

