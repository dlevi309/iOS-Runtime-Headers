/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAccessoryVisibilityInteractionControllerDelegate <NSObject>
@optional
-(BOOL)accessoryVisibilityInteractionController:(id)arg1 canBeginAtLocationFromProvider:(id)arg2;
-(void)accessoryVisibilityInteractionController:(id)arg1 setAccessoryVisible:(BOOL)arg2 changeReason:(long long)arg3;
-(void)accessoryVisibilityInteractionControllerDidEnd:(id)arg1;
-(BOOL)accessoryVisibilityInteractionController:(id)arg1 isLocationFromProviderInAccessoryContent:(id)arg2;

@required
-(id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg1;

@end

