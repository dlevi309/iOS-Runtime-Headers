/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout {

	double _leftSplitWidth;
	double _rightSplitWidth;

}

@property (assign,nonatomic) double leftSplitWidth;               //@synthesize leftSplitWidth=_leftSplitWidth - In the implementation block
@property (assign,nonatomic) double rightSplitWidth;              //@synthesize rightSplitWidth=_rightSplitWidth - In the implementation block
-(void)layoutViewSet:(id)arg1 inBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(id)init;
-(void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4 ;
-(void)setRightSplitWidth:(double)arg1 ;
-(BOOL)usesUnifiedButtonBar;
-(void)setLeftSplitWidth:(double)arg1 ;
-(double)rightSplitWidth;
-(double)leftSplitWidth;
@end

