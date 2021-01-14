/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIEdgeInsets)hitAreaAdjustments;
-(void)setHitAreaAdjustments:(UIEdgeInsets)arg1 ;
@end

