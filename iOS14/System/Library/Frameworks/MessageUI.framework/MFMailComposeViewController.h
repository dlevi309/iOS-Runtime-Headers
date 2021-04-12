/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@class _UIRemoteViewController, NSString;

@interface MFMailComposeViewController : UINavigationController <_UIRemoteViewControllerContaining> {

	id _internal;
	/*^block*/id _setupAnimationBlock;
	BOOL _didChangeStatusBarStyle;
	long long _savedStatusBarStyle;

}

@property (assign,nonatomic,__weak) id<MFMailComposeViewControllerDelegate> mailComposeDelegate; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
+(id)log;
+(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
+(BOOL)canSendMailSourceAccountManagement:(int)arg1 ;
+(unsigned long long)maximumAttachmentSize;
+(BOOL)isMailDropConfigured;
+(BOOL)canSendMail;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(id)initWithURL:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setUTITypes:(id)arg1 ;
-(id)contentText;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(id)_internalViewController;
-(id)_validEmailAddressesFromArray:(id)arg1 ;
-(id)_addAttachmentItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)currentAttachmentLimitWithHandler:(/*^block*/id)arg1 ;
-(id)_addContentVariationWithName:(id)arg1 ;
-(void)_setDefaultContentVariation:(id)arg1 ;
-(void)_setMessageBody:(id)arg1 isHTML:(BOOL)arg2 forContentVariation:(id)arg3 ;
-(void)_addAttachmentDataItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 forContentVariation:(id)arg4 ;
-(void)addSetupAnimationBlock:(/*^block*/id)arg1 ;
-(void)setAutorotationDelegate:(id)arg1 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(id)UTITypes;
-(void)setMailComposeDelegate:(id<MFMailComposeViewControllerDelegate>)arg1 ;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)setToRecipients:(id)arg1 ;
-(id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)_impl;
-(id)photoIDs;
-(long long)preferredStatusBarStyle;
-(void)setContentText:(id)arg1 ;
-(void)setPhotoIDs:(id)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id)cloudPhotoIDs;
-(void)setCloudPhotoIDs:(id)arg1 ;
-(void)setContentURLs:(id)arg1 ;
-(void)setSubject:(id)arg1 ;
-(void)setShareSheetSessionID:(id)arg1 ;
-(id)contentURLs;
-(void)__viewControllerWillBePresented:(BOOL)arg1 ;
-(id)shareSheetSessionID;
-(void)setPreferredSendingEmailAddress:(id)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)finalizeCompositionValues;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id<MFMailComposeViewControllerDelegate>)mailComposeDelegate;
@end

