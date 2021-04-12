/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNAvatarCardControllerDelegate <NSObject>
@optional
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;
-(void)avatarCardControllerWillDismiss:(id)arg1;
-(void)avatarCardControllerDidDismiss:(id)arg1;
-(BOOL)avatarCardController:(id)arg1 shouldPresentForLocation:(CGPoint)arg2;

@required
-(id)presentingViewControllerForAvatarCardController:(id)arg1;

@end

