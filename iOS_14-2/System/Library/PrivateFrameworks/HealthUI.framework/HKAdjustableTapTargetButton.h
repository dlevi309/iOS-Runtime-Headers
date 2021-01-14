/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface HKAdjustableTapTargetButton : UIButton {

	BOOL _insetSet;
	UIEdgeInsets _hitTargetInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitTargetInsets;              //@synthesize hitTargetInsets=_hitTargetInsets - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHitTargetInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTargetInsets;
@end

