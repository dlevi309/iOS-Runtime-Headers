/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry {

	UIColor* _tintColor;

}

@property (nonatomic,copy) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
@end

