/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView;

@interface UINavigationContentAdjustments : NSObject {

	UIScrollView* _adjustedScrollView;
	UIEdgeInsets _insetAdjustment;

}

@property (assign,nonatomic,__weak) UIScrollView * adjustedScrollView;              //@synthesize adjustedScrollView=_adjustedScrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetAdjustment;                          //@synthesize insetAdjustment=_insetAdjustment - In the implementation block
-(UIScrollView *)adjustedScrollView;
-(void)setAdjustedScrollView:(UIScrollView *)arg1 ;
-(UIEdgeInsets)insetAdjustment;
-(void)setInsetAdjustment:(UIEdgeInsets)arg1 ;
@end

