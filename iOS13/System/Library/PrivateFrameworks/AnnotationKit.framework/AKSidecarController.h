/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@protocol OS_dispatch_source, AKSidecarControllerDelegate;
@class PKStroke, AKInkOverlayView, NSObject, NSMutableSet, AKAnnotation, AKController;

@interface AKSidecarController : NSObject {

	PKStroke* _currentStroke;
	AKInkOverlayView* _currentStrokeOverlay;
	NSObject*<OS_dispatch_source> _strokeTimer;
	BOOL _updatingModel;
	BOOL _ignoreKVOChanges;
	BOOL _handlingUndoRedo;
	BOOL _sendingCheckpoint;
	BOOL _needCheckpointSent;
	NSMutableSet* _coalescingAnnotationKeys;
	AKAnnotation* _coalescingAnnotationChange;
	NSObject*<OS_dispatch_source> _coalescingAnnotationSource;
	BOOL _shouldObserveEdits;
	id<AKSidecarControllerDelegate> _delegate;
	AKController* _controller;
	NSMutableSet* _observedPageModelControllers;
	NSMutableSet* _observedAnnotations;

}

@property (__weak) AKController * controller;                                              //@synthesize controller=_controller - In the implementation block
@property (retain) NSMutableSet * observedPageModelControllers;                            //@synthesize observedPageModelControllers=_observedPageModelControllers - In the implementation block
@property (retain) NSMutableSet * observedAnnotations;                                     //@synthesize observedAnnotations=_observedAnnotations - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveEdits;                                      //@synthesize shouldObserveEdits=_shouldObserveEdits - In the implementation block
@property (assign,nonatomic,__weak) id<AKSidecarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)validateInitialMessage:(id)arg1 applicationData:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id<AKSidecarControllerDelegate>)delegate;
-(void)setDelegate:(id<AKSidecarControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)done;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(BOOL)handleLiveStrokeBegan:(id)arg1 onInkOverlayView:(id)arg2 ;
-(void)handleLiveStrokeComplete:(BOOL)arg1 ;
-(void)setObservedPageModelControllers:(NSMutableSet *)arg1 ;
-(void)setObservedAnnotations:(NSMutableSet *)arg1 ;
-(void)observePageControllerRequestsDisableRegistration:(id)arg1 ;
-(void)observePageControllerRequestsEnableRegistration:(id)arg1 ;
-(NSMutableSet *)observedAnnotations;
-(NSMutableSet *)observedPageModelControllers;
-(void)_startObservingAnnotations:(id)arg1 ;
-(void)_stopObservingAnnotations:(id)arg1 ;
-(void)startObservingPageModelController:(id)arg1 ;
-(void)stopObservingPageModelController:(id)arg1 ;
-(BOOL)shouldObserveEdits;
-(void)setShouldObserveEdits:(BOOL)arg1 ;
-(void)_handleUndo:(id)arg1 ;
-(void)_handleRedo:(id)arg1 ;
-(void)_handleUndoCheckpoint:(id)arg1 ;
-(void)_actuallySendAnnotationChange;
-(void)_unregisterObservers;
-(void)_registerObservers;
-(unsigned long long)_indexOfAnnotationUUID:(id)arg1 annotations:(id)arg2 ;
-(void)_handleInternalFailure;
-(void)_handleAnnotationAdd:(id)arg1 ;
-(void)_handleAnnotationRemove:(id)arg1 ;
-(void)_handleAnnotationModify:(id)arg1 ;
-(void)_handleSelectionChanged:(id)arg1 ;
-(void)_startChangeUndoGroup;
-(id)_inkAnnotationFromPageModelController:(id)arg1 ;
-(BOOL)_removeAnnotationUUID:(id)arg1 fromPageModelController:(id)arg2 ;
-(id)_annotationWithUUID:(id)arg1 inPageModelController:(id)arg2 ;
-(void)_sendDictionary:(id)arg1 ;
-(void)_handleLiveStrokeUpdate;
-(void)_annotation:(id)arg1 modifiedInPageController:(unsigned long long)arg2 properties:(id)arg3 ;
-(void)_coalesceAnnotationChange:(id)arg1 keyChange:(id)arg2 ;
-(void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(BOOL)arg3 ;
-(void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(BOOL)arg3 ;
-(void)_selectionChangedOnPageController:(id)arg1 ;
-(void)_annotation:(id)arg1 addedToPageController:(unsigned long long)arg2 selected:(BOOL)arg3 atIndex:(unsigned long long)arg4 ;
-(void)_annotation:(id)arg1 removedFromPageController:(unsigned long long)arg2 ;
-(BOOL)_replaceAnnotation:(id)arg1 inPageModelController:(id)arg2 ;
-(void)handleIncomingOPACKObject:(id)arg1 ;
@end

