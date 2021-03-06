/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol CNAvatarViewDelegate <NSObject>
@optional
-(void)didUpdateContentForAvatarView:(id)arg1;
-(BOOL)shouldShowActionsForAvatarView:(id)arg1;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
-(id)overrideImageDataForPreviewInteractionForAvatarView:(id)arg1;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1;
-(void)willDismissActionsForAvatarView:(id)arg1;
-(void)didDismissActionsForAvatarView:(id)arg1;
-(void)avatarView:(id)arg1 didUpdateViewForGroupConfiguration:(id)arg2;
-(void)avatarView:(id)arg1 didFailToUpdateViewForGroupConfiguration:(id)arg2 withError:(id)arg3;

@required
-(id)presentingViewControllerForAvatarView:(id)arg1;

@end

