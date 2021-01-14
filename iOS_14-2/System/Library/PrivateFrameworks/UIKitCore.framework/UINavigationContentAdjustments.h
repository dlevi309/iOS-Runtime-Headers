/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInsetAdjustment:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)insetAdjustment;
-(void)setAdjustedScrollView:(UIScrollView *)arg1 ;
@end

