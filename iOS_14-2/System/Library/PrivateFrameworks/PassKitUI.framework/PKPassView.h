/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKPassFaceViewDelegate.h>
#import <libobjc.A.dylib/PKPasscodeLockManagerObserver.h>

@protocol OS_dispatch_source, WLCardViewDelegate;
@class PKPassFrontFaceView, PKPassColorProfile, PKPassFaceViewRendererState, UITapGestureRecognizer, PKPasscodeLockManager, NSString, NSObject, NSMutableArray, PKPass;

@interface PKPassView : UIView <UIGestureRecognizerDelegate, PKPassFaceViewDelegate, PKPasscodeLockManagerObserver> {

	PKPassFrontFaceView* _frontFace;
	PKPassColorProfile* _colorProfile;
	PKPassFaceViewRendererState* _rendererState;
	UITapGestureRecognizer* _tapRecognizer;
	long long _priorContentMode;
	PKPasscodeLockManager* _passcodeLockManager;
	NSString* _suppressingIdentifier;
	BOOL _contentLoading;
	BOOL _contentLoaded;
	NSObject*<OS_dispatch_source> _contentModeUpdateTimer;
	NSMutableArray* _delayedAnimations;
	BOOL _invalidated;
	BOOL _modallyPresented;
	PKPass* _pass;
	id<WLCardViewDelegate> _delegate;
	long long _contentMode;
	unsigned long long _suppressedContent;
	double _modalShadowVisibility;

}

@property (nonatomic,retain,readonly) PKPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSString * uniqueID; 
@property (assign,nonatomic,__weak) id<WLCardViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long contentMode;                                        //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedContent;                         //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,getter=isModallyPresented,nonatomic) BOOL modallyPresented;              //@synthesize modallyPresented=_modallyPresented - In the implementation block
@property (assign,nonatomic) double modalShadowVisibility;                                 //@synthesize modalShadowVisibility=_modalShadowVisibility - In the implementation block
@property (nonatomic,readonly) BOOL frontFaceBodyContentCreated; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) PKPassFaceViewRendererState * rendererState; 
@property (nonatomic,readonly) BOOL isFrontFaceExpanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)contentMode;
-(NSString *)uniqueID;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(id<WLCardViewDelegate>)delegate;
-(id)item;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithPass:(id)arg1 content:(long long)arg2 ;
-(id)snapshotOfFrontFace;
-(void)tapRecognized:(id)arg1 ;
-(void)setDelegate:(id<WLCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPass *)pass;
-(id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)arg1 ;
-(id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3 rendererState:(id)arg4 ;
-(void)_updateFrontFaceSuppressedContent;
-(void)_applyContentMode:(BOOL)arg1 ;
-(CGSize)sizeOfFront;
-(CGRect)frameOfVisibleFace;
-(void)setModallyPresented:(BOOL)arg1 ;
-(void)setModalShadowVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)setModalShadowVisibility:(double)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(void)_updateLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)setContentMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setContentMode:(long long)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(void)invalidate;
-(void)_updateLowEndLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)_updateHighEndLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2 ;
-(long long)_frontFaceBackgroundModeForContentMode;
-(unsigned long long)_regionsForCurrentModes;
-(BOOL)_visibleFaceShouldClipForCurrentViewMode:(double*)arg1 ;
-(void)passFaceViewExpandButtonTapped:(id)arg1 ;
-(void)setPaymentBarcodeData:(id)arg1 ;
-(CGSize)sizeOfFrontFace;
-(void)drawFrontFaceAtSize:(CGSize)arg1 ;
-(BOOL)canShowBarcode;
-(BOOL)frontFaceBodyContentCreated;
-(void)setModalShadowVisibility:(double)arg1 ;
-(void)setFrontFaceExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isFrontFaceExpanded;
-(void)updateValidityDisplay;
-(unsigned long long)suppressedContent;
-(BOOL)isModallyPresented;
-(double)modalShadowVisibility;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithPass:(id)arg1 ;
-(void)didTransact;
-(id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3 ;
-(id)snapshotOfFrontFaceWithRequestedSize:(CGSize)arg1 ;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContentMode:(long long)arg1 ;
-(void)didAuthenticate;
-(BOOL)isPaused;
-(void)dealloc;
-(PKPassFaceViewRendererState *)rendererState;
@end

