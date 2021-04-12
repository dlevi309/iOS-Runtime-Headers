/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIView, UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {

	double _offsetForNoResultsMessage;
	UIView* _topShadowView;
	UISearchDisplayController* _controller;

}

@property (assign,nonatomic,__weak) UISearchDisplayController * controller;                                        //@synthesize controller=_controller - In the implementation block
@property (setter=_setTopShadowView:,getter=_topShadowView,nonatomic,retain) UIView * _topShadowView; 
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(UISearchDisplayController *)controller;
-(void)_numberOfRowsDidChange;
-(void)_setOffsetForNoResultsMessage:(double)arg1 ;
-(double)_offsetForNoResultsMessage;
-(UIView *)_topShadowView;
-(void)_setTopShadowView:(id)arg1 ;
@end

