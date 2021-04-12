/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/_WKInputDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <libobjc.A.dylib/MFHasMoreContentBannerViewDelegate.h>
#import <libobjc.A.dylib/MFLoadBlockedContentBannerViewDelegate.h>
#import <libobjc.A.dylib/MFBlockedSenderBannerViewDelegate.h>
#import <libobjc.A.dylib/MFMessageHeaderViewDelegate.h>
#import <libobjc.A.dylib/MFMessageFooterViewDelegate.h>
#import <libobjc.A.dylib/MFMailDropBannerDelegate.h>
#import <libobjc.A.dylib/MFPopoverPresentationSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/EFSignpostable.h>
#import <libobjc.A.dylib/MFMailWebProcessDelegate.h>
#import <libobjc.A.dylib/MFReusable.h>

@protocol EFScheduler, EFCancelable, MFMessageContentViewDelegate, MFMessageContentViewDataSource;
@class EFCancelationToken, MessageContentItemsHelper, MFMessageHeaderView, MFMailDropBannerView, MFHasMoreContentBannerView, MFLoadBlockedContentBannerView, MFBlockedSenderBannerView, UIView, NSMutableArray, UIBarButtonItem, MFConversationItemFooterView, NSMutableSet, MessageContentRepresentationRequest, MFMessageLoadingContext, NSString, MFMessageDisplayMetrics, MFMailboxProvider, EMDaemonInterface, MFAddressAtomStatusManager, NSArray, MFMessageContentLoadingView, MFWebViewLoadingController, NSDictionary, NSError, WKWebView, MFWebViewDictionary, EMContentRepresentation, UIScrollView;

@interface MFMessageContentView : UIView <UIPopoverPresentationControllerDelegate, _WKInputDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, MFHasMoreContentBannerViewDelegate, MFLoadBlockedContentBannerViewDelegate, MFBlockedSenderBannerViewDelegate, MFMessageHeaderViewDelegate, MFMessageFooterViewDelegate, MFMailDropBannerDelegate, MFPopoverPresentationSource, UIScrollViewDelegate, EFSignpostable, MFMailWebProcessDelegate, MFReusable> {

	EFCancelationToken* _loadingCancelable;
	MessageContentItemsHelper* _relatedItemsHelper;
	MFMessageHeaderView* _headerView;
	MFMailDropBannerView* _mailDropBanner;
	MFHasMoreContentBannerView* _loadHasMoreContentBanner;
	MFLoadBlockedContentBannerView* _loadImagesHeaderBlock;
	MFBlockedSenderBannerView* _blockedSenderBanner;
	UIView* _previousContentSnapshotWrapperView;
	id<EFScheduler> _attachmentsScheduler;
	NSMutableArray* _scriptHandlers;
	UIBarButtonItem* _presentedControllerDoneButtonItem;
	CGRect _activatedAttachmentRect;
	id<EFCancelable> _contentSizeObservation;
	BOOL _suppressContentSizeNotifications;
	BOOL _suppressContentSizeNotificationsUntilFirstPaint;
	UIEdgeInsets _originalZoomInsets;
	BOOL _paddingConstantsNeedUpdate;
	MFConversationItemFooterView* _footerView;
	NSMutableSet* _inFlightURLs;
	unsigned long long _webProcessCrashCount;
	struct {
		unsigned delegateRespondsToDidFinishLoadingMessages : 1;
		unsigned delegateRespondsToDidFinishFirstPaint : 1;
		unsigned delegateRespondsToDidDisplayContent : 1;
		unsigned delegateRespondsToDidFinishRenderingWithHeight : 1;
		unsigned delegateRespondsToExpandQuoteAtScrollOffset : 1;
		unsigned delegateRespondsToWillBeginZoomingMessage : 1;
		unsigned delegateRespondsToDidEndZoomingMessage : 1;
		unsigned delegateRespondsToDidTapRevealActionsButton : 1;
		unsigned delegateRespondsToLoadingIndicatorDidChangeVisibility : 1;
		unsigned delegateRespondsToDidLoadSecurityInformation : 1;
	}  _flags;
	BOOL _automaticallyCollapseQuotedContent;
	BOOL _showMessageFooter;
	BOOL _shouldArchiveByDefault;
	BOOL _initiallyZoomsToShowAllContent;
	BOOL _suppressScrolling;
	BOOL _contentPaddingFollowsLayoutMargins;
	BOOL _hasVisibleContent;
	BOOL _showsBanners;
	BOOL _zoomEnabled;
	BOOL _allowLoadOfBlockedMessageContent;
	BOOL _showingError;
	id<MFMessageContentViewDelegate> _delegate;
	id<MFMessageContentViewDataSource> _dataSource;
	MessageContentRepresentationRequest* _contentRequest;
	MFMessageLoadingContext* _loadingContext;
	NSString* _selectedHTML;
	UIView* _headerViewSubjectBlock;
	long long _messageBlockingReason;
	unsigned long long _blockedContentTypes;
	UIView* _previousContentSnapshot;
	MFMessageDisplayMetrics* _displayMetrics;
	MFMailboxProvider* _mailboxProvider;
	EMDaemonInterface* _daemonInterface;
	MFAddressAtomStatusManager* _atomManager;
	NSArray* _attachments;
	id<EFCancelable> _loadingIndicatorCancelable;
	MFMessageContentLoadingView* _loadingView;
	double _initialScale;
	MFWebViewLoadingController* _webViewLoadingController;
	NSDictionary* _attachmentDragPreviews;
	NSError* _contentRepresentationError;
	id<EFCancelable> _loadingSpinnerTailspinToken;
	id<EFScheduler> _trustConfigurationScheduler;
	CGPoint _initialContentOffset;

}

