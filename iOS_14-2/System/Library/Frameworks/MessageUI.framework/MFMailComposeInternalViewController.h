/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailCompositionAdditionalDonating.h>
#import <libobjc.A.dylib/MFMailCompositionShareSheetRecipients.h>

@protocol MFMailComposeViewControllerDelegate;
@class NSArray, NSString, MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, _UIAsyncInvocation, NSMutableArray, NSMutableDictionary, NSError;

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients> {

	MFMailComposePlaceholderViewController* _placeholderViewController;
	MFMailComposeRemoteViewController* _serviceViewController;
	_UIAsyncInvocation* _cancellationInvocation;
	unsigned long long _defaultContentVariationIndex;
	NSMutableArray* _contentVariations;
	NSMutableDictionary* _compositionValues;
	NSMutableArray* _attachments;
	NSString* _placeholderSubject;
	long long _composeResult;
	NSError* _composeResultError;
	double _presentationDelayBeganTimestamp;
	unsigned _hasDelayedPresentation : 1;
	unsigned _didEndDelayedPresentation : 1;
	unsigned _compositionValuesAreFinalized : 1;
	unsigned _remoteViewControllerIsConfigured : 1;
	unsigned _isAppearing : 1;
	unsigned _didAppear : 1;
	unsigned _didFinish : 1;
	unsigned _delegateRespondsToBodyFinishedLoadingWithResult : 1;
	id<MFMailComposeViewControllerDelegate> _mailComposeDelegate;

}

@property (assign,nonatomic,__weak) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;              //@synthesize mailComposeDelegate=_mailComposeDelegate - In the implementation block
@property (nonatomic,copy) NSArray * UTITypes; 
@property (nonatomic,copy) NSArray * photoIDs; 
@property (nonatomic,copy) NSArray * cloudPhotoIDs; 
@property (nonatomic,copy) NSArray * contentText; 
@property (nonatomic,copy) NSArray * contentURLs; 
@property (nonatomic,copy) NSString * shareSheetSessionID; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(id)remoteViewController;
-(void)setShowKeyboardImmediately:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setUTITypes:(NSArray *)arg1 ;
-(void)setURL:(id)arg1 ;
-(NSArray *)contentText;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)viewDidLoad;
-(void)setContentVisible:(BOOL)arg1 ;
-(NSArray *)UTITypes;
-(void)setMailComposeDelegate:(id<MFMailComposeViewControllerDelegate>)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)setToRecipients:(id)arg1 ;
-(void)setAutosaveIdentifier:(id)arg1 ;
-(NSArray *)photoIDs;
-(void)setContentText:(NSArray *)arg1 ;
-(void)loadView;
-(void)_serviceViewControllerReady:(id)arg1 error:(id)arg2 ;
-(void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg1 ;
-(void)_cancelComposition:(id)arg1 ;
-(void)_notifyCompositionDidFinish;
-(void)_beginDelayingCompositionPresenation;
-(void)_didEndDelayingCompositionPresentation;
-(void)_configureRemoteViewContoller;
-(void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg1 ;
-(id)placeholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 proxy:(id)arg5 ;
-(void)setPhotoIDs:(NSArray *)arg1 ;
-(id)securityScopeForURL:(id)arg1 proxy:(id)arg2 ;
-(void)_processAttachmentsViaProxy:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSArray *)cloudPhotoIDs;
-(void)setCloudPhotoIDs:(NSArray *)arg1 ;
-(void)setContentURLs:(NSArray *)arg1 ;
-(void)setSubject:(id)arg1 ;
-(void)setShareSheetSessionID:(NSString *)arg1 ;
-(void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg1 ;
-(void)compositionFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(void)_endDelayingCompositionPresentation;
-(void)_cancelRemoteServiceViewControllerRequest;
-(void)_setCompositionValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPlaceHolderSubject:(id)arg1 ;
-(NSArray *)contentURLs;
-(void)compositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)compositionViewServiceTerminatedWithError:(id)arg1 ;
-(NSString *)shareSheetSessionID;
-(void)setPreferredSendingEmailAddress:(id)arg1 ;
-(id)addContentVariationWithName:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDefaultContentVariation:(id)arg1 ;
-(id)addAttachmentFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)addAttachmentItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)finalizeCompositionValues;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id<MFMailComposeViewControllerDelegate>)mailComposeDelegate;
@end

