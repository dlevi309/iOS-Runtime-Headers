/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/_UIDICActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSArray, QLPreviewController, UIViewController, UIView, UIBarButtonItem, NSURL, _UIDICPreviewItem, _UIDICActivityViewController, UIPopoverController, NSString;

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, _UIDICActivityViewControllerDelegate, LSOpenResourceOperationDelegate, UIActionSheetDelegate> {

	NSArray* _gestureRecognizers;
	NSArray* _icons;
	QLPreviewController* _previewController;
	UIViewController* _presentingViewController;
	CGRect _presentRect;
	UIView* _presentView;
	UIBarButtonItem* _presentItem;
	NSURL* _tmpURLToDeleteOnDealloc;
	NSURL* _decompressedArchiveDocumentURL;
	BOOL _shouldDecompressArchiveIfNecessary;
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
		unsigned transitionImageForPreview : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
	}  _documentInteractionControllerFlags;
	BOOL _isContentManaged;
	BOOL _previewsPresentWithMarkup;
	BOOL _excludeDotFilesFromArchiveListings;
	id<UIDocumentInteractionControllerDelegate> _delegate;
	_UIDICPreviewItem* _previewControllerItem;
	id _annotation;
	/*^block*/id _completionWithItemsHandler;
	_UIDICActivityViewController* _activityViewController;
	UIPopoverController* _popoverController;
	NSURL* __customExtactionRootURL;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) _UIDICActivityViewController * activityViewController;                                                               //@synthesize activityViewController=_activityViewController - In the implementation block
