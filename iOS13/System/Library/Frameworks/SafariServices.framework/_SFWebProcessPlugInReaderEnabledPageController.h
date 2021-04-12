/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFWebProcessPlugInAutoFillPageController.h>
#import <libobjc.A.dylib/SFReaderWebProcessControllerProtocol.h>

@protocol SFReaderEventsListener;
@class _WKRemoteObjectInterface, _SFReaderWebProcessPlugInPageController, NSDictionary, SFWebProcessPlugInPageExtensionController, _SFWebProcessSharingLinkExtractor, SFWebProcessPlugInCertificateWarningController, _SFWebProcessPlugInAppleConnectExtensionController, NSString;

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController <SFReaderWebProcessControllerProtocol> {

	unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController> >* _readerAvailabilityController;
	_WKRemoteObjectInterface* _availabilityControllerInterface;
	id<SFReaderEventsListener> _readerActivityListenerProxy;
	_SFReaderWebProcessPlugInPageController* _readerPageController;
	long long _cachedReaderTopScrollOffset;
	NSDictionary* _initialScrollPositionAsDictionary;
	SFWebProcessPlugInPageExtensionController* _extensionController;
	_SFWebProcessSharingLinkExtractor* _sharingLinkExtractor;
	SFWebProcessPlugInCertificateWarningController* _certificateWarningController;
	_SFWebProcessPlugInAppleConnectExtensionController* _appleConnectExtensionController;
	BOOL _viewingReadingListArchive;
	NSDictionary* _initalArticleScrollPositionAsDictionary;
	NSDictionary* _initialReaderConfiguration;

}

@property (nonatomic,retain) _SFReaderWebProcessPlugInPageController * readerPageController;                   //@synthesize readerPageController=_readerPageController - In the implementation block
@property (nonatomic,copy) NSDictionary * initalArticleScrollPositionAsDictionary;                             //@synthesize initalArticleScrollPositionAsDictionary=_initalArticleScrollPositionAsDictionary - In the implementation block
@property (assign,nonatomic) long long cachedReaderTopScrollOffset;                                            //@synthesize cachedReaderTopScrollOffset=_cachedReaderTopScrollOffset - In the implementation block
@property (nonatomic,readonly) NSDictionary * initialReaderConfiguration;                                      //@synthesize initialReaderConfiguration=_initialReaderConfiguration - In the implementation block
@property (getter=isViewingReadingListArchive,nonatomic,readonly) BOOL viewingReadingListArchive;              //@synthesize viewingReadingListArchive=_viewingReadingListArchive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfiguration:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)setReaderPageController:(_SFReaderWebProcessPlugInPageController *)arg1 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(OpaqueJSValueRef)originalArticleFinder;
-(void)setReaderIsActive:(BOOL)arg1 ;
-(void)didDetermineReaderAvailability:(BOOL)arg1 dueToSameDocumentNavigation:(BOOL)arg2 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1 ;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 ;
-(void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1 ;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1 ;
-(void)collectReaderContentForMail;
-(void)activateFont:(id)arg1 ;
-(void)prepareReaderContentForPrinting;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)checkReaderAvailability;
-(void)collectArticleContent;
-(NSDictionary *)initialReaderConfiguration;
-(BOOL)isViewingReadingListArchive;
-(void)readerContentDidBecomeReadyWithDetectedLanguage:(id)arg1 ;
-(NSDictionary *)initalArticleScrollPositionAsDictionary;
-(long long)cachedReaderTopScrollOffset;
-(void)setCachedReaderTopScrollOffset:(long long)arg1 ;
-(void)articleContentDidChange;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailability:(BOOL)arg3 ;
-(void)_setUpReaderControllerInterface;
-(void)_clearReaderControllerInterface;
-(void)_setUpReaderActivityListenerProxy;
-(void)_detectReaderAvailabilityAfterSameDocumentNavigation;
-(void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2 ;
-(_SFReaderWebProcessPlugInPageController *)readerPageController;
@end

