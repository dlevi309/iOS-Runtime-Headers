/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)unreadCount;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)startAnimation;
-(id)init;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(id<CKUnreadBannerViewDelegate>)delegate;
-(void)bannerPressed:(id)arg1 ;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(void)setDelegate:(id<CKUnreadBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)stopAnimation;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

