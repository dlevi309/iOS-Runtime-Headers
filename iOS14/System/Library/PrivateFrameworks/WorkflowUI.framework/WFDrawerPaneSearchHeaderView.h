/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<WFDrawerPaneHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UISearchBar *)searchBar;
-(UIView *)separatorView;
-(id<WFDrawerPaneHeaderViewDelegate>)delegate;
-(id)layoutConstraints;
-(void)setDelegate:(id<WFDrawerPaneHeaderViewDelegate>)arg1 ;
-(id)initWithSearchBar:(id)arg1 ;
-(UIButton *)closeButton;
@end

