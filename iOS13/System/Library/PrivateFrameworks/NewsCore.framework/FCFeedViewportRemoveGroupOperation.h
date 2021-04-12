/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>
#import <libobjc.A.dylib/FCFeedViewportRemoveGroupOperationType.h>

@class FCFeedViewport, NSString, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRemoveGroupOperation : FCOperation <FCFeedViewportRemoveGroupOperationType> {

	FCFeedViewport* _viewport;
	NSString* _groupID;
	FCFeedDescriptor* _feedDescriptor;
	/*^block*/id _removeGroupCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _viewportDiff;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * viewportDiff;              //@synthesize viewportDiff=_viewportDiff - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FCFeedViewport * viewport;                      //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) NSString * groupID;                             //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id removeGroupCompletionHandler;                  //@synthesize removeGroupCompletionHandler=_removeGroupCompletionHandler - In the implementation block
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
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
-(id)removeGroupCompletionHandler;
-(FCFeedViewportDiff *)viewportDiff;
-(void)setRemoveGroupCompletionHandler:(id)arg1 ;
@end