@property (nonatomic,readonly) QLPreviewController * previewController; 
@property (nonatomic,readonly) _UIDICPreviewItem * previewControllerItem;                                                                         //@synthesize previewControllerItem=_previewControllerItem - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController;                                                                             //@synthesize popoverController=_popoverController - In the implementation block
@property (setter=_setCustomExtactionRootURL:,getter=_customExtactionRootURL,nonatomic,copy) NSURL * _customExtactionRootURL;                     //@synthesize _customExtactionRootURL=__customExtactionRootURL - In the implementation block
@property (setter=_setCompletionWithItemsHandler:,getter=_completionWithItemsHandler,nonatomic,copy) id _completionWithItemsHandler;              //@synthesize completionWithItemsHandler=_completionWithItemsHandler - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                                                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                                                               //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,nonatomic) BOOL previewsPresentWithMarkup;                                                                                      //@synthesize previewsPresentWithMarkup=_previewsPresentWithMarkup - In the implementation block
@property (getter=isArchive,nonatomic,readonly) BOOL archive; 
@property (assign,nonatomic) BOOL shouldUnzipDocument; 
@property (assign,nonatomic) BOOL excludeDotFilesFromArchiveListings;                                                                             //@synthesize excludeDotFilesFromArchiveListings=_excludeDotFilesFromArchiveListings - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * URL; 
@property (nonatomic,copy) NSString * UTI; 
@property (copy) NSString * name; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,retain) id annotation;                                                                                                       //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interactionControllerWithURL:(id)arg1 ;
+(id)_UTIForFileURL:(id)arg1 ;
+(id)_archiveDecompressQueue;
-(void)dealloc;
-(NSString *)name;
-(void)_invalidate;
-(id)initWithURL:(id)arg1 ;
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)icons;
-(NSURL *)URL;
-(NSString *)uniqueIdentifier;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(BOOL)isContentManaged;
-(BOOL)sourceIsManaged;
-(id)_documentProxy;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)UTI;
-(NSArray *)gestureRecognizers;
-(UIPopoverController *)popoverController;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(id)annotation;
-(void)_setCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(BOOL)presentPreviewAnimated:(BOOL)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(_UIDICActivityViewController *)activityViewController;
-(void)setActivityViewController:(_UIDICActivityViewController *)arg1 ;
-(id)_completionWithItemsHandler;
-(BOOL)previewController:(id)arg1 canEditItem:(id)arg2 ;
-(BOOL)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2 ;
-(id)excludedActivityTypesForPreviewController:(id)arg1 ;
-(id)dismissActionsForPreviewController:(id)arg1 ;
-(QLPreviewController *)previewController;
-(void)dismissMenuAnimated:(BOOL)arg1 ;
-(void)_updateURLIsContentManaged;
-(_UIDICPreviewItem *)previewControllerItem;
-(BOOL)_isFilenameValidForDecompressing:(id)arg1 allowsPreviewingArchive:(BOOL)arg2 ;
-(void)_presentPreview:(id)arg1 ;
-(void)_presentOptionsMenu:(id)arg1 ;
-(id)_documentProxyWithIsContentManaged:(BOOL)arg1 ;
-(BOOL)_shouldAutoDecompressIfArchive;
-(BOOL)_shouldReturnDefaultApplication;
-(id)_preferredApplicationForDocumentOpening;
-(BOOL)_isPackageArchive:(id)arg1 ;
-(id)_pathsInArchive:(/*^block*/id)arg1 ;
-(id)__decompressArchiveAndSetupPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)previewsPresentWithMarkup;
-(void)_clearPreviousPresentationContext;
-(BOOL)_setupForOptionsMenu;
-(void)_decompressArchiveAndSetupPayload:(/*^block*/id)arg1 ;
-(BOOL)_presentOptionsMenuAnimated:(BOOL)arg1 willPresentBlock:(/*^block*/id)arg2 ;
-(BOOL)__presentPreviewAnimated:(BOOL)arg1 ;
-(BOOL)_setupPreviewController;
-(BOOL)_setupForOpenInMenu;
-(BOOL)_presentOpenInMenuAnimated:(BOOL)arg1 willPresentBlock:(/*^block*/id)arg2 ;
-(void)_dismissEverythingWithExtremePrejudiceAnimated:(BOOL)arg1 ;
-(BOOL)presentOptionsMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_openDocumentWithApplication:(id)arg1 ;
-(void)__openUsingInPlaceMechanismToTransferDocumentToApplication:(id)arg1 ;
-(void)__openUsingDefaultCopyMechanismToTransferDocumentToApplication:(id)arg1 ;
-(void)_invokeDelegateWillBeginOpenWithApplicationIdentifier:(id)arg1 ;
-(void)__performLaunchServiceDocumentOpenWithApplication:(id)arg1 launchServiceOptions:(id)arg2 ;
-(void)_invokeDelegateDidFinishOpenWithApplicationIdentifier:(id)arg1 ;
-(void)_fixupFileExtensionIfNeeded;
-(BOOL)_shouldIncludePreviewActivity;
-(id)_newPreviewActivity;
-(id)_newActivityIfNecessaryForLegacyActionDelegatingWithAction:(SEL)arg1 ;
-(BOOL)_isImage;
-(id)_preparedActivityViewControllerWithItems:(id)arg1 activities:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)_delegateImplementsLegacyActions;
-(BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1 ;
-(BOOL)_delegateCanPerformAction:(SEL)arg1 ;
-(BOOL)_shouldIncludeActivityForLegacyDelegatingWithAction:(SEL)arg1 ;
-(BOOL)_delegatePerformAction:(SEL)arg1 ;
-(unsigned long long)_archiveExtractionOptions;
-(NSURL *)_customExtactionRootURL;
-(void)activityViewController:(id)arg1 openActivityWillBeginSendingToApplication:(id)arg2 ;
-(void)activityViewController:(id)arg1 openActivityDidEndSendingToApplication:(id)arg2 ;
-(void)activityViewController:(id)arg1 didFinishPresentingActivityType:(id)arg2 ;
-(void)activityViewController:(id)arg1 didFinishPerformingActivityType:(id)arg2 completed:(BOOL)arg3 items:(id)arg4 error:(id)arg5 ;
-(id)activityViewController:(id)arg1 mailSubjectForActivityType:(id)arg2 ;
-(void)setPreviewURLOverride:(id)arg1 ;
-(id)_defaultApplication;
-(BOOL)isArchive;
-(id)subitemsInArchive:(/*^block*/id)arg1 ;
-(id)extractSubitemFromArchive:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3 ;
-(void)markupAction:(id)arg1 ;
-(id)additionalActivitiesTypesForPreviewController:(id)arg1 ;
-(BOOL)_canPreviewDecompressedArchive;
-(BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentingNavigationController;
-(BOOL)presentOpenInMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPreviewAnimated:(BOOL)arg1 ;
-(void)openDocumentWithDefaultApplication;
-(void)setShouldUnzipDocument:(BOOL)arg1 ;
-(BOOL)shouldUnzipDocument;
-(void)_setDecompressedArchiveDocumentURL:(id)arg1 ;
-(id)_decompressedArchiveDocumentURL;
-(BOOL)_shouldAutoDecompressIfArchiveForPreview;
-(BOOL)_documentNeedsHelpDecompressingArchiveForPreview;
-(BOOL)_isValidURL:(id)arg1 ;
-(BOOL)_canSaveToCameraRollForType;
-(void)_setCustomExtactionRootURL:(id)arg1 ;
-(void)setPreviewsPresentWithMarkup:(BOOL)arg1 ;
-(BOOL)excludeDotFilesFromArchiveListings;
-(void)setExcludeDotFilesFromArchiveListings:(BOOL)arg1 ;
@end

