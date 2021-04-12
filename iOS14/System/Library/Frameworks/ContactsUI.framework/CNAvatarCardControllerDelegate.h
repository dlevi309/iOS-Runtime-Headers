/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNAvatarCardControllerDelegate <NSObject>
@optional
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)avatarCardControllerWillDismiss:(id)arg1;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
-(void)avatarCardControllerDidDismiss:(id)arg1;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2;
-(BOOL)avatarCardController:(id)arg1 shouldPresentForLocation:(CGPoint)arg2;

@required
-(id)presentingViewControllerForAvatarCardController:(id)arg1;

@end

