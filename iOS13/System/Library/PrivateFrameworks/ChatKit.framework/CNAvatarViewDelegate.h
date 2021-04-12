/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CNAvatarViewDelegate <NSObject>
@optional
-(BOOL)shouldShowActionsForAvatarView:(id)arg1;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1;
-(void)willDismissActionsForAvatarView:(id)arg1;
-(void)didDismissActionsForAvatarView:(id)arg1;
-(void)didUpdateContentForAvatarView:(id)arg1;

@required
-(id)presentingViewControllerForAvatarView:(id)arg1;

@end

