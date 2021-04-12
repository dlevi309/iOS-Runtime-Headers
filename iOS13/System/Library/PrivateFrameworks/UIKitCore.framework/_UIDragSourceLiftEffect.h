/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDragInteractionEffect.h>

@class NSMapTable, NSString;

@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {

	NSMapTable* _liftOperationByContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2 ;
-(void)_setInteractionEffectsLifted:(BOOL)arg1 withOperation:(id)arg2 ;
-(void)_installInteractionPlattersForOperation:(id)arg1 ;
-(void)_uninstallInteractionPlattersForOperation:(id)arg1 ;
@end

