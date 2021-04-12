/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCFeedViewport, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRemoveGroupsOperation : FCOperation {

	FCFeedViewport* _viewport;
	/*^block*/id _groupRemovalTestBlock;
	FCFeedDescriptor* _feedDescriptor;
	/*^block*/id _removeGroupsCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _viewportDiff;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * viewportDiff;              //@synthesize viewportDiff=_viewportDiff - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                      //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,copy) id groupRemovalTestBlock;                         //@synthesize groupRemovalTestBlock=_groupRemovalTestBlock - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id removeGroupsCompletionHandler;                 //@synthesize removeGroupsCompletionHandler=_removeGroupsCompletionHandler - In the implementation block
-(FCFeedDescriptor *)feedDescriptor;
-(BOOL)validateOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)performOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(id)groupRemovalTestBlock;
-(id)removeGroupsCompletionHandler;
-(void)setGroupRemovalTestBlock:(id)arg1 ;
-(void)setRemoveGroupsCompletionHandler:(id)arg1 ;
-(void)setViewportDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewportDiff *)viewportDiff;
-(FCFeedViewport *)resultViewport;
@end

