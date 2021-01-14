/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class NSMutableArray, NSArray;

@interface UITableViewWrapperView : UIScrollView {

	NSMutableArray* _stuckToBackViews;

}

@property (nonatomic,readonly) NSArray * stuckToBackViews;              //@synthesize stuckToBackViews=_stuckToBackViews - In the implementation block
-(void)sendSubviewToBack:(id)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_stickViewToBack:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)stuckToBackViews;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_forwardsToParentScroller;
-(void)_unstickView:(id)arg1 ;
-(void)dealloc;
@end

