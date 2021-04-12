/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol _UICursorInteractionDelegate;
@class UIView, UIPointerInteraction, _UICursorRequest, NSString;

@interface _UICursorInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction> {

	SCD_Struct_UI62 _delegateImplements;
	UIView* _view;
	id<_UICursorInteractionDelegate> _delegate;
	UIPointerInteraction* _underlyingPointerInteraction;
	_UICursorRequest* _pendingRequest;

}

@property (nonatomic,retain) UIPointerInteraction * underlyingPointerInteraction;                                                                                   //@synthesize underlyingPointerInteraction=_underlyingPointerInteraction - In the implementation block
@property (nonatomic,retain) _UICursorRequest * pendingRequest;                                                                                                     //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (assign,setter=_setPausesCursorUpdatesWhilePanning:,getter=_pausesCursorUpdatesWhilePanning,nonatomic) BOOL pausesCursorUpdatesWhilePanning; 
@property (nonatomic,__weak,readonly) id<_UICursorInteractionDelegate> delegate;                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                                                                                //@synthesize view=_view - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(id<_UICursorInteractionDelegate>)delegate;
-(BOOL)isEnabled;
-(id)initWithDelegate:(id)arg1 ;
-(UIView *)view;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)setUnderlyingPointerInteraction:(UIPointerInteraction *)arg1 ;
-(UIPointerInteraction *)underlyingPointerInteraction;
-(void)_queryDelegateRegionForRequest:(id)arg1 defaultRegion:(id)arg2 completion:(/*^block*/id)arg3 synchronously:(BOOL)arg4 ;
-(void)setPendingRequest:(_UICursorRequest *)arg1 ;
-(_UICursorRequest *)pendingRequest;
-(void)_setPausesCursorUpdatesWhilePanning:(BOOL)arg1 ;
-(BOOL)_pausesCursorUpdatesWhilePanning;
-(void)_pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_pointerInteraction:(id)arg1 targetRegionForDeceleratingPointerWithRequests:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

