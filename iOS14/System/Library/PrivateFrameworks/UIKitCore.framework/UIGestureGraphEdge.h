/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIGestureGraphNode *)sourceNode;
-(id)description;
-(BOOL)isDirected;
-(UIGestureGraphNode *)targetNode;
-(id)oppositeNode:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
-(BOOL)isLoop;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(BOOL)arg4 ;
@end

