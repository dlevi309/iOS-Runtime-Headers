/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSArray;

@interface AFConversationTransaction : NSObject {

	NSArray* _updatedItemIndexPaths;
	NSArray* _insertedItemIndexPaths;
	NSArray* _presentationStateChangedItemIndexPaths;

}

@property (nonatomic,readonly) NSArray * updatedItemIndexPaths;                               //@synthesize updatedItemIndexPaths=_updatedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * insertedItemIndexPaths;                              //@synthesize insertedItemIndexPaths=_insertedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * presentationStateChangedItemIndexPaths;              //@synthesize presentationStateChangedItemIndexPaths=_presentationStateChangedItemIndexPaths - In the implementation block
-(NSArray *)updatedItemIndexPaths;
-(id)initWithUpdatedItemIndexPaths:(id)arg1 insertedItemIndexPaths:(id)arg2 presentationStateChangedItemIndexPaths:(id)arg3 ;
-(NSArray *)presentationStateChangedItemIndexPaths;
-(NSArray *)insertedItemIndexPaths;
@end

