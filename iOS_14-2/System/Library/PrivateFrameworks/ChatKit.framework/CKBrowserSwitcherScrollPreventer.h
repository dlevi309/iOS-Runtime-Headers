/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBrowserSwitcherScrollPreventerDelegate;
@class UILongPressGestureRecognizer, UIScrollView, UIView, NSString;

@interface CKBrowserSwitcherScrollPreventer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _touchTracker;
	BOOL _engaged;
	BOOL _switching;
	BOOL _scrollEnabled;
	id<CKBrowserSwitcherScrollPreventerDelegate> _delegate;
	UIScrollView* _horizontalScrollView;
	UIView* _horizontalScrollPreventerView;

}

@property (nonatomic,retain) UIScrollView * horizontalScrollView;                                       //@synthesize horizontalScrollView=_horizontalScrollView - In the implementation block
@property (nonatomic,retain) UIView * horizontalScrollPreventerView;                                    //@synthesize horizontalScrollPreventerView=_horizontalScrollPreventerView - In the implementation block
@property (assign,getter=isEngaged,nonatomic) BOOL engaged;                                             //@synthesize engaged=_engaged - In the implementation block
@property (assign,getter=isSwitching,nonatomic) BOOL switching;                                         //@synthesize switching=_switching - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                                                        //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherScrollPreventerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentSize:(CGSize)arg1 ;
-(void)touchTrackerRecognized:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKBrowserSwitcherScrollPreventerDelegate>)delegate;
-(CGSize)contentSize;
-(void)setEngaged:(BOOL)arg1 ;
-(BOOL)isSwitching;
-(BOOL)isEngaged;
-(void)setSwitching:(BOOL)arg1 ;
-(void)setHorizontalScrollView:(UIScrollView *)arg1 ;
-(void)setHorizontalScrollPreventerView:(UIView *)arg1 ;
-(UIView *)horizontalScrollPreventerView;
-(BOOL)scrollEnabled;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setDelegate:(id<CKBrowserSwitcherScrollPreventerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(UIScrollView *)horizontalScrollView;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

