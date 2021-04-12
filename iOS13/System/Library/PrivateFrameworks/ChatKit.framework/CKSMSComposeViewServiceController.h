/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CKComposeChatControllerDelegate.h>
#import <libobjc.A.dylib/CKSMSComposeViewServiceProtocol.h>

@protocol CKSMSComposeViewServiceControllerDelegate;
@class NSArray, NSString, CKModalTranscriptController;

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol> {

	BOOL _canEditRecipients;
	BOOL _shouldDisableEntryField;
	BOOL _supportsAttachments;
	BOOL _supportsMessageInspection;
	BOOL _forceMMS;
	BOOL _disableCameraAttachments;
	NSArray* _utiTypes;
	NSArray* _contentURLs;
	NSArray* _photoIDs;
	NSArray* _cloudPhotoIDs;
	NSArray* _contentText;
	NSString* _shareSheetSessionID;
	CKModalTranscriptController* _modalTranscriptController;
	id<CKSMSComposeViewServiceControllerDelegate> _composeDelegate;
	/*^block*/id _gameCenterPickerBlock;
	/*^block*/id _entryViewCompletion;

}

@property (nonatomic,copy) id gameCenterPickerBlock;                                                            //@synthesize gameCenterPickerBlock=_gameCenterPickerBlock - In the implementation block
@property (nonatomic,copy) id entryViewCompletion;                                                              //@synthesize entryViewCompletion=_entryViewCompletion - In the implementation block
@property (nonatomic,retain) CKModalTranscriptController * modalTranscriptController;                           //@synthesize modalTranscriptController=_modalTranscriptController - In the implementation block
@property (assign,nonatomic) BOOL canEditRecipients; 
@property (assign,nonatomic) BOOL shouldDisableEntryField; 
@property (assign,nonatomic,__weak) id<CKSMSComposeViewServiceControllerDelegate> composeDelegate;              //@synthesize composeDelegate=_composeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(id)init;
-(void)dealloc;
-(void)setContentText:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)setContentURLs:(id)arg1 ;
-(void)setShareSheetSessionID:(id)arg1 ;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(void)chatController:(id)arg1 forwardComposition:(id)arg2 ;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg1 ;
-(void)forceMMS;
-(void)setGameCenterPickerBlock:(id)arg1 ;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(id)gameCenterPickerBlock;
-(void)composeChatController:(id)arg1 didLoadEntryViewContentWithCompletion:(/*^block*/id)arg2 ;
-(void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)setModalTranscriptController:(CKModalTranscriptController *)arg1 ;
-(CKModalTranscriptController *)modalTranscriptController;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(BOOL)_hostSandboxAllowsFileReadAtFileURL:(id)arg1 ;
-(void)hideEntryViewContent:(BOOL)arg1 ;
-(void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(BOOL)arg5 appendedVideoURL:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(BOOL)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setEntryViewCompletion:(id)arg1 ;
-(id)entryViewCompletion;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)composeChatControllerDidCancelComposition:(id)arg1 ;
-(void)_forceMMSIfNecessary;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5 ;
-(id)recipientsFromChatGUID:(id)arg1 groupName:(id)arg2 handles:(id)arg3 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setShouldDisableEntryField:(BOOL)arg1 ;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(BOOL)supportsMessageInspection;
-(void)donateInteractionWithConversation:(id)arg1 ;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)setUTIs:(id)arg1 ;
-(void)setPhotoIDs:(id)arg1 ;
-(void)setCloudPhotoIDs:(id)arg1 ;
-(void)insertRemoteItemForSending:(id)arg1 ;
-(void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)showInsertedItemInEntryView;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1 ;
-(id<CKSMSComposeViewServiceControllerDelegate>)composeDelegate;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1 ;
-(BOOL)supportsAttachments;
-(void)setComposeDelegate:(id<CKSMSComposeViewServiceControllerDelegate>)arg1 ;
@end

