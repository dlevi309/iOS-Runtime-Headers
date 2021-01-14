/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	ScrollingTreeScrollingNodeDelegateIOS* _scrollingTreeNodeDelegate;
	BOOL _inUserInteraction;

}

@property (assign,getter=_isInUserInteraction,nonatomic) BOOL inUserInteraction;              //@synthesize inUserInteraction=_inUserInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollingTreeNodeDelegate:(ScrollingTreeScrollingNodeDelegateIOS*)arg1 ;
-(BOOL)_isInUserInteraction;
-(void)setInUserInteraction:(BOOL)arg1 ;
-(void)cancelPointersForGestureRecognizer:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)_actingParentScrollViewForScrollView:(id)arg1 ;
@end

