/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDraggingImageSlotOwner.h>
#import <UIKitCore/_UIDraggingInfo.h>

@protocol _UIDraggingSessionDelegate;
@class PBItemCollection, UIDraggingSystemTouchRoutingPolicy, _UIDragSetDownAnimation, NSTimer, UIDraggingBeginningSessionConfiguration, UIDragEvent, UIView, NSArray, UIWindow, _UIDruidSourceConnection, NSString;

@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner <_UIDraggingInfo> {

	CGPoint _lastNotifiedCentroid;
	BOOL _didHandOffDragImage;
	PBItemCollection* _pbItemCollection;
	UIDraggingSystemTouchRoutingPolicy* _touchRoutingPolicy;
	_UIDragSetDownAnimation* _setDownAnimation;
	long long _stateAfterSetDown;
	BOOL _sentWillEnd;
	BOOL _hostIsActive;
	BOOL _originatedInHostedWindow;
	NSTimer* _waitingToSendDidExitAppTimer;
	UIDraggingBeginningSessionConfiguration* _configuration;
	unsigned _sessionIdentifier;
	id<_UIDraggingSessionDelegate> _delegate;
	UIDragEvent* _dragEvent;
	UIView* _sourceView;
	long long _state;
	unsigned long long _resultOperation;
	NSArray* _internalItems;
	long long _dataOwner;
	UIWindow* _centroidWindow;
	UIWindow* _weakCentroidWindow;
	unsigned long long _withinAppSourceOperationMask;
	unsigned long long _outsideAppSourceOperationMask;
	_UIDruidSourceConnection* _druidConnection;
	CGPoint _centroid;

}

@property (nonatomic,retain) _UIDruidSourceConnection * druidConnection;                      //@synthesize druidConnection=_druidConnection - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDraggingSessionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIDragEvent * dragEvent;                                  //@synthesize dragEvent=_dragEvent - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                      //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long resultOperation;                              //@synthesize resultOperation=_resultOperation - In the implementation block
@property (nonatomic,copy) NSArray * internalItems;                                           //@synthesize internalItems=_internalItems - In the implementation block
@property (assign,nonatomic) long long dataOwner;                                             //@synthesize dataOwner=_dataOwner - In the implementation block
@property (nonatomic,readonly) CGPoint centroid;                                              //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) UIWindow * centroidWindow;                                     //@synthesize centroidWindow=_centroidWindow - In the implementation block
@property (nonatomic,__weak,readonly) UIWindow * weakCentroidWindow;                          //@synthesize weakCentroidWindow=_weakCentroidWindow - In the implementation block
@property (nonatomic,readonly) unsigned sessionIdentifier;                                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long withinAppSourceOperationMask;               //@synthesize withinAppSourceOperationMask=_withinAppSourceOperationMask - In the implementation block
@property (nonatomic,readonly) unsigned long long outsideAppSourceOperationMask;              //@synthesize outsideAppSourceOperationMask=_outsideAppSourceOperationMask - In the implementation block
@property (nonatomic,readonly) BOOL prefersFullSizePreview; 
@property (nonatomic,readonly) BOOL shouldCancelOnAppDeactivation; 
@property (nonatomic,readonly) BOOL canAddItems; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL didHandOffDragImage; 
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)centroid;
-(void)_setupAnimationForCancelledItems:(id)arg1 returningContextID:(unsigned*)arg2 layerRenderID:(unsigned long long*)arg3 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id<_UIDraggingSessionDelegate>)delegate;
-(BOOL)isActive;
-(void)cancelDrag;
-(UIView *)sourceView;
-(unsigned)sessionIdentifier;
-(BOOL)shouldCancelOnAppDeactivation;
-(void)setDelegate:(id<_UIDraggingSessionDelegate>)arg1 ;
-(long long)dataOwner;
-(UIDragEvent *)dragEvent;
-(BOOL)prefersFullSizePreview;
-(BOOL)canAddItems;
-(void)addPublicItems:(id)arg1 ;
-(void)beginDrag:(/*^block*/id)arg1 ;
-(void)setState:(long long)arg1 ;
-(CGPoint)draggingLocationInCoordinateSpace:(id)arg1 ;
-(unsigned long long)withinAppSourceOperationMask;
-(unsigned long long)outsideAppSourceOperationMask;
-(long long)state;
-(unsigned long long)draggingSourceOperationMask;
-(void)_sendDidMove;
-(unsigned long long)resultOperation;
-(void)itemsBecameDirty:(id)arg1 ;
-(void)_sendWillBegin;
-(void)_hostDidDeactivate;
-(void)_endWithOperation:(unsigned long long)arg1 ;
-(void)_hostWillBecomeActive;
-(NSArray *)internalItems;
-(void)_getOperationMaskFromDelegate;
-(UIWindow *)weakCentroidWindow;
-(_UIDruidSourceConnection *)druidConnection;
-(void)setDruidConnection:(_UIDruidSourceConnection *)arg1 ;
-(void)setInternalItems:(NSArray *)arg1 ;
-(void)_didBeginDrag;
-(void)setDragEvent:(UIDragEvent *)arg1 ;
-(void)setDataOwner:(long long)arg1 ;
-(void)dragDidExitApp;
-(void)_sendHandedOffDragImage;
-(void)_sendHandedOffDragImageForItem:(id)arg1 ;
-(void)_sendWillAddItems:(id)arg1 ;
-(BOOL)_canHandOffCancelledItems:(id)arg1 ;
-(void)_handOffCancelledItems:(id)arg1 ;
-(void)setResultOperation:(unsigned long long)arg1 ;
-(void)_sendDataTransferFinished;
-(id)touchRoutingPolicy;
-(BOOL)_routingPolicyHasSpecificTouchContextIDs;
-(void)_sendWillEndWithOperation:(unsigned long long)arg1 ;
-(void)_sendDidEndWithOperation:(unsigned long long)arg1 ;
-(BOOL)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned)arg1 ;
-(id)initWithDragManager:(id)arg1 configuration:(id)arg2 ;
-(void)dragIsInsideApp;
-(BOOL)preventsSimultaneousDragFromView:(id)arg1 ;
-(BOOL)didHandOffDragImage;
-(BOOL)dynamicallyUpdatesPrefersFullSizePreviews;
-(void)updateCentroidFromDragEvent;
-(UIWindow *)centroidWindow;
@end

