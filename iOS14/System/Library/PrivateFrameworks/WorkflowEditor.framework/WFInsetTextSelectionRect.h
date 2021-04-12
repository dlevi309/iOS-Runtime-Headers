/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class UITextSelectionRect;

@interface WFInsetTextSelectionRect : UITextSelectionRect {

	UITextSelectionRect* _selectionRect;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UIEdgeInsets insets;                              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) UITextSelectionRect * selectionRect;              //@synthesize selectionRect=_selectionRect - In the implementation block
-(BOOL)isVertical;
-(CGRect)rect;
-(UITextSelectionRect *)selectionRect;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(long long)writingDirection;
-(UIEdgeInsets)insets;
-(id)initWithSelectionRect:(id)arg1 insets:(UIEdgeInsets)arg2 ;
@end

