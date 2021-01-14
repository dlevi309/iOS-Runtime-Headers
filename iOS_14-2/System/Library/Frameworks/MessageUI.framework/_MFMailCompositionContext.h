/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/EMCollectionChangeObserver.h>
#import <libobjc.A.dylib/MFMailCompositionAdditionalDonating.h>
#import <libobjc.A.dylib/MFMailCompositionShareSheetRecipients.h>

@protocol _MFMailCompositionContextDelegate, EFScheduler;
@class NSString, NSArray, MFMailMessage, EMMessage, MFMessageLoadingContext, MFAttachmentCompositionContext, MFAttachmentComposeManager, NSMutableArray, EMMessageList, MFComposeWebView, MFAttachmentManager;

@interface _MFMailCompositionContext : NSObject <EMCollectionChangeObserver, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients> {

	NSString* _sendingAddress;
	NSString* _subject;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _messageBody;
	int _composeType;
	NSString* _autosaveIdentifier;
	MFMailMessage* _legacyMessage;
	EMMessage* _originalMessage;
	NSString* _attachmentToMarkupContentID;
	id _originalContent;
	MFMessageLoadingContext* _loadingContext;
	BOOL _loadRest;
	BOOL _includeAttachments;
	BOOL _includeAttachmentsWhenAdding;
	BOOL _showKeyboardImmediately;
	BOOL _showContentImmediately;
	MFAttachmentCompositionContext* _attachmentContext;
	MFAttachmentComposeManager* _attachmentManager;
	NSMutableArray* _deferredAttachments;
	BOOL _registeredForDraw;
	EMMessageList* _messageList;
	BOOL _usingDefaultAccount;
	BOOL _prefersFirstLineSelection;
	BOOL _originatingFromAttachmentMarkup;
	int _sourceAccountManagement;
	NSString* _shareSheetSessionID;
	NSArray* _UTITypes;
	NSArray* _photoIDs;
	NSArray* _cloudPhotoIDs;
	NSArray* _contentText;
	NSArray* _contentURLs;
	unsigned long long _caretPosition;
	NSArray* _contentVariations;
	unsigned long long _defaultContentVariationIndex;
	NSString* _contentVariationAttachmentCID;
	NSString* _originatingBundleID;
	id<_MFMailCompositionContextDelegate> _delegate;
	MFComposeWebView* _composeWebView;
	id<EFScheduler> _observationScheduler;

}

