/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class _TimelineEntryNode;

@interface _TimelineNode : NSObject {

	_TimelineNode* _rightNode;
	_TimelineNode* _leftNode;

}

@property (nonatomic,retain) _TimelineNode * rightNode;                          //@synthesize rightNode=_rightNode - In the implementation block
@property (nonatomic,retain) _TimelineNode * leftNode;                           //@synthesize leftNode=_leftNode - In the implementation block
@property (nonatomic,readonly) _TimelineEntryNode * rightEntryNode; 
@property (nonatomic,readonly) _TimelineEntryNode * leftEntryNode; 
-(_TimelineNode *)leftNode;
-(_TimelineNode *)rightNode;
-(_TimelineEntryNode *)rightEntryNode;
-(_TimelineEntryNode *)leftEntryNode;
-(void)setRightNode:(_TimelineNode *)arg1 ;
-(void)setLeftNode:(_TimelineNode *)arg1 ;
@end

