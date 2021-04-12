/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_uninstallInteractionPlattersForOperation:(id)arg1 ;
-(void)_setInteractionEffectsLifted:(BOOL)arg1 withOperation:(id)arg2 ;
-(void)_installInteractionPlattersForOperation:(id)arg1 ;
-(void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2 ;
@end

