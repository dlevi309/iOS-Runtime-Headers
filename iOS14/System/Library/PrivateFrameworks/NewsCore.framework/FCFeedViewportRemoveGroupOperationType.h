/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCFeedViewport, NSString, FCFeedDescriptor;


@protocol FCFeedViewportRemoveGroupOperationType <NSObject>
@property (nonatomic,retain) FCFeedViewport * viewport; 
@property (nonatomic,retain) NSString * groupID; 
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor; 
@property (nonatomic,copy) id removeGroupCompletionHandler; 
@required
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(id)arg1;
-(FCFeedViewport *)viewport;
-(void)setViewport:(id)arg1;
-(void)start;
-(NSString *)groupID;
-(void)setGroupID:(id)arg1;
-(id)removeGroupCompletionHandler;
-(void)setRemoveGroupCompletionHandler:(/*^block*/id)arg1;

@end

