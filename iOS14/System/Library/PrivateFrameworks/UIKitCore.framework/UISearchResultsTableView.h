/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(void)_numberOfRowsDidChange;
-(UIView *)_topShadowView;
-(void)_setTopShadowView:(id)arg1 ;
-(void)_setOffsetForNoResultsMessage:(double)arg1 ;
-(double)_offsetForNoResultsMessage;
-(UISearchDisplayController *)controller;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

