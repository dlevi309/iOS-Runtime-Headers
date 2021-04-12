/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFDrawerPaneHeaderView.h>

@protocol WFDrawerPaneHeaderViewDelegate;
@class UISearchBar, UIButton, UIView, NSString;

@interface WFDrawerPaneSearchHeaderView : UIView <WFDrawerPaneHeaderView> {

	id<WFDrawerPaneHeaderViewDelegate> _delegate;
	UISearchBar* _searchBar;
	UIButton* _closeButton;
	UIView* _separatorView;

}

@property (nonatomic,__weak,readonly) UIButton * closeButton;                                 //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,__weak,readonly) UIView * separatorView;                                 //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,__weak,readonly) UISearchBar * searchBar;                                //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFDrawerPaneHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFDrawerPaneHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<WFDrawerPaneHeaderViewDelegate>)arg1 ;
-(UIView *)separatorView;
-(UISearchBar *)searchBar;
-(id)layoutConstraints;
-(UIButton *)closeButton;
-(id)initWithSearchBar:(id)arg1 ;
@end

