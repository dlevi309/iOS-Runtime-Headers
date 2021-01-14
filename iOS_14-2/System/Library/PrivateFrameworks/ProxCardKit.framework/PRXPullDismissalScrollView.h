/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class NSLayoutConstraint, UIView;

@interface PRXPullDismissalScrollView : UIScrollView {

	CGRect _lastLayoutFrame;
	NSLayoutConstraint* _contentHeightConstraint;
	BOOL _hasDimissed;
	BOOL _allowsPullToDismiss;
	UIView* _dismissableContentContainerView;

}

@property (assign,nonatomic) BOOL allowsPullToDismiss;                                //@synthesize allowsPullToDismiss=_allowsPullToDismiss - In the implementation block
@property (nonatomic,readonly) double dismissalPercent; 
@property (nonatomic,readonly) UIView * dismissableContentContainerView;              //@synthesize dismissableContentContainerView=_dismissableContentContainerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(BOOL)allowsPullToDismiss;
-(void)setAllowsPullToDismiss:(BOOL)arg1 ;
-(double)dismissalPercent;
-(UIView *)dismissableContentContainerView;
@end

