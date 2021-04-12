/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIScrollView;

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory> {

	UIScrollView* _scrollView;
	long long _edge;

}

@property (assign,nonatomic,__weak) id<UIIndexBarAccessoryViewDelegate> delegate; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                                   //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(BOOL)overlay;
-(void)update;
-(void)setEntries:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setEdge:(long long)arg1 ;
-(long long)edge;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(id)displayEntryNearestToContentOffset:(CGPoint)arg1 ;
@end

