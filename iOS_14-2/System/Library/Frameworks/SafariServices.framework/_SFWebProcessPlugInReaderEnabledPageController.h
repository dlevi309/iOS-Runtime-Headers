/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFWebProcessPlugInAutoFillPageController.h>
#import <libobjc.A.dylib/SFReaderWebProcessControllerProtocol.h>

@protocol SFReaderEventsListener, _SFAppBannerMetaTagContentObserver;
@class _WKRemoteObjectInterface, _SFReaderWebProcessPlugInPageController, NSDictionary, SFWebProcessPlugInPageExtensionController, _SFWebProcessSharingLinkExtractor, SFWebProcessPlugInCertificateWarningController, NSString;

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
	id<_SFAppBannerMetaTagContentObserver> _appBannerObserverProxy;
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
-(NSDictionary *)initialReaderConfiguration;
-(void)didCreateReaderPageContextHandle:(id)arg1 ;
-(id)_searchForSmartAppBannerMetaContent;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(void)prepareReaderContentForPrinting;
-(_SFReaderWebProcessPlugInPageController *)readerPageController;
-(void)prepareToTransitionToReader;
-(void)_setUpReaderActivityListenerProxy;
-(void)collectArticleContent;
-(void)articleContentDidChange;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(NSDictionary *)initalArticleScrollPositionAsDictionary;
-(void)loadNewReaderArticle;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1 ;
-(id)_appBannerMetaTagObserverProxy;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(OpaqueJSValueRef)originalArticleFinder;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3 ;
-(void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1 ;
-(void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2 ;
-(void)readerContentDidBecomeReadyWithDetectedLanguage:(id)arg1 ;
-(void)setReaderIsActive:(BOOL)arg1 ;
-(void)setCachedReaderTopScrollOffset:(long long)arg1 ;
-(void)_clearReaderControllerInterface;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 ;
-(long long)cachedReaderTopScrollOffset;
-(void)checkReaderAvailability;
-(void)_setUpReaderControllerInterface;
-(BOOL)isViewingReadingListArchive;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(id)_appBannerMetaElementInHeaderElement:(id)arg1 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailability:(BOOL)arg3 ;
-(void)activateFont:(id)arg1 ;
-(void)_detectReaderAvailabilityAfterSameDocumentNavigation;
-(void)didDetermineReaderAvailability:(id)arg1 ;
-(void)setConfiguration:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)collectReaderContentForMail;
-(void)setReaderPageController:(_SFReaderWebProcessPlugInPageController *)arg1 ;
@end

