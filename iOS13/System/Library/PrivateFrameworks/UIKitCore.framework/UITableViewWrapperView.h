/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class NSMutableArray, NSArray;

@interface UITableViewWrapperView : UIScrollView {

	NSMutableArray* _stuckToBackViews;

}

@property (nonatomic,readonly) NSArray * stuckToBackViews;              //@synthesize stuckToBackViews=_stuckToBackViews - In the implementation block
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_stickViewToBack:(id)arg1 ;
-(void)_unstickView:(id)arg1 ;
-(BOOL)_forwardsToParentScroller;
-(NSArray *)stuckToBackViews;
@end

