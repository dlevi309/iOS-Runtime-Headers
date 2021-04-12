/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIDocument.h>
#import <TSReading/TSADocumentRootDelegate.h>
#import <TSReading/TSKDocumentRootProvider.h>
#import <TSReading/TSPObjectContextDelegate.h>

@protocol OS_dispatch_queue, TIADocumentPassphraseDelegate;
@class NSString, TSKDocumentRoot, TSADocumentRoot, TSPObjectContext, NSObject, TIADocumentInfo, SFUCryptoKey, NSURL;

@interface TIADocument : UIDocument <TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate> {

	int _hasPersistenceErrors;
	TSADocumentRoot* _documentRootForDocumentDidLoad;
	TSADocumentRoot* _suspendedDocumentRoot;
	TSPObjectContext* _context;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _ioOperationQueue;
	id _documentStateChangedObserver;
	BOOL _passwordEntryWasAbandoned;
	BOOL _isShowingConflictResolutionSheet;
	BOOL _isClosingWithoutSaving;
	BOOL _isReadOnly;
	BOOL _documentNeedsDownloadOnRevert;
	BOOL _documentRevertWasAbandoned;
	TIADocumentInfo* _documentInfo;
	id<TIADocumentPassphraseDelegate> _passphraseDelegate;
	SFUCryptoKey* _encryptionKey;
	NSString* _sourcePathForNondestructiveImport;
	TSPObjectContext* _contextForRevert;
	NSURL* _templateURL;

}

@property (nonatomic,retain) TSPObjectContext * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TSPObjectContext * contextForRevert;                               //@synthesize contextForRevert=_contextForRevert - In the implementation block
@property (nonatomic,retain) TIADocumentInfo * documentInfo;                                    //@synthesize documentInfo=_documentInfo - In the implementation block
@property (nonatomic,copy) NSURL * templateURL;                                                 //@synthesize templateURL=_templateURL - In the implementation block
@property (nonatomic,retain) SFUCryptoKey * encryptionKey;                                      //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (assign) BOOL isReadOnly;                                                             //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (assign) BOOL isClosingWithoutSaving;                                                 //@synthesize isClosingWithoutSaving=_isClosingWithoutSaving - In the implementation block
@property (nonatomic,readonly) BOOL isClosed; 
@property (readonly) BOOL passwordEntryWasAbandoned;                                            //@synthesize passwordEntryWasAbandoned=_passwordEntryWasAbandoned - In the implementation block
@property (readonly) BOOL documentNeedsDownloadOnRevert;                                        //@synthesize documentNeedsDownloadOnRevert=_documentNeedsDownloadOnRevert - In the implementation block
@property (readonly) BOOL documentRevertWasAbandoned;                                           //@synthesize documentRevertWasAbandoned=_documentRevertWasAbandoned - In the implementation block
@property (readonly) BOOL shouldHideForSnapshots; 
@property (nonatomic,retain,readonly) TSADocumentRoot * documentRoot; 
@property (readonly) BOOL isShowingConflictResolutionSheet;                                     //@synthesize isShowingConflictResolutionSheet=_isShowingConflictResolutionSheet - In the implementation block
@property (readonly) BOOL hasPersistenceErrors; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,copy) NSString * documentPasswordHint; 
@property (assign,nonatomic) id<TIADocumentPassphraseDelegate> passphraseDelegate;              //@synthesize passphraseDelegate=_passphraseDelegate - In the implementation block
@property (nonatomic,retain) NSString * sourcePathForNondestructiveImport;                      //@synthesize sourcePathForNondestructiveImport=_sourcePathForNondestructiveImport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
-(void)dealloc;
-(NSString *)name;
-(TSPObjectContext *)context;
-(void)setContext:(TSPObjectContext *)arg1 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasUnsavedChanges;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(TIADocumentInfo *)documentInfo;
-(void)setDocumentInfo:(TIADocumentInfo *)arg1 ;
-(BOOL)isReadOnly;
-(id<NSFilePresenter>)filePresenter;
-(BOOL)isClosed;
-(void)setIsReadOnly:(BOOL)arg1 ;
-(SFUCryptoKey *)encryptionKey;
-(void)setEncryptionKey:(SFUCryptoKey *)arg1 ;
-(void)setTemplateURL:(NSURL *)arg1 ;
-(NSURL *)templateURL;
-(BOOL)isPasswordProtected;
-(TSADocumentRoot *)documentRoot;
-(void)documentDidLoad;
-(NSString *)documentPasswordHint;
-(void)setDocumentPasswordHint:(NSString *)arg1 ;
-(id)documentUUID;
-(id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3 ;
-(void)decryptedDocumentWithKey:(id)arg1 ;
-(id)packageDataForWrite;
-(id)additionalDocumentPropertiesForWrite;
-(void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4 ;
-(NSString *)documentCachePath;
-(id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3 ;
-(BOOL)isClosingWithoutSaving;
-(void)setFileProtectionTo:(id)arg1 atPath:(id)arg2 ;
-(id)initWithTemporaryFileURL:(id)arg1 ;
-(BOOL)shouldHideForSnapshots;
-(void)p_performSynchronousBlockOnMainThread:(/*^block*/id)arg1 ;
-(BOOL)shouldAbandonDocumentRevert;
-(BOOL)hasPersistenceErrors;
-(void)passwordStateDidChange;
-(void)coordinatedReadUsingAccessor:(/*^block*/id)arg1 ;
-(BOOL)_shouldPreventFileProtectionUpgradeToLevel:(id)arg1 ;
-(void)setDocumentFileProtectionTo:(id)arg1 ;
-(void)setEncryptionKeyWithPassphrase:(id)arg1 ;
-(BOOL)validatePassphrase:(id)arg1 ;
-(BOOL)passwordEntryWasAbandoned;
-(BOOL)isShowingConflictResolutionSheet;
-(void)setIsClosingWithoutSaving:(BOOL)arg1 ;
-(id<TIADocumentPassphraseDelegate>)passphraseDelegate;
-(void)setPassphraseDelegate:(id<TIADocumentPassphraseDelegate>)arg1 ;
-(NSString *)sourcePathForNondestructiveImport;
-(void)setSourcePathForNondestructiveImport:(NSString *)arg1 ;
-(TSPObjectContext *)contextForRevert;
-(void)setContextForRevert:(TSPObjectContext *)arg1 ;
-(BOOL)documentNeedsDownloadOnRevert;
-(BOOL)documentRevertWasAbandoned;
@end

