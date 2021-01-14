/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXContextualNotificationDelegate <NSObject>
@optional
-(CGRect*)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
-(void)contextualNotificationWasTapped:(id)arg1;
-(BOOL)contextualNotification:(id)arg1 shouldPassthroughPoint:(CGPoint)arg2 inCoordinateSpace:(id)arg3;
-(void)contextualNotificationDidDisappear:(id)arg1;
-(long long)preferredAnimationForContextualNotification:(id)arg1;
-(void)contextualNotificationWasDiscarded:(id)arg1;
-(id)preferredContainerViewForContextualNotification:(id)arg1;
-(void)contextualNotificationDidAppear:(id)arg1;

@end

