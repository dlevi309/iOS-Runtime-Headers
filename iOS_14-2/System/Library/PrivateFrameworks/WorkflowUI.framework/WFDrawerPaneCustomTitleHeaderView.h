/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<WFDrawerPaneHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)titleView;
-(id<WFDrawerPaneHeaderViewDelegate>)delegate;
-(id)layoutConstraints;
-(void)setDelegate:(id<WFDrawerPaneHeaderViewDelegate>)arg1 ;
-(WFDrawerPaneCloseButton *)closeButton;
-(id)initWithTitleView:(id)arg1 ;
-(void)closeButtonTouchedUp:(id)arg1 ;
@end

