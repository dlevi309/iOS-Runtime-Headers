/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureGraphElement.h>

@class UIGestureGraphNode;

@interface UIGestureGraphEdge : UIGestureGraphElement {

	BOOL _directed;
	UIGestureGraphNode* _sourceNode;
	UIGestureGraphNode* _targetNode;

}

@property (nonatomic,readonly) UIGestureGraphNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) UIGestureGraphNode * targetNode;              //@synthesize targetNode=_targetNode - In the implementation block
@property (getter=isDirected,nonatomic,readonly) BOOL directed;              //@synthesize directed=_directed - In the implementation block
@property (getter=isLoop,nonatomic,readonly) BOOL loop; 
-(id)description;
-(UIGestureGraphNode *)sourceNode;
-(BOOL)isLoop;
-(UIGestureGraphNode *)targetNode;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(BOOL)arg4 ;
-(BOOL)isDirected;
-(id)oppositeNode:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
@end

