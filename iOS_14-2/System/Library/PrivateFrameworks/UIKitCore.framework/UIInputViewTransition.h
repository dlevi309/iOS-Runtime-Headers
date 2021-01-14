/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

