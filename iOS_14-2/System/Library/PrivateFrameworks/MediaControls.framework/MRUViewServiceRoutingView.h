/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, MRUViewServiceRoutingHeaderView, MRUViewServiceRoutingFooterView, UITableView, MRUVisualStylingProvider;

@interface MRUViewServiceRoutingView : UIView {

	BOOL _footerVisible;
	BOOL _showAlertView;
	UIView* _contentView;
	UIView* _alertView;
	MRUViewServiceRoutingHeaderView* _headerView;
	MRUViewServiceRoutingFooterView* _footerView;
	UITableView* _tableView;
	MRUVisualStylingProvider* _stylingProvider;
	long long _state;
	double _cornerRadius;

}

@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * alertView;                                          //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,readonly) MRUViewServiceRoutingHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) MRUViewServiceRoutingFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                  //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isFooterVisible,nonatomic) BOOL footerVisible;                   //@synthesize footerVisible=_footerVisible - In the implementation block
@property (assign,nonatomic) BOOL showAlertView;                                          //@synthesize showAlertView=_showAlertView - In the implementation block
-(MRUViewServiceRoutingFooterView *)footerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableView *)tableView;
-(double)cornerRadius;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)isFooterVisible;
-(long long)state;
-(MRUViewServiceRoutingHeaderView *)headerView;
-(void)updateVisibility;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)setFooterVisible:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(UIView *)alertView;
-(void)setAlertView:(UIView *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)setShowAlertView:(BOOL)arg1 ;
-(BOOL)showAlertView;
@end

