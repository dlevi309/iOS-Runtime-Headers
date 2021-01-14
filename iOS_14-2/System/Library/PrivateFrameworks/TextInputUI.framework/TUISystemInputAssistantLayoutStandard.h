/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutStandard : TUISystemInputAssistantLayout {

	BOOL _isSplit;
	double _leftSplitWidth;
	double _rightSplitWidth;

}

@property (assign,nonatomic) BOOL isSplit;                        //@synthesize isSplit=_isSplit - In the implementation block
@property (assign,nonatomic) double leftSplitWidth;               //@synthesize leftSplitWidth=_leftSplitWidth - In the implementation block
@property (assign,nonatomic) double rightSplitWidth;              //@synthesize rightSplitWidth=_rightSplitWidth - In the implementation block
-(void)layoutViewSet:(id)arg1 inBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(void)_layoutViewSet:(id)arg1 forFlexibleCenterViewInBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4 ;
-(void)setRightSplitWidth:(double)arg1 ;
-(void)setLeftSplitWidth:(double)arg1 ;
-(void)setIsSplit:(BOOL)arg1 ;
-(double)rightSplitWidth;
-(double)leftSplitWidth;
-(void)_layoutViewSet:(id)arg1 forFixedCenterViewWidth:(double)arg2 inBounds:(CGRect)arg3 forAssistantView:(id)arg4 ;
-(BOOL)isSplit;
@end

