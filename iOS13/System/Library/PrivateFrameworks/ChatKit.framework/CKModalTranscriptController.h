/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKShareSheetChatController.h>

@class NSMutableArray, CKChatEagerUploadController;

@interface CKModalTranscriptController : CKShareSheetChatController {

	BOOL _mimeType;
	BOOL _alreadySetUp;
	NSMutableArray* _partsToInsert;
	NSMutableArray* _typesToInsert;
	int _entryViewInvisible;
	BOOL _cameraSelectionDisabled;
	BOOL _forceMMS;
	CKChatEagerUploadController* _eagerUploadController;
	NSMutableArray* _deferredInsertMediaObjectBlocks;

}

@property (nonatomic,retain) CKChatEagerUploadController * eagerUploadController;              //@synthesize eagerUploadController=_eagerUploadController - In the implementation block
@property (nonatomic,retain) NSMutableArray * deferredInsertMediaObjectBlocks;                 //@synthesize deferredInsertMediaObjectBlocks=_deferredInsertMediaObjectBlocks - In the implementation block
@property (assign,nonatomic) BOOL mimeType;                                                    //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) BOOL forceMMS;                                                    //@synthesize forceMMS=_forceMMS - In the implementation block
-(BOOL)mimeType;
-(void)setMimeType:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)registerForNotifications;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(void)setComposition:(id)arg1 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(void)sendComposition:(id)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(void)_setConversationDeferredSetup;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)hideEntryViewContent:(BOOL)arg1 ;
-(void)insertRichLinkWithURL:(id)arg1 data:(id)arg2 ;
-(void)insertMessage:(id)arg1 appProxy:(id)arg2 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setShouldDisableEntryField:(BOOL)arg1 ;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(CKChatEagerUploadController *)eagerUploadController;
-(void)setEagerUploadController:(CKChatEagerUploadController *)arg1 ;
-(NSMutableArray *)deferredInsertMediaObjectBlocks;
-(void)_insertMediaObjectAndReturnFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_insertMediaObject:(id)arg1 ;
-(double)_offsetForScreenWidth:(double)arg1 containerWidth:(double)arg2 windowOffset:(CGPoint)arg3 ;
-(void)_setEntryViewVisible:(BOOL)arg1 ;
-(BOOL)_deviceIsLocked;
-(void)_conversationListDidFinishLoading:(id)arg1 ;
-(BOOL)_shouldAllowCameraAttachments;
-(BOOL)_shouldUseDefaultFirstResponder;
-(BOOL)_shouldUseExistingConversations;
-(void)setDeferredInsertMediaObjectBlocks:(NSMutableArray *)arg1 ;
@end

