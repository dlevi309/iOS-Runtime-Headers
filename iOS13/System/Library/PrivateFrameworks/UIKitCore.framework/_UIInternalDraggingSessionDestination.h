/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDraggingImageSlotOwner.h>
#import <UIKitCore/_UIDataTransferMonitorDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>
#import <UIKitCore/_UIDraggingInfo.h>

@protocol _UIDruidDestinationConnection;
@class _UIInternalDraggingSessionSource, NSMutableSet, UIView, UIWindowScene, _UIDragSetDownAnimation, PBItemCollection, _UIDataTransferMonitor, _UIApplicationModalProgressController, _DUIPotentialDrop, NSPointerArray, _UIDropSessionImpl, UIWindow, NSArray, NSProgress, UIDragEvent, NSString;

@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <_UIDataTransferMonitorDelegate, NSProgressReporting, _UIDraggingInfo> {

	unsigned _sessionIdentifier;
	unsigned _touchRoutingPolicyContextID;
	_UIInternalDraggingSessionSource* _sessionSource;
	BOOL _connectedToDruid;
	BOOL _isPolicyDriven;
	BOOL _dragInteractionDidEnd;
	NSMutableSet* _enteredDestinations;
	UIView* _dropDestinationView;
	UIWindowScene* _dropDestinationWindowScene;
	/*^block*/id _dropPerformBlock;
	/*^block*/id _dropCompletionBlock;
	/*^block*/id _postDropAnimationCompletionBlock;
	_UIDragSetDownAnimation* _setDownAnimation;
	PBItemCollection* _droppedItemCollection;
	_UIDataTransferMonitor* _dataTransferMonitor;
	_UIApplicationModalProgressController* _modalProgressAlertController;
	BOOL _dropWasPerformed;
	_DUIPotentialDrop* _lastPotentialDrop;
	NSPointerArray* _dragEvents;
	BOOL _isAccessibilitySession;
	BOOL _drivenByPointer;
	_UIDropSessionImpl* _dropSession;
	UIWindow* _centroidWindow;
	NSArray* _dropItemProviders;
	long long _sourceDataOwner;
	NSArray* _internalItems;
	unsigned long long _outsideAppSourceOperationMask;
	unsigned long long _progressIndicatorStyle;
	id<_UIDruidDestinationConnection> _druidConnection;
	NSProgress* _progress;
	CGPoint _centroid;

}

@property (nonatomic,retain) id<_UIDruidDestinationConnection> druidConnection;                    //@synthesize druidConnection=_druidConnection - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSArray * dragEvents; 
@property (nonatomic,readonly) unsigned sessionIdentifier;                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) UIDragEvent * activeDragEvent; 
@property (nonatomic,readonly) _UIInternalDraggingSessionSource * inAppSessionSource; 
@property (nonatomic,readonly) _UIDropSessionImpl * dropSession;                                   //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) CGPoint centroid;                                                   //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) UIWindow * centroidWindow;                                          //@synthesize centroidWindow=_centroidWindow - In the implementation block
@property (nonatomic,readonly) BOOL shouldDragEventBeSentToGestureRecognizers; 
@property (nonatomic,readonly) BOOL didRequestDropToBePerformed; 
@property (nonatomic,readonly) NSArray * preDropItemProviders; 
@property (nonatomic,readonly) NSArray * dropItemProviders;                                        //@synthesize dropItemProviders=_dropItemProviders - In the implementation block
@property (nonatomic,readonly) long long sourceDataOwner;                                          //@synthesize sourceDataOwner=_sourceDataOwner - In the implementation block
@property (nonatomic,copy) NSArray * internalItems;                                                //@synthesize internalItems=_internalItems - In the implementation block
@property (nonatomic,readonly) unsigned long long outsideAppSourceOperationMask;                   //@synthesize outsideAppSourceOperationMask=_outsideAppSourceOperationMask - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceOperationMask; 
@property (nonatomic,readonly) BOOL isAccessibilitySession;                                        //@synthesize isAccessibilitySession=_isAccessibilitySession - In the implementation block
@property (nonatomic,readonly) BOOL drivenByPointer;                                               //@synthesize drivenByPointer=_drivenByPointer - In the implementation block
@property (assign,nonatomic) unsigned long long progressIndicatorStyle;                            //@synthesize progressIndicatorStyle=_progressIndicatorStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)connect;
-(void)setProgress:(NSProgress *)arg1 ;
-(_UIDropSessionImpl *)dropSession;
-(CGPoint)centroid;
-(unsigned long long)sourceOperationMask;
-(NSArray *)dropItemProviders;
-(void)requestDropOnView:(id)arg1 withOperation:(unsigned long long)arg2 perform:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)preDropItemProviders;
-(unsigned long long)actualDragOperationForProposedDragOperation:(unsigned long long)arg1 destinationDataOwner:(long long)arg2 forbidden:(BOOL*)arg3 ;
-(void)takePotentialDrop:(id)arg1 ;
-(void)enteredDestination:(id)arg1 ;
-(_UIInternalDraggingSessionSource *)inAppSessionSource;
-(CGPoint)draggingLocationInCoordinateSpace:(id)arg1 ;
-(unsigned long long)outsideAppSourceOperationMask;
-(void)setProgressIndicatorStyle:(unsigned long long)arg1 ;
-(NSArray *)internalItems;
-(void)requestVisibleItems:(/*^block*/id)arg1 ;
-(BOOL)drivenByPointer;
-(unsigned long long)draggingSourceOperationMask;
-(long long)sourceDataOwner;
-(unsigned long long)progressIndicatorStyle;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)sawDragEndEvent;
-(void)itemsBecameDirty:(id)arg1 ;
-(UIWindow *)centroidWindow;
-(id<_UIDruidDestinationConnection>)druidConnection;
-(void)setDruidConnection:(id<_UIDruidDestinationConnection>)arg1 ;
-(void)dragDidExitApp;
-(void)setInternalItems:(NSArray *)arg1 ;
-(void)updateCentroidFromDragEvent;
-(unsigned)sessionIdentifier;
-(void)addDragEvent:(id)arg1 ;
-(NSArray *)dragEvents;
-(void)takeVisibleDroppedItems:(id)arg1 ;
-(void)setUpDropAnimation:(id)arg1 ;
-(void)handOffDroppedItems:(id)arg1 ;
-(void)_sessionDidEndNormally:(BOOL)arg1 ;
-(UIDragEvent *)activeDragEvent;
-(void)_removeFromDragManager;
-(void)dataTransferMonitorBeganTransfers:(id)arg1 ;
-(void)dataTransferMonitorFinishedTransfers:(id)arg1 ;
-(id)initWithDragManager:(id)arg1 dragEvent:(id)arg2 ;
-(BOOL)canBeDrivenByDragEvent:(id)arg1 ;
-(BOOL)shouldDragEventBeSentToGestureRecognizers;
-(BOOL)didRequestDropToBePerformed;
-(void)dragInteractionEnding;
-(BOOL)isAccessibilitySession;
@end

