/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCSectionBasedTableView.h>

@class UIView, UIButton;

@interface MCProfileTitlePageView : MCSectionBasedTableView {

	UIView* _topBarView;
	UIView* _bottomBarView;
	UIButton* _installButton;
	UIButton* _infoButton;
	UIButton* _cancelButton;

}

@property (nonatomic,readonly) UIView * topBarView;                   //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,readonly) UIView * bottomBarView;                //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (nonatomic,readonly) UIButton * installButton;              //@synthesize installButton=_installButton - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                 //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;               //@synthesize cancelButton=_cancelButton - In the implementation block
-(UIButton *)cancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(UIView *)topBarView;
-(id)_createInstallButton;
-(id)_createCancelButton;
-(UIButton *)installButton;
-(id)_createBottomView;
-(id)_createInfoButton;
-(UIView *)bottomBarView;
-(void)showBottomView:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

