/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BSUIAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {

	_UIViewAnimationAttributes* _attributes;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)delay;
-(double)duration;
-(id)_initWithAttributes:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)factoryWithTimingFunction:(id)arg1 ;
@end

