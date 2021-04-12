/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SBUIButton : UIButton {

	UIEdgeInsets _hitAreaAdjustments;

}

@property (assign,nonatomic) UIEdgeInsets hitAreaAdjustments;              //@synthesize hitAreaAdjustments=_hitAreaAdjustments - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHitAreaAdjustments:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitAreaAdjustments;
@end

