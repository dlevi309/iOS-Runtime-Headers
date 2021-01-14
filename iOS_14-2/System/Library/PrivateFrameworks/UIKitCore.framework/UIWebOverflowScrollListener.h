/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIScrollViewDelegate.h>

@class UIWebOverflowScrollView, NSString;

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {

	UIWebOverflowScrollView* _scrollView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScrollView:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)_didCompleteScrolling;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
@end

