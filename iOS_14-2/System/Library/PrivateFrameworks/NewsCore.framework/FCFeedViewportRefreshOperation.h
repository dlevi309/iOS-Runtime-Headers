/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FCFeedDescriptor *)feedDescriptor;
-(BOOL)validateOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(FCFeedViewportDiff *)resultDiff;
-(void)performOperation;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(FCCloudContext *)context;
-(void)setRefreshCompletionHandler:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)refreshCompletionHandler;
-(FCFeedViewport *)resultViewport;
-(void)_continueWithRefreshDate:(id)arg1 forYouConfig:(id)arg2 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

