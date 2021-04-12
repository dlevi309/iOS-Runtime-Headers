/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, _UIContextMenuLayoutArbiterInput;

@interface _UIContextMenuLayoutArbiter : NSObject {

	UIView* _containerView;
	unsigned long long _currentLayout;
	_UIContextMenuLayoutArbiterInput* _currentInput;
	NSRange _menuAnchor;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long currentLayout;                             //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,retain) _UIContextMenuLayoutArbiterInput * currentInput;              //@synthesize currentInput=_currentInput - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) NSRange menuAnchor;                                         //@synthesize menuAnchor=_menuAnchor - In the implementation block
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(double)contentMargin;
-(unsigned long long)currentLayout;
-(void)setCurrentLayout:(unsigned long long)arg1 ;
-(NSRange)menuAnchor;
-(CGRect)contentBounds;
-(unsigned long long)_updatedAttachmentEdge;
-(void)setCurrentInput:(_UIContextMenuLayoutArbiterInput *)arg1 ;
-(CGRect)_computedPreviewBoundsForContentBounds:(CGRect)arg1 ;
-(CGRect)_computedMenuBoundsForContentBounds:(CGRect)arg1 predictedPreviewFrame:(CGRect)arg2 ;
-(void)_positionPlatterFrame:(inout CGRect*)arg1 andActionViewFrame:(inout CGRect*)arg2 inBounds:(CGRect)arg3 aboutSourcePoint:(CGPoint)arg4 ;
-(void)_drawContentBoundsDebugUI:(CGRect)arg1 ;
-(id)_accessoryPositionsForBaseLayout:(id)arg1 ;
-(_UIContextMenuLayoutArbiterInput *)currentInput;
-(id)initWithContainerView:(id)arg1 layout:(unsigned long long)arg2 ;
-(id)computedLayoutWithInput:(id)arg1 ;
@end

