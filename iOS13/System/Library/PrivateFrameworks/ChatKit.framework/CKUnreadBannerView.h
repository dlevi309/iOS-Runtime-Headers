/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKUnreadBannerViewDelegate;
@class _UIBackdropView, UILabel, UIImageView, UIView, NSString;

@interface CKUnreadBannerView : UIView <UIGestureRecognizerDelegate> {

	id<CKUnreadBannerViewDelegate> _delegate;
	unsigned long long _unreadCount;
	_UIBackdropView* _backdropView;
	UILabel* _label;
	UIImageView* _chevronView;
	UIView* _overlayView;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;                              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                   //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic,__weak) id<CKUnreadBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;                              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CKUnreadBannerViewDelegate>)delegate;
-(void)setDelegate:(id<CKUnreadBannerViewDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)stopAnimation;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(unsigned long long)unreadCount;
-(void)bannerPressed:(id)arg1 ;
-(void)setUnreadCount:(unsigned long long)arg1 ;
@end

