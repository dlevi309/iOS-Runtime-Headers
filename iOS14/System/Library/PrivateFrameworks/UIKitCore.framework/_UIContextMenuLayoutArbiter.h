/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, _UIContextMenuLayoutArbiterInput;

@interface _UIContextMenuLayoutArbiter : NSObject {

	UIView* _containerView;
	unsigned long long _currentLayout;
	_UIContextMenuLayoutArbiterInput* _currentInput;
	SCD_Struct_UI3 _menuAnchor;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long currentLayout;                             //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,retain) _UIContextMenuLayoutArbiterInput * currentInput;              //@synthesize currentInput=_currentInput - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) SCD_Struct_UI3 menuAnchor;                                  //@synthesize menuAnchor=_menuAnchor - In the implementation block
-(CGRect)contentBounds;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_positionPlatterFrame:(inout CGRect*)arg1 andActionViewFrame:(inout CGRect*)arg2 inBounds:(CGRect)arg3 aboutSourcePoint:(CGPoint)arg4 ;
-(unsigned long long)_defaultAttachmentEdge;
-(void)setCurrentInput:(_UIContextMenuLayoutArbiterInput *)arg1 ;
-(CGRect)_computedPreviewBoundsForContentBounds:(CGRect)arg1 ;
-(CGRect)_computedMenuBoundsForContentBounds:(CGRect)arg1 predictedPreviewFrame:(CGRect)arg2 ;
-(void)_drawContentBoundsDebugUI:(CGRect)arg1 ;
-(id)initWithContainerView:(id)arg1 layout:(unsigned long long)arg2 ;
-(CGPoint)_computedMenuAnchorPointForMenuFrame:(CGRect)arg1 previewFrame:(CGRect)arg2 ;
-(id)_accessoryPositionsForBaseLayout:(id)arg1 ;
-(id)computedLayoutWithInput:(id)arg1 ;
-(unsigned long long)_automaticAlignmentForAttachment:(unsigned long long)arg1 sourcePoint:(CGPoint)arg2 ;
-(unsigned long long)currentLayout;
-(void)setCurrentLayout:(unsigned long long)arg1 ;
-(SCD_Struct_UI3)menuAnchor;
-(UIView *)containerView;
-(_UIContextMenuLayoutArbiterInput *)currentInput;
-(double)contentMargin;
@end

