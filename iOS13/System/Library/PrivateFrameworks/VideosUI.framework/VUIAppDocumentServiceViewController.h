/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVAppDocumentRequestController.h>
#import <libobjc.A.dylib/IKUpdateServiceRequestDelegate.h>
#import <libobjc.A.dylib/VUIAppDocumentUpdateEventMonitorObserving.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol VUIAppDocumentUpdateContext;
@class NSString, IKAppContext, NSMutableOrderedSet, VUIAppDocumentUpdateEventStore;

@interface VUIAppDocumentServiceViewController : _TVAppDocumentRequestController <IKUpdateServiceRequestDelegate, VUIAppDocumentUpdateEventMonitorObserving, UIPopoverPresentationControllerDelegate> {

	BOOL _deferDocumentUpdateEventProcessing;
	BOOL _markDocumentDirtyForRefreshUpdate;
	NSString* _viewControllerIdentifier;
	NSString* _viewControllerDocumentIdentifier;
	IKAppContext* _appContext;
	NSString* _documentRef;
	id<VUIAppDocumentUpdateContext> _documentUpdateContext;
	NSMutableOrderedSet* _documentUpdateViewElements;
	VUIAppDocumentUpdateEventStore* _deferredDocumentUpdateEventStore;
	unsigned long long _viewWillAppearReason;

}

@property (assign,nonatomic,__weak) IKAppContext * appContext;                                                 //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,copy) NSString * documentRef;                                                             //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,retain) id<VUIAppDocumentUpdateContext> documentUpdateContext;                            //@synthesize documentUpdateContext=_documentUpdateContext - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * documentUpdateViewElements;                                 //@synthesize documentUpdateViewElements=_documentUpdateViewElements - In the implementation block
@property (nonatomic,retain) VUIAppDocumentUpdateEventStore * deferredDocumentUpdateEventStore;                //@synthesize deferredDocumentUpdateEventStore=_deferredDocumentUpdateEventStore - In the implementation block
@property (assign,nonatomic) BOOL deferDocumentUpdateEventProcessing;                                          //@synthesize deferDocumentUpdateEventProcessing=_deferDocumentUpdateEventProcessing - In the implementation block
@property (assign,nonatomic) unsigned long long viewWillAppearReason;                                          //@synthesize viewWillAppearReason=_viewWillAppearReason - In the implementation block
@property (assign,getter=isDocumentMarkedDirty,nonatomic) BOOL markDocumentDirtyForRefreshUpdate;              //@synthesize markDocumentDirtyForRefreshUpdate=_markDocumentDirtyForRefreshUpdate - In the implementation block
@property (nonatomic,retain) NSString * viewControllerIdentifier;                                              //@synthesize viewControllerIdentifier=_viewControllerIdentifier - In the implementation block
@property (nonatomic,retain) NSString * viewControllerDocumentIdentifier;                                      //@synthesize viewControllerDocumentIdentifier=_viewControllerDocumentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_findCollectionListChildElementsInViewElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(NSString *)documentRef;
-(id)_receivedEvents;
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 ;
-(void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)updateServiceRequest:(id)arg1 documentDidChange:(id)arg2 ;
-(id)initWithDocumentServiceRequest:(id)arg1 ;
-(id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 ;
-(void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
-(id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3 ;
-(NSString *)viewControllerIdentifier;
-(id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5 ;
-(void)vui_handleEvent:(id)arg1 forElement:(id)arg2 sourceView:(id)arg3 ;
-(void)appDocumentDidReceiveEvent:(id)arg1 ;
-(void)appDocumentHasBecomeActive;
-(void)setDocumentRef:(NSString *)arg1 ;
-(BOOL)isEqualToAppDocumentServiceViewController:(id)arg1 ;
-(void)_cancelDocumentUpdates;
-(void)_unregisterDocumentUpdateEventDescriptors;
-(void)_cancelDocumentUpdatesAndPreserveUpdateEvents;
-(void)_startDocumentUpdatesWithContext:(id)arg1 ;
-(void)setDeferDocumentUpdateEventProcessing:(BOOL)arg1 ;
-(void)_startDocumentUpdatesForDeferredEventsIfPossible;
-(BOOL)_hasRefreshEvents;
-(void)setMarkDocumentDirtyForRefreshUpdate:(BOOL)arg1 ;
-(void)setViewWillAppearReason:(unsigned long long)arg1 ;
-(BOOL)deferDocumentUpdateEventProcessing;
-(VUIAppDocumentUpdateEventStore *)deferredDocumentUpdateEventStore;
-(void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(long long)arg1 ;
-(id<VUIAppDocumentUpdateContext>)documentUpdateContext;
-(NSMutableOrderedSet *)documentUpdateViewElements;
-(void)_performNextDocumentUpdateIfNeeded;
-(void)_disableFastScrollIfNeeded;
-(void)_cancelDocumentUpdateWithRequest:(id)arg1 ;
-(void)setDocumentUpdateContext:(id<VUIAppDocumentUpdateContext>)arg1 ;
-(void)_startDocumentUpdateWithRequest:(id)arg1 ;
-(void)setDocumentUpdateViewElements:(NSMutableOrderedSet *)arg1 ;
-(BOOL)isDocumentMarkedDirty;
-(void)_removeEventTypes:(id)arg1 receivedEvents:(id)arg2 ;
-(NSString *)viewControllerDocumentIdentifier;
-(void)updateDocumentWithContextDictionary:(id)arg1 element:(id)arg2 ;
-(void)viewWillAppearAfterTabSwitch;
-(void)setViewControllerIdentifier:(NSString *)arg1 ;
-(void)setViewControllerDocumentIdentifier:(NSString *)arg1 ;
-(void)setDeferredDocumentUpdateEventStore:(VUIAppDocumentUpdateEventStore *)arg1 ;
-(unsigned long long)viewWillAppearReason;
@end

