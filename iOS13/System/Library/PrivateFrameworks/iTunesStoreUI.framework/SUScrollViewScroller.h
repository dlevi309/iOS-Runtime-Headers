/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class NSObject, NSMutableArray, UIScrollView, NSString;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate> {

	NSObject*<UIScrollViewDelegate> _originalDelegate;
	NSMutableArray* _scrollRequests;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)attachToScrollView:(id)arg1 ;
-(void)detachFromScrollView;
-(void)scrollFrameToVisible:(CGRect)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_addScrollRequest:(id)arg1 ;
-(void)_finishActiveScrollRequest;
-(void)_performNextScrollRequest;
-(void)_performContentOffsetRequest:(id)arg1 ;
-(void)_performScrollRectRequest:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

