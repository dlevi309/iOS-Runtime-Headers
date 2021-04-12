/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(void)setViewportDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewportDiff *)viewportDiff;
-(id)groupRemovalTestBlock;
-(id)removeGroupsCompletionHandler;
-(void)setGroupRemovalTestBlock:(id)arg1 ;
-(void)setRemoveGroupsCompletionHandler:(id)arg1 ;
@end

