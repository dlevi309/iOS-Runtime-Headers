/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIWebSelectionGraph, UIWebSelection;

@interface UIWebSelectionNode : NSObject {

	UIWebSelectionNode* _fromTopByExpanding;
	UIWebSelectionNode* _fromTopByContracting;
	UIWebSelectionNode* _fromBottomByExpanding;
	UIWebSelectionNode* _fromBottomByContracting;
	UIWebSelectionNode* _fromRightByExpanding;
	UIWebSelectionNode* _fromRightByContracting;
	UIWebSelectionNode* _fromLeftByExpanding;
	UIWebSelectionNode* _fromLeftByContracting;
	UIWebSelectionGraph* _sharedGraph;
	UIWebSelection* _selection;
	BOOL _invalid;

}

@property (retain) UIWebSelection * selection;              //@synthesize selection=_selection - In the implementation block
-(void)setSelection:(UIWebSelection *)arg1 ;
-(id*)nodeByReferenceFromEdge:(int)arg1 outwards:(BOOL)arg2 ;
-(id)initWithSelection:(id)arg1 inGraph:(id)arg2 ;
-(int)oppositeEdge:(int)arg1 ;
-(id)nodeByMovingEdge:(int)arg1 outwards:(BOOL)arg2 ;
-(UIWebSelection *)selection;
-(void)invalidate;
-(void)dealloc;
@end

