/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) unsigned sessionIdentifier;                                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long withinAppSourceOperationMask;               //@synthesize withinAppSourceOperationMask=_withinAppSourceOperationMask - In the implementation block
@property (nonatomic,readonly) unsigned long long outsideAppSourceOperationMask;              //@synthesize outsideAppSourceOperationMask=_outsideAppSourceOperationMask - In the implementation block
@property (nonatomic,readonly) BOOL prefersFullSizePreview; 
@property (nonatomic,readonly) BOOL shouldCancelOnAppDeactivation; 
@property (nonatomic,readonly) BOOL canAddItems; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL didHandOffDragImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
-(id<_UIDraggingSessionDelegate>)delegate;
-(void)setDelegate:(id<_UIDraggingSessionDelegate>)arg1 ;
-(BOOL)isActive;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(long long)dataOwner;
-(BOOL)shouldCancelOnAppDeactivation;
-(CGPoint)centroid;
-(BOOL)prefersFullSizePreview;
-(BOOL)canAddItems;
-(void)addPublicItems:(id)arg1 ;
-(void)cancelDrag;
-(CGPoint)draggingLocationInCoordinateSpace:(id)arg1 ;
-(unsigned long long)withinAppSourceOperationMask;
-(unsigned long long)outsideAppSourceOperationMask;
-(NSArray *)internalItems;
-(unsigned long long)draggingSourceOperationMask;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)_hostWillBecomeActive;
-(void)_hostDidDeactivate;
-(void)_sendWillBegin;
-(void)_getOperationMaskFromDelegate;
-(unsigned long long)resultOperation;
-(void)_sendWillEndWithOperation:(unsigned long long)arg1 ;
-(void)_sendDidEndWithOperation:(unsigned long long)arg1 ;
-(void)itemsBecameDirty:(id)arg1 ;
-(UIWindow *)centroidWindow;
-(_UIDruidSourceConnection *)druidConnection;
-(void)setDruidConnection:(_UIDruidSourceConnection *)arg1 ;
-(void)_didBeginDrag;
-(void)_sendHandedOffDragImage;
-(void)_sendHandedOffDragImageForItem:(id)arg1 ;
-(void)_handOffCancelledItems:(id)arg1 ;
-(void)setResultOperation:(unsigned long long)arg1 ;
-(void)_sendDataTransferFinished;
-(UIDragEvent *)dragEvent;
-(void)_sendDidMove;
-(void)dragDidExitApp;
-(void)setInternalItems:(NSArray *)arg1 ;
-(void)_sendWillAddItems:(id)arg1 ;
-(id)touchRoutingPolicy;
-(BOOL)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned)arg1 ;
-(id)initWithDragManager:(id)arg1 configuration:(id)arg2 ;
-(BOOL)preventsSimultaneousDragFromView:(id)arg1 ;
-(BOOL)dynamicallyUpdatesPrefersFullSizePreviews;
-(void)beginDrag:(/*^block*/id)arg1 ;
-(void)updateCentroidFromDragEvent;
-(void)dragIsInsideApp;
-(BOOL)didHandOffDragImage;
-(void)setDragEvent:(UIDragEvent *)arg1 ;
-(void)setDataOwner:(long long)arg1 ;
-(unsigned)sessionIdentifier;
@end

