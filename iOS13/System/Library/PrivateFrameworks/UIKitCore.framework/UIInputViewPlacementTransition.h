/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSObject, UIInputViewAnimationController;
@class UIInputViewSetPlacement, UIInputViewAnimationStyle, UIInputViewSetNotificationInfo;

@interface UIInputViewPlacementTransition : NSObject {

	BOOL cancelled;
	int animationState;
	UIInputViewSetPlacement* fromPlacement;
	UIInputViewSetPlacement* toPlacement;
	UIInputViewAnimationStyle* animationStyle;
	UIInputViewSetNotificationInfo* notificationInfo;
	unsigned long long notifications;
	id<NSObject> animationContext;
	id<UIInputViewAnimationController> animationController;

}

@property (nonatomic,retain) UIInputViewSetPlacement * fromPlacement; 
@property (nonatomic,retain) UIInputViewSetPlacement * toPlacement; 
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle; 
@property (nonatomic,retain) UIInputViewSetNotificationInfo * notificationInfo; 
@property (assign,nonatomic) unsigned long long notifications; 
@property (assign,nonatomic) int animationState; 
@property (nonatomic,retain) id<UIInputViewAnimationController> animationController; 
@property (nonatomic,retain) id<NSObject> animationContext; 
@property (assign,nonatomic) BOOL cancelled; 
+(id)transitionFromPlacement:(id)arg1 toPlacement:(id)arg2 withAnimationStyle:(id)arg3 ;
-(void)dealloc;
-(BOOL)cancelled;
-(void)setNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(void)setAnimationController:(id<UIInputViewAnimationController>)arg1 ;
-(int)animationState;
-(void)setAnimationState:(int)arg1 ;
-(id<UIInputViewAnimationController>)animationController;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setFromPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setToPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(UIInputViewSetPlacement *)fromPlacement;
-(UIInputViewSetPlacement *)toPlacement;
-(BOOL)didAdvanceAnimationToState:(int)arg1 ;
-(UIInputViewAnimationStyle *)animationStyle;
-(UIInputViewSetNotificationInfo *)notificationInfo;
-(unsigned long long)notifications;
-(void)setNotifications:(unsigned long long)arg1 ;
-(id<NSObject>)animationContext;
-(void)setAnimationContext:(id<NSObject>)arg1 ;
@end

