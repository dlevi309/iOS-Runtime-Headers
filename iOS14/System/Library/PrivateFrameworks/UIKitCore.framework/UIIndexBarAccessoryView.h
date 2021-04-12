/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)edge;
-(void)setEdge:(long long)arg1 ;
-(void)setEntries:(id)arg1 ;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(void)update;
-(BOOL)overlay;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)displayEntryNearestToContentOffset:(CGPoint)arg1 ;
-(UIScrollView *)scrollView;
@end