@property (nonatomic,retain) MFAddressAtomStatusManager * atomManager;                                   //@synthesize atomManager=_atomManager - In the implementation block
@property (copy) NSArray * attachments;                                                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSString * selectedHTML;                                                      //@synthesize selectedHTML=_selectedHTML - In the implementation block
@property (nonatomic,retain) id<EFCancelable> loadingIndicatorCancelable;                                //@synthesize loadingIndicatorCancelable=_loadingIndicatorCancelable - In the implementation block
@property (nonatomic,retain) MFMessageContentLoadingView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,getter=isLoadingIndicatorVisible,nonatomic) BOOL loadingIndicatorVisible; 
@property (assign,nonatomic) double initialScale;                                                        //@synthesize initialScale=_initialScale - In the implementation block
@property (assign,nonatomic) BOOL hasVisibleContent;                                                     //@synthesize hasVisibleContent=_hasVisibleContent - In the implementation block
@property (nonatomic,retain) MFWebViewLoadingController * webViewLoadingController;                      //@synthesize webViewLoadingController=_webViewLoadingController - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) MFWebViewDictionary * webViewConstants; 
@property (nonatomic,retain) NSDictionary * attachmentDragPreviews;                                      //@synthesize attachmentDragPreviews=_attachmentDragPreviews - In the implementation block
@property (assign,nonatomic) unsigned long long blockedContentTypes;                                     //@synthesize blockedContentTypes=_blockedContentTypes - In the implementation block
@property (assign,nonatomic) BOOL allowLoadOfBlockedMessageContent;                                      //@synthesize allowLoadOfBlockedMessageContent=_allowLoadOfBlockedMessageContent - In the implementation block
@property (readonly) EMContentRepresentation * contentRepresentation; 
@property (nonatomic,retain) NSError * contentRepresentationError;                                       //@synthesize contentRepresentationError=_contentRepresentationError - In the implementation block
@property (assign,nonatomic) BOOL showingError;                                                          //@synthesize showingError=_showingError - In the implementation block
@property (nonatomic,retain) id<EFCancelable> loadingSpinnerTailspinToken;                               //@synthesize loadingSpinnerTailspinToken=_loadingSpinnerTailspinToken - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideStickyFooterView; 
@property (nonatomic,readonly) id<EFScheduler> trustConfigurationScheduler;                              //@synthesize trustConfigurationScheduler=_trustConfigurationScheduler - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageContentViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageContentViewDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MessageContentRepresentationRequest * contentRequest;                       //@synthesize contentRequest=_contentRequest - In the implementation block
@property (nonatomic,retain) MFMessageLoadingContext * loadingContext;                                   //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,readonly) BOOL sourceIsManaged; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) CGPoint initialContentOffset;                                               //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (nonatomic,readonly) MFMessageHeaderView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * headerViewSubjectBlock;                                            //@synthesize headerViewSubjectBlock=_headerViewSubjectBlock - In the implementation block
@property (nonatomic,readonly) MFConversationItemFooterView * footerView; 
@property (assign,nonatomic) BOOL automaticallyCollapseQuotedContent;                                    //@synthesize automaticallyCollapseQuotedContent=_automaticallyCollapseQuotedContent - In the implementation block
@property (assign,nonatomic) BOOL showMessageFooter;                                                     //@synthesize showMessageFooter=_showMessageFooter - In the implementation block
@property (assign,nonatomic) BOOL shouldArchiveByDefault;                                                //@synthesize shouldArchiveByDefault=_shouldArchiveByDefault - In the implementation block
@property (nonatomic,readonly) BOOL mayShareToUnmanaged; 
@property (assign,nonatomic) long long messageBlockingReason;                                            //@synthesize messageBlockingReason=_messageBlockingReason - In the implementation block
@property (nonatomic,retain) UIView * previousContentSnapshot;                                           //@synthesize previousContentSnapshot=_previousContentSnapshot - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                                   //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (readonly) NSArray * contentItems; 
@property (assign,nonatomic) BOOL initiallyZoomsToShowAllContent;                                        //@synthesize initiallyZoomsToShowAllContent=_initiallyZoomsToShowAllContent - In the implementation block
@property (assign,nonatomic) BOOL suppressScrolling;                                                     //@synthesize suppressScrolling=_suppressScrolling - In the implementation block
@property (assign,nonatomic) BOOL contentPaddingFollowsLayoutMargins;                                    //@synthesize contentPaddingFollowsLayoutMargins=_contentPaddingFollowsLayoutMargins - In the implementation block
@property (assign,nonatomic) BOOL showsBanners;                                                          //@synthesize showsBanners=_showsBanners - In the implementation block
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled;                                      //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (readonly) EMContentRepresentation * contentRepresentationIfAvailable; 
@property (nonatomic,retain) MFMailboxProvider * mailboxProvider;                                        //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (nonatomic,retain) EMDaemonInterface * daemonInterface;                                        //@synthesize daemonInterface=_daemonInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)signpostLog;
-(WKWebView *)webView;
-(BOOL)isZoomEnabled;
-(MFConversationItemFooterView *)footerView;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(NSArray *)contentItems;
-(void)layoutMarginsDidChange;
-(void)setAttachments:(NSArray *)arg1 ;
-(BOOL)sourceIsManaged;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)_layoutLoadingView;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)attachments;
-(unsigned long long)signpostID;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)setInitialScale:(double)arg1 ;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(id<MFMessageContentViewDelegate>)delegate;
-(void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)setMailboxProvider:(MFMailboxProvider *)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1 ;
-(id<MFMessageContentViewDataSource>)dataSource;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(void)prepareForReuse;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id)_dataDetectionContextForWebView:(id)arg1 ;
-(CGPoint)initialContentOffset;
-(id)_libraryMessage;
-(void)setDelegate:(id<MFMessageContentViewDelegate>)arg1 ;
-(id)presentedControllerDoneButtonItem;
-(void)setDataSource:(id<MFMessageContentViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setShouldArchiveByDefault:(BOOL)arg1 ;
-(void)reload;
-(MFMessageContentLoadingView *)loadingView;
-(void)setLoadingView:(MFMessageContentLoadingView *)arg1 ;
-(long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2 ;
-(id)_webView:(id)arg1 adjustedDataInteractionItemProvidersForItemProvider:(id)arg2 representingObjects:(id)arg3 additionalData:(id)arg4 ;
-(void)mf_setAsSourceForPopoverPresentationController:(id)arg1 ;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_webView:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(id)_webView:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)_webView:(id)arg1 willUpdateDropProposalToProposal:(id)arg2 forSession:(id)arg3 ;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2 ;
-(void)_commonInit;
-(BOOL)hasVisibleContent;
-(MFMessageHeaderView *)headerView;
-(BOOL)shouldArchiveByDefault;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(id)viewPrintFormatter;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(id)_bodyFont;
-(double)initialScale;
-(MFMailboxProvider *)mailboxProvider;
-(void)setCachedMetadata:(id)arg1 forKey:(id)arg2 ;
-(id)cachedMetadataOfClass:(Class)arg1 forKey:(id)arg2 ;
-(UIScrollView *)scrollView;
-(MFMessageLoadingContext *)loadingContext;
-(void)setLoadingContext:(MFMessageLoadingContext *)arg1 ;
-(BOOL)isLoadingIndicatorVisible;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 ;
-(void)dismissPresentedViewController:(id)arg1 ;
-(EMContentRepresentation *)contentRepresentation;
-(void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3 ;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(BOOL)showingError;
-(void)setShowingError:(BOOL)arg1 ;
-(void)_darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)_addScriptHandlerForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(MFAddressAtomStatusManager *)atomManager;
-(void)setAtomManager:(MFAddressAtomStatusManager *)arg1 ;
-(void)didTapBlockedSenderBannerView:(id)arg1 ;
-(void)didDismissBlockedSenderBannerView:(id)arg1 ;
-(BOOL)shouldHideStickyFooterView;
-(void)footerViewDidChangeHeight:(id)arg1 ;
-(void)didTapHasMoreContentBannerView:(id)arg1 ;
-(void)loadBlockedContentBannerDidTriggerLoad:(id)arg1 ;
-(void)setBlockedContentTypes:(unsigned long long)arg1 ;
-(unsigned long long)blockedContentTypes;
-(void)mailDropBannerDidTriggerDownload:(id)arg1 ;
-(void)_stopObservingContentHeight;
-(void)setContentPaddingFollowsLayoutMargins:(BOOL)arg1 ;
-(void)setAllowLoadOfBlockedMessageContent:(BOOL)arg1 ;
-(void)_reloadUserStyleSheets;
-(void)_updateMinimumFontSize;
-(void)_handleAttachmentTapMessage:(id)arg1 ;
-(void)_expandQuoteWithCollapsedBlockquoteOffset:(double)arg1 expandedOffset:(double)arg2 ;
-(void)setCachedMetadataBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_foundImageCIDAttachments:(id)arg1 ;
-(void)setSelectedHTML:(NSString *)arg1 ;
-(NSString *)selectedHTML;
-(void)webProcessDidFailLoadingResourceWithURL:(id)arg1 ;
-(void)setMessageBlockingReason:(long long)arg1 ;
-(void)setInitiallyZoomsToShowAllContent:(BOOL)arg1 ;
-(void)setShowsBanners:(BOOL)arg1 ;
-(void)_fontSizeDidChange:(id)arg1 ;
-(void)_addLoadingSubview:(id)arg1 ;
-(void)_setupWebProcessLocalizedStrings;
-(void)_observeBlockedSenderListChangedNotification;
-(MFWebViewLoadingController *)webViewLoadingController;
-(MFWebViewDictionary *)webViewConstants;
-(void)setHasVisibleContent:(BOOL)arg1 ;
-(void)_clearAllBannersAnimated:(BOOL)arg1 ;
-(id)_mailboxForBanner:(id)arg1 ;
-(BOOL)cachedMetadataBoolForKey:(id)arg1 ;
-(void)showDelayedProgressUI;
-(void)setLoadingSpinnerTailspinToken:(id<EFCancelable>)arg1 ;
-(id<EFCancelable>)loadingSpinnerTailspinToken;
-(void)setContentRepresentationError:(NSError *)arg1 ;
-(void)contentRequestDidReceiveContentRepresentation:(id)arg1 error:(id)arg2 ;
-(void)clearMessage;
-(MessageContentRepresentationRequest *)contentRequest;
-(BOOL)showMessageFooter;
-(void)_layoutFooterView;
-(BOOL)contentPaddingFollowsLayoutMargins;
-(void)_setNeedsPaddingConstantsUpdate;
-(BOOL)_firstResponderIsInWebView;
-(BOOL)automaticallyCollapseQuotedContent;
-(void)setAutomaticallyCollapseQuotedContent:(BOOL)arg1 reloadIfNeeded:(BOOL)arg2 ;
-(void)_revealActionsButtonTapped;
-(void)_seeMoreButtonTapped;
-(void)_updateWebViewPaddingConstants;
-(double)_viewportWidth;
-(id)_styleSheetWithPadding:(UIEdgeInsets)arg1 useWideLayout:(BOOL)arg2 ;
-(UIView *)previousContentSnapshot;
-(void)setPreviousContentSnapshot:(UIView *)arg1 ;
-(void)_clearLoadRemoteImagesBannerAnimated:(BOOL)arg1 ;
-(void)_clearHasMoreContentBannerAnimated:(BOOL)arg1 ;
-(void)_clearBlockedSenderBannerAnimated:(BOOL)arg1 ;
-(id<EFCancelable>)loadingIndicatorCancelable;
-(void)setLoadingIndicatorCancelable:(id<EFCancelable>)arg1 ;
-(void)_removeLoadingSubview:(id)arg1 ;
-(void)_requestWebViewLoadWithRepresentation:(id)arg1 ;
-(void)_addHasMoreContentBannerWithRemainingBytes:(unsigned long long)arg1 ;
-(void)_addBlockedSenderBannerIfNeeded;
-(void)_configureTrustEvaluationsForSignersInSecurityInformation:(id)arg1 ;
-(BOOL)allowLoadOfBlockedMessageContent;
-(void)_loadBlockedMessageContactWarningWithRepresentation:(id)arg1 ;
-(void)_loadBlockedMessageContactWarning;
-(void)_triggerWebViewLoadWithoutShowingContentRepresentation;
-(void)_updateFileWrapperForAttachment:(id)arg1 contentID:(id)arg2 ;
-(void)_displayDismissibleAttachmentErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(CGRect)_adjustedRectForAttachmentRect:(CGRect)arg1 ;
-(void)_beginObservingContentHeight;
-(void)_processDataDetectionMetricsFromResults:(id)arg1 ;
-(BOOL)showsBanners;
-(long long)messageBlockingReason;
-(id<EFScheduler>)trustConfigurationScheduler;
-(EMContentRepresentation *)contentRepresentationIfAvailable;
-(void)_notifyDelegateScrollViewSizeChanged:(CGSize)arg1 ;
-(BOOL)initiallyZoomsToShowAllContent;
-(void)_logRequestFinishWithSuccess:(BOOL)arg1 ;
-(void)clearSelectedHTML;
-(void)setAttachmentDragPreviews:(NSDictionary *)arg1 ;
-(NSDictionary *)attachmentDragPreviews;
-(id)_webView:(id)arg1 previewItem:(id)arg2 ;
-(id)_contentItemForElement:(id)arg1 ;
-(BOOL)mayShareToUnmanaged;
-(BOOL)_allAttachmentsArePhotosOrVideos;
-(void)_showModalViewController:(id)arg1 presentationSource:(id)arg2 forceNavigationController:(BOOL)arg3 ;
-(id)_contextMenuConfigurationForAttachment:(id)arg1 ;
-(double)_adjustWebViewInsetsToAccomodateHeaderAndFooter;
-(void)_alertMailDropDownloadIsTooLargeForCell:(BOOL)arg1 ;
-(void)_downloadAllMailDropAttachments;
-(void)loadBlockedContent;
-(void)_reloadWithPartiallyEncryptedMessageAllowed;
-(void)_reloadWithRemoteContentAllowed;
-(void)_reevaluateTrustWithNetworkAccessAllowed;
-(void)_triggerWebViewLoad;
-(void)_resetHeaderOffsetForZoom;
-(BOOL)suppressScrolling;
-(void)_adjustHeaderOffsetForZoom;
-(NSError *)contentRepresentationError;
-(void)_handleBlockSenderListChanged:(id)arg1 ;
-(void)headerViewDidChangeHeight:(id)arg1 ;
-(void)webProcessDidFinishDocumentLoadForURL:(id)arg1 ;
-(void)webProcessDidFinishLoadForURL:(id)arg1 ;
-(void)webProcessDidBlockLoadingResourceWithURL:(id)arg1 ;
-(void)webProcessDidCreateBrowserContextControllerLoadDelegate;
-(void)setContentRequest:(MessageContentRepresentationRequest *)arg1 ;
-(void)setAutomaticallyCollapseQuotedContent:(BOOL)arg1 ;
-(void)setShowMessageFooter:(BOOL)arg1 ;
-(void)updateForRedisplay;
-(void)_requestWebViewLoadWithLoadingContext:(id)arg1 ;
-(void)generateSnapshotImageWithCompletion:(/*^block*/id)arg1 ;
-(id)_quotedContentAttributionForMessage:(id)arg1 ;
-(BOOL)_objectContainsNonEmptyString:(id)arg1 ;
-(id)_attachmentPreviewsFromData:(id)arg1 ;
-(id)downloadFutureForContentItem:(id)arg1 ;
-(void)loadHasMoreContentBannerIfNecessary;
-(void)_showModalViewController:(id)arg1 presentationSource:(id)arg2 ;
-(void)setSuppressScrolling:(BOOL)arg1 ;
-(UIView *)headerViewSubjectBlock;
-(void)setHeaderViewSubjectBlock:(UIView *)arg1 ;
-(EMDaemonInterface *)daemonInterface;
-(void)setDaemonInterface:(EMDaemonInterface *)arg1 ;
-(void)setWebViewLoadingController:(MFWebViewLoadingController *)arg1 ;
@end
