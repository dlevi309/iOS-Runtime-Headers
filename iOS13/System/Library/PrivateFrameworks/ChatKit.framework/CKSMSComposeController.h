/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKSMSCompose.h>
#import <libobjc.A.dylib/CKSMSComposeRemoteViewControllerDelegate.h>

@class _UIAsyncInvocation, UINavigationController, CKSMSComposeRemoteViewController, CKSMSComposeQueuingRemoteViewControllerProxy, NSString;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {

	int _entryViewInvisible;
	_UIAsyncInvocation* _cancellationInvocation;
	UINavigationController* _clientNavigationController;
	BOOL _safeToAdd;
	BOOL _didChangeStatusBarStyle;
	long long _savedStatusBarStyle;
	BOOL _firstItemWasInserted;
	id _delegate;
	CKSMSComposeRemoteViewController* _remoteViewController;
	CKSMSComposeQueuingRemoteViewControllerProxy* _remoteViewControllerProxy;

}

@property (assign,nonatomic) BOOL firstItemWasInserted;                                                             //@synthesize firstItemWasInserted=_firstItemWasInserted - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKSMSComposeRemoteViewController * remoteViewController;                               //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) CKSMSComposeQueuingRemoteViewControllerProxy * remoteViewControllerProxy;              //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(BOOL)acceptsMIMEType:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setContentText:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(CKSMSComposeRemoteViewController *)remoteViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setRemoteViewController:(CKSMSComposeRemoteViewController *)arg1 ;
-(void)setContentURLs:(id)arg1 ;
-(void)setShareSheetSessionID:(id)arg1 ;
-(void)forceMMS;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerEntryViewContentInserted;
-(BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setShouldDisableEntryField:(BOOL)arg1 ;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
-(void)smsComposeControllerCancelled;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)setUTIs:(id)arg1 ;
-(void)setPhotoIDs:(id)arg1 ;
-(void)setCloudPhotoIDs:(id)arg1 ;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)showInsertedItemInEntryView;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1 ;
-(void)setRemoteViewControllerProxy:(CKSMSComposeQueuingRemoteViewControllerProxy *)arg1 ;
-(CKSMSComposeQueuingRemoteViewControllerProxy *)remoteViewControllerProxy;
-(void)_addRemoteVCIfNeeded;
-(BOOL)canInsertMessage;
-(BOOL)insertRichLinkWithURL:(id)arg1 andData:(id)arg2 ;
-(BOOL)insertMessage:(id)arg1 ;
-(void)insertItemForSendingAndCalculateEntryViewFrame:(id)arg1 withAlternateFilename:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)firstItemWasInserted;
-(void)setFirstItemWasInserted:(BOOL)arg1 ;
@end

