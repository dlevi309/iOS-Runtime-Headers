/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIInputViewAnimationController.h>

@protocol UIViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning_Keyboard;
@class UIInputViewSetPlacement, NSString;

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {

	id<UIViewControllerContextTransitioning> _context;
	id<UIViewControllerAnimatedTransitioning_Keyboard> _animator;
	UIInputViewSetPlacement* _endPlacement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)performAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(void)dealloc;
@end

