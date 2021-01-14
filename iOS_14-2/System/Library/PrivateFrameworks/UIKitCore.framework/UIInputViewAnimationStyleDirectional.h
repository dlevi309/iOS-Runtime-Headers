/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewAnimationStyle.h>

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle {

	int _outDirection;

}

@property (assign,nonatomic) int outDirection;              //@synthesize outDirection=_outDirection - In the implementation block
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 outDirection:(int)arg3 ;
-(BOOL)canDismissWithScrollView;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3 ;
-(void)setOutDirection:(int)arg1 ;
-(int)outDirection;
-(id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

