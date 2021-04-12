/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol UIDropInteractionDelegate <NSObject>
@optional
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2;

@end

