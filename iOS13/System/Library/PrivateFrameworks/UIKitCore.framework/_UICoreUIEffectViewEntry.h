/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CALayer;

@interface _UICoreUIEffectViewEntry : _UIVisualEffectViewEntry {

	CALayer* _materialLayer;

}

@property (nonatomic,retain) CALayer * materialLayer;              //@synthesize materialLayer=_materialLayer - In the implementation block
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(CALayer *)materialLayer;
-(void)setMaterialLayer:(CALayer *)arg1 ;
@end

