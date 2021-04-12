/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFDrawerPaneHeaderView.h>

@protocol WFDrawerPaneHeaderViewDelegate;
@class UIView, WFDrawerPaneCloseButton, NSString;

@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView> {

	id<WFDrawerPaneHeaderViewDelegate> _delegate;
	UIView* _titleView;
	WFDrawerPaneCloseButton* _closeButton;

}

@property (nonatomic,__weak,readonly) WFDrawerPaneCloseButton * closeButton;                  //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,__weak,readonly) UIView * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFDrawerPaneHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFDrawerPaneHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<WFDrawerPaneHeaderViewDelegate>)arg1 ;
-(UIView *)titleView;
-(id)layoutConstraints;
-(WFDrawerPaneCloseButton *)closeButton;
-(id)initWithTitleView:(id)arg1 ;
-(void)closeButtonTouchedUp:(id)arg1 ;
@end

