/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) FCFeedViewport * viewport;                      //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) NSString * groupID;                             //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id removeGroupCompletionHandler;                  //@synthesize removeGroupCompletionHandler=_removeGroupCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCFeedDescriptor *)feedDescriptor;
-(BOOL)validateOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)performOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setViewportDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewportDiff *)viewportDiff;
-(id)removeGroupCompletionHandler;
-(void)setRemoveGroupCompletionHandler:(id)arg1 ;
-(FCFeedViewport *)resultViewport;
@end

