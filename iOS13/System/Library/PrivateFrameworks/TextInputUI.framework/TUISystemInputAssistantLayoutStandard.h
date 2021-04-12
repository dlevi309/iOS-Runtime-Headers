/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutStandard : TUISystemInputAssistantLayout {

	BOOL _buttonBarItemsExpanded;
	BOOL _isSplit;
	double _leftSplitWidth;
	double _rightSplitWidth;

}

@property (assign,nonatomic) BOOL buttonBarItemsExpanded;              //@synthesize buttonBarItemsExpanded=_buttonBarItemsExpanded - In the implementation block
@property (assign,nonatomic) BOOL isSplit;                             //@synthesize isSplit=_isSplit - In the implementation block
@property (assign,nonatomic) double leftSplitWidth;                    //@synthesize leftSplitWidth=_leftSplitWidth - In the implementation block
@property (assign,nonatomic) double rightSplitWidth;                   //@synthesize rightSplitWidth=_rightSplitWidth - In the implementation block
-(BOOL)isSplit;
-(void)setIsSplit:(BOOL)arg1 ;
-(void)setLeftSplitWidth:(double)arg1 ;
-(void)setRightSplitWidth:(double)arg1 ;
-(BOOL)usesUnifiedButtonBar;
-(void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4 ;
-(void)layoutViewSet:(id)arg1 inBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(void)_layoutViewSet:(id)arg1 forFixedCenterViewWidth:(double)arg2 inBounds:(CGRect)arg3 forAssistantView:(id)arg4 ;
-(void)_layoutViewSet:(id)arg1 forFlexibleCenterViewInBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(BOOL)buttonBarItemsExpanded;
-(void)setButtonBarItemsExpanded:(BOOL)arg1 ;
-(double)leftSplitWidth;
-(double)rightSplitWidth;
@end

