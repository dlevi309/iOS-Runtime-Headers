/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIHighlightPlatterView.h>

@class UIView;

@interface _UIAnchoredClickHighlightPlatterView : _UIHighlightPlatterView {

	UIView* _anchorView;

}

@property (assign,nonatomic,__weak) UIView * anchorView;              //@synthesize anchorView=_anchorView - In the implementation block
-(id)initWithTargetedPreview:(id)arg1 ;
-(UIView *)anchorView;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)anchorToContainer;
-(void)deAnchor;
@end

