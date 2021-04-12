/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class UIView;

@interface SKWeakContainer : NSObject {

	BOOL _wasOnScreen;
	UIView* _scrollingView;
	UIView* _trackingView;

}

@property (assign,nonatomic,__weak) UIView * scrollingView;              //@synthesize scrollingView=_scrollingView - In the implementation block
@property (assign,nonatomic,__weak) UIView * trackingView;               //@synthesize trackingView=_trackingView - In the implementation block
@property (assign,nonatomic) BOOL wasOnScreen;                           //@synthesize wasOnScreen=_wasOnScreen - In the implementation block
-(UIView *)scrollingView;
-(void)setScrollingView:(UIView *)arg1 ;
-(UIView *)trackingView;
-(void)setTrackingView:(UIView *)arg1 ;
-(BOOL)wasOnScreen;
-(void)setWasOnScreen:(BOOL)arg1 ;
@end

