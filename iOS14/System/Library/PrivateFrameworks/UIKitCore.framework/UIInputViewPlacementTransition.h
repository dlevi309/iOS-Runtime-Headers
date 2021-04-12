/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAnimationContext:(id<NSObject>)arg1 ;
-(void)setAnimationState:(int)arg1 ;
-(int)animationState;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(id<UIInputViewAnimationController>)animationController;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(id<NSObject>)animationContext;
-(void)setNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(UIInputViewSetNotificationInfo *)notificationInfo;
-(UIInputViewSetPlacement *)fromPlacement;
-(void)setAnimationController:(id<UIInputViewAnimationController>)arg1 ;
-(void)setToPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setNotifications:(unsigned long long)arg1 ;
-(UIInputViewSetPlacement *)toPlacement;
-(unsigned long long)notifications;
-(BOOL)didAdvanceAnimationToState:(int)arg1 ;
-(void)setFromPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)dealloc;
-(UIInputViewAnimationStyle *)animationStyle;
@end

