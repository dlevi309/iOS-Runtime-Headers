/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/PSPointerClientControllerDelegate.h>
#import <UIKitCore/_UILumaTrackingBackdropViewDelegate.h>
#import <UIKitCore/_UICursorArbiterCore.h>

@class NSMutableArray, UIPointerStyle, UIPointerRegion, PSPointerHoverRegion, NSMapTable, PSPointerClientController, PSPointerPortalSourceCollection, _UIPortalView, _UILumaTrackingBackdropView, NSString;

@interface _UICursorArbiterCore_iOS : NSObject <PSPointerClientControllerDelegate, _UILumaTrackingBackdropViewDelegate, _UICursorArbiterCore> {

	BOOL _hasRunningTransaction;
	NSMutableArray* _pendingTransactionBlocks;
	UIPointerStyle* _activePointerStyle;
	UIPointerRegion* _activePointerRegion;
	PSPointerHoverRegion* _lastSentHoverRegion;
	unsigned long long _lastMaterialLuminance;
	NSMapTable* _cursorRegionToMatchMoveSourceMap;
	PSPointerClientController* _pointerClientController;
	PSPointerPortalSourceCollection* _pointerPortalSourceCollection;
	_UIPortalView* _cursorPortalView;
	_UIPortalView* _overlayEffectPortalView;
	_UILumaTrackingBackdropView* _samplingBackdropView;
	unsigned long long _transactionRevisionID;
	UIPointerRegion* _scrollingRegion;

}

@property (assign,nonatomic) BOOL hasRunningTransaction;                                                 //@synthesize hasRunningTransaction=_hasRunningTransaction - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTransactionBlocks;                                  //@synthesize pendingTransactionBlocks=_pendingTransactionBlocks - In the implementation block
@property (nonatomic,retain) UIPointerStyle * activePointerStyle;                                        //@synthesize activePointerStyle=_activePointerStyle - In the implementation block
@property (nonatomic,retain) UIPointerRegion * activePointerRegion;                                      //@synthesize activePointerRegion=_activePointerRegion - In the implementation block
@property (nonatomic,retain) PSPointerHoverRegion * lastSentHoverRegion;                                 //@synthesize lastSentHoverRegion=_lastSentHoverRegion - In the implementation block
@property (assign,nonatomic) unsigned long long lastMaterialLuminance;                                   //@synthesize lastMaterialLuminance=_lastMaterialLuminance - In the implementation block
@property (nonatomic,copy) NSMapTable * cursorRegionToMatchMoveSourceMap;                                //@synthesize cursorRegionToMatchMoveSourceMap=_cursorRegionToMatchMoveSourceMap - In the implementation block
@property (nonatomic,retain) PSPointerClientController * pointerClientController;                        //@synthesize pointerClientController=_pointerClientController - In the implementation block
@property (nonatomic,copy) PSPointerPortalSourceCollection * pointerPortalSourceCollection;              //@synthesize pointerPortalSourceCollection=_pointerPortalSourceCollection - In the implementation block
@property (nonatomic,retain) _UIPortalView * cursorPortalView;                                           //@synthesize cursorPortalView=_cursorPortalView - In the implementation block
@property (nonatomic,retain) _UIPortalView * overlayEffectPortalView;                                    //@synthesize overlayEffectPortalView=_overlayEffectPortalView - In the implementation block
@property (nonatomic,retain) _UILumaTrackingBackdropView * samplingBackdropView;                         //@synthesize samplingBackdropView=_samplingBackdropView - In the implementation block
@property (assign,nonatomic) unsigned long long transactionRevisionID;                                   //@synthesize transactionRevisionID=_transactionRevisionID - In the implementation block
@property (nonatomic,retain) UIPointerRegion * scrollingRegion;                                          //@synthesize scrollingRegion=_scrollingRegion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long pointerState; 
-(id)init;
-(long long)pointerState;
-(id)_hoverRegionWithStyle:(id)arg1 forRegion:(id)arg2 ;
-(unsigned long long)transactionRevisionID;
-(void)setTransactionRevisionID:(unsigned long long)arg1 ;
-(void)setPointerPortalSourceCollection:(PSPointerPortalSourceCollection *)arg1 ;
-(void)setActivePointerStyle:(UIPointerStyle *)arg1 ;
-(void)setActivePointerRegion:(UIPointerRegion *)arg1 ;
-(void)setLastSentHoverRegion:(PSPointerHoverRegion *)arg1 ;
-(PSPointerClientController *)pointerClientController;
-(_UIPortalView *)cursorPortalView;
-(_UIPortalView *)overlayEffectPortalView;
-(_UILumaTrackingBackdropView *)samplingBackdropView;
-(NSMapTable *)cursorRegionToMatchMoveSourceMap;
-(void)_prepareContentMatchMoveSourceForCursorRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preparePointerPortalSourceCollectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTransactionUsingBlock:(/*^block*/id)arg1 ;
-(UIPointerRegion *)activePointerRegion;
-(UIPointerRegion *)scrollingRegion;
-(PSPointerHoverRegion *)lastSentHoverRegion;
-(UIPointerStyle *)activePointerStyle;
-(void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setScrollingRegion:(UIPointerRegion *)arg1 ;
-(void)resetStyleForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCursorRegionToMatchMoveSourceMap:(NSMapTable *)arg1 ;
-(void)setCursorPortalView:(_UIPortalView *)arg1 ;
-(void)setOverlayEffectPortalView:(_UIPortalView *)arg1 ;
-(void)setSamplingBackdropView:(_UILumaTrackingBackdropView *)arg1 ;
-(void)_getPointerRegion:(inout id*)arg1 andStyle:(inout id*)arg2 atLocation:(CGPoint)arg3 inWindow:(id)arg4 ;
-(id)_coordinateSpaceSourceViewForRegion:(id)arg1 withStyle:(id)arg2 ;
-(BOOL)hasRunningTransaction;
-(NSMutableArray *)pendingTransactionBlocks;
-(void)setHasRunningTransaction:(BOOL)arg1 ;
-(void)_performNextTransaction;
-(void)setPendingTransactionBlocks:(NSMutableArray *)arg1 ;
-(PSPointerPortalSourceCollection *)pointerPortalSourceCollection;
-(id)_pointerShapeForStyle:(id)arg1 ;
-(unsigned long long)lastMaterialLuminance;
-(void)setLastMaterialLuminance:(unsigned long long)arg1 ;
-(void)pointerClientControllerDidInvalidateRemoteSources:(id)arg1 ;
-(void)pointerClientControllerClientInteractionStateDidChange:(id)arg1 ;
-(void)pointerClientControllerWillDecelerate:(id)arg1 targetPointerPosition:(inout CGPoint*)arg2 velocity:(CGPoint)arg3 inContextID:(unsigned)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7 ;
-(void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2 ;
-(void)requestAutohide;
-(void)beginScrollingWithRegion:(id)arg1 ;
-(void)endScrollingWithRegion:(id)arg1 ;
-(void)setPointerClientController:(PSPointerClientController *)arg1 ;
@end

