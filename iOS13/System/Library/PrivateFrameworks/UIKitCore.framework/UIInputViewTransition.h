/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIInputViewSet;

@interface UIInputViewTransition : NSObject {

	UIInputViewSet* oldSet;
	UIInputViewSet* newSet;

}

@property (nonatomic,readonly) UIInputViewSet * oldSet; 
-(UIInputViewSet *)oldSet;
-(id)newSet;
-(void)postNotificationsForTransitionStart;
-(void)postNotificationsForTransitionEnd;
@end

