/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCFeedViewport, NSString, FCFeedDescriptor;


@protocol FCFeedViewportRemoveGroupOperationType <NSObject>
@property (nonatomic,retain) FCFeedViewport * viewport; 
@property (nonatomic,retain) NSString * groupID; 
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor; 
@property (nonatomic,copy) id removeGroupCompletionHandler; 
@required
-(void)start;
-(NSString *)groupID;
-(void)setGroupID:(id)arg1;
-(FCFeedViewport *)viewport;
-(void)setViewport:(id)arg1;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(id)arg1;
-(id)removeGroupCompletionHandler;
-(void)setRemoveGroupCompletionHandler:(/*^block*/id)arg1;

@end

