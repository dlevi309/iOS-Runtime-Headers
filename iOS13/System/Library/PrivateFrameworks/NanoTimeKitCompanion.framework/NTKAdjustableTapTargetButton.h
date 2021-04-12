/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIButton.h>

@interface NTKAdjustableTapTargetButton : UIButton {

	UIEdgeInsets _touchEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;              //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
@end