@property (assign) MFComposeWebView * composeWebView;                                            //@synthesize composeWebView=_composeWebView - In the implementation block
@property (nonatomic,retain) id<EFScheduler> observationScheduler;                               //@synthesize observationScheduler=_observationScheduler - In the implementation block
@property (assign,nonatomic) BOOL usingDefaultAccount;                                           //@synthesize usingDefaultAccount=_usingDefaultAccount - In the implementation block
@property (nonatomic,copy) NSString * sendingAddress;                                            //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * toRecipients;                                               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ccRecipients;                                               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,copy) NSArray * bccRecipients;                                              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,retain) NSString * attachmentToMarkupContentID;                             //@synthesize attachmentToMarkupContentID=_attachmentToMarkupContentID - In the implementation block
@property (assign,nonatomic) BOOL loadRest;                                                      //@synthesize loadRest=_loadRest - In the implementation block
@property (assign,nonatomic) BOOL includeAttachments;                                            //@synthesize includeAttachments=_includeAttachments - In the implementation block
@property (assign,nonatomic) BOOL includeAttachmentsWhenAdding;                                  //@synthesize includeAttachmentsWhenAdding=_includeAttachmentsWhenAdding - In the implementation block
@property (assign,nonatomic) BOOL showKeyboardImmediately;                                       //@synthesize showKeyboardImmediately=_showKeyboardImmediately - In the implementation block
@property (assign,nonatomic) BOOL showContentImmediately;                                        //@synthesize showContentImmediately=_showContentImmediately - In the implementation block
@property (assign,nonatomic) BOOL prefersFirstLineSelection;                                     //@synthesize prefersFirstLineSelection=_prefersFirstLineSelection - In the implementation block
@property (assign,nonatomic) unsigned long long caretPosition;                                   //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,retain) id originalContent;                                                 //@synthesize originalContent=_originalContent - In the implementation block
@property (nonatomic,retain) MFMessageLoadingContext * loadingContext;                           //@synthesize loadingContext=_loadingContext - In the implementation block
@property (assign,nonatomic) BOOL originatingFromAttachmentMarkup;                               //@synthesize originatingFromAttachmentMarkup=_originatingFromAttachmentMarkup - In the implementation block
@property (nonatomic,copy) NSArray * contentVariations;                                          //@synthesize contentVariations=_contentVariations - In the implementation block
@property (assign,nonatomic) unsigned long long defaultContentVariationIndex;                    //@synthesize defaultContentVariationIndex=_defaultContentVariationIndex - In the implementation block
@property (nonatomic,copy) NSString * contentVariationAttachmentCID;                             //@synthesize contentVariationAttachmentCID=_contentVariationAttachmentCID - In the implementation block
@property (nonatomic,readonly) int composeType;                                                  //@synthesize composeType=_composeType - In the implementation block
@property (nonatomic,readonly) NSString * autosaveIdentifier;                                    //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,readonly) MFMailMessage * legacyMessage;                                    //@synthesize legacyMessage=_legacyMessage - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                                       //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (assign,nonatomic) int sourceAccountManagement;                                        //@synthesize sourceAccountManagement=_sourceAccountManagement - In the implementation block
@property (nonatomic,readonly) EMMessage * originalMessage;                                      //@synthesize originalMessage=_originalMessage - In the implementation block
@property (nonatomic,readonly) MFAttachmentCompositionContext * attachmentContext;               //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (nonatomic,readonly) MFAttachmentManager * attachmentManager; 
@property (nonatomic,readonly) NSString * contextID; 
@property (assign,nonatomic,__weak) id<_MFMailCompositionContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * UTITypes;                                                   //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSArray * photoIDs;                                                   //@synthesize photoIDs=_photoIDs - In the implementation block
@property (nonatomic,copy) NSArray * cloudPhotoIDs;                                              //@synthesize cloudPhotoIDs=_cloudPhotoIDs - In the implementation block
@property (nonatomic,copy) NSArray * contentText;                                                //@synthesize contentText=_contentText - In the implementation block
@property (nonatomic,copy) NSArray * contentURLs;                                                //@synthesize contentURLs=_contentURLs - In the implementation block
@property (nonatomic,copy) NSString * shareSheetSessionID;                                       //@synthesize shareSheetSessionID=_shareSheetSessionID - In the implementation block
+(id)log;
+(id)processMessageBody:(id)arg1 asHTML:(BOOL)arg2 ;
-(NSString *)subject;
-(MFMailMessage *)legacyMessage;
-(void)removeAttachment:(id)arg1 ;
-(MFAttachmentManager *)attachmentManager;
-(int)composeType;
-(MFComposeWebView *)composeWebView;
-(id)attachments;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id<_MFMailCompositionContextDelegate>)delegate;
-(void)setShowKeyboardImmediately:(BOOL)arg1 ;
-(void)setUTITypes:(NSArray *)arg1 ;
-(NSString *)attachmentToMarkupContentID;
-(NSArray *)contentText;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(MFAttachmentCompositionContext *)attachmentContext;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 ;
-(NSString *)contentVariationAttachmentCID;
-(int)sourceAccountManagement;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSString *)sendingAddress;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(BOOL)loadRest;
-(id)initWithComposeType:(int)arg1 ;
-(id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3 legacyMessage:(id)arg4 ;
-(id)initWithComposeType:(int)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3 ;
-(BOOL)prefersFirstLineSelection;
-(unsigned long long)caretPosition;
-(void)insertDeferredAttachmentsIntoComposeWebView:(id)arg1 ;
-(void)setAttachmentToMarkupContentID:(NSString *)arg1 ;
-(NSString *)originatingBundleID;
-(id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3 legacyMessage:(id)arg4 isEML:(BOOL)arg5 ;
-(id)initWithComposeType:(int)arg1 originalMessage:(id)arg2 legacyMessage:(id)arg3 isEML:(BOOL)arg4 ;
-(void)setComposeWebView:(MFComposeWebView *)arg1 ;
-(id<EFScheduler>)observationScheduler;
-(void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3 ;
-(void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3 ;
-(void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3 ;
-(void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3 ;
-(void)collection:(id)arg1 changedItemIDs:(id)arg2 ;
-(void)collection:(id)arg1 deletedItemIDs:(id)arg2 ;
-(void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3 ;
-(id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)initReplyToMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(id)initReplyAllToMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(void)setDelegate:(id<_MFMailCompositionContextDelegate>)arg1 ;
-(id)initForwardOfMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(id)initReplyToMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(BOOL)arg3 ;
-(id)initReplyAllToMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(BOOL)arg3 ;
-(id)initForwardOfMessage:(id)arg1 legacyMessage:(id)arg2 isEML:(BOOL)arg3 ;
-(id)initDraftRestoreOfMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(id)initSendAgainDraftOfMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(id)initOutboxRestoreOfMessage:(id)arg1 legacyMessage:(id)arg2 ;
-(id)initWithHandoffActivityPayload:(id)arg1 ;
-(id)addAttachmentDataItemProvider:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 contentID:(id)arg4 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 ;
-(void)insertAttachmentWithURL:(id)arg1 ;
-(void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(BOOL)hasDuetDonationContext;
-(void)setUsingDefaultAccount:(BOOL)arg1 ;
-(void)setShowContentImmediately:(BOOL)arg1 ;
-(void)setIncludeAttachmentsWhenAdding:(BOOL)arg1 ;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(void)switchToReplyAllWithDelegate:(id)arg1 ;
-(void)switchToReplyWithDelegate:(id)arg1 ;
-(BOOL)usingDefaultAccount;
-(void)setSourceAccountManagement:(int)arg1 ;
-(NSString *)contextID;
-(void)setPrefersFirstLineSelection:(BOOL)arg1 ;
-(void)setOriginatingFromAttachmentMarkup:(BOOL)arg1 ;
-(void)setContentVariations:(NSArray *)arg1 ;
-(void)setDefaultContentVariationIndex:(unsigned long long)arg1 ;
-(void)setContentVariationAttachmentCID:(NSString *)arg1 ;
-(void)setObservationScheduler:(id<EFScheduler>)arg1 ;
-(id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2 ;
-(id)originalContent;
-(BOOL)includeAttachments;
-(BOOL)includeAttachmentsWhenAdding;
-(NSArray *)UTITypes;
-(NSString *)autosaveIdentifier;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(NSArray *)contentVariations;
-(BOOL)originatingFromAttachmentMarkup;
-(NSArray *)photoIDs;
-(EMMessage *)originalMessage;
-(void)setLoadRest:(BOOL)arg1 ;
-(void)setContentText:(NSArray *)arg1 ;
-(void)setPhotoIDs:(NSArray *)arg1 ;
-(NSArray *)cloudPhotoIDs;
-(void)setCloudPhotoIDs:(NSArray *)arg1 ;
-(void)setContentURLs:(NSArray *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setShareSheetSessionID:(NSString *)arg1 ;
-(MFMessageLoadingContext *)loadingContext;
-(void)setLoadingContext:(MFMessageLoadingContext *)arg1 ;
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(unsigned long long)defaultContentVariationIndex;
-(BOOL)showContentImmediately;
-(NSArray *)contentURLs;
-(BOOL)showKeyboardImmediately;
-(void)setOriginalContent:(id)arg1 ;
-(NSString *)shareSheetSessionID;
-(void)dealloc;
-(id)messageBody;
@end

