/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKPasscodeLockManagerObserver.h>

@protocol WLCardViewDelegate;
@class PKPassFrontFaceView, PKPassColorProfile, PKPassFaceViewRendererState, UITapGestureRecognizer, PKPasscodeLockManager, NSString, NSMutableArray, PKPass;

@interface PKPassView : UIView <UIGestureRecognizerDelegate, PKPasscodeLockManagerObserver> {

	PKPassFrontFaceView* _frontFace;
	PKPassColorProfile* _colorProfile;
	PKPassFaceViewRendererState* _rendererState;
	UITapGestureRecognizer* _tapRecognizer;
	long long _priorContentMode;
	PKPasscodeLockManager* _passcodeLockManager;
	unsigned long long _contentModeToken;
	NSString* _suppressingIdentifier;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<WLCardViewDelegate>)delegate;
-(void)setDelegate:(id<WLCardViewDelegate>)arg1 ;
-(id)item;
-(NSString *)uniqueID;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)contentMode;
-(id)snapshotOfFrontFace;
-(id)initWithPass:(id)arg1 content:(long long)arg2 ;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(void)tapRecognized:(id)arg1 ;
-(void)didAuthenticate;
-(id)initWithPass:(id)arg1 ;
-(PKPass *)pass;
-(void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(BOOL)arg2 ;
-(PKPassFaceViewRendererState *)rendererState;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3 ;
-(id)snapshotOfFrontFaceWithRequestedSize:(CGSize)arg1 ;
-(id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)arg1 ;
-(id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3 rendererState:(id)arg4 ;
-(void)_updateFrontFaceSuppressedContent;
-(void)_applyContentMode:(BOOL)arg1 ;
-(CGSize)sizeOfFront;
-(CGRect)frameOfVisibleFace;
-(void)setModalShadowVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)setModalShadowVisibility:(double)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(void)_updateLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)setContentMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setContentMode:(long long)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(void)_updateLowEndLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)_updateHighEndLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2 ;
-(long long)_frontFaceBackgroundModeForContentMode;
-(unsigned long long)_regionsForCurrentModes;
-(BOOL)_visibleFaceShouldClipForCurrentViewMode:(double*)arg1 ;
-(CGSize)sizeOfFrontFace;
-(void)drawFrontFaceAtSize:(CGSize)arg1 ;
-(BOOL)canShowBarcode;
-(BOOL)frontFaceBodyContentCreated;
-(void)setModallyPresented:(BOOL)arg1 ;
-(void)setModalShadowVisibility:(double)arg1 ;
-(void)updateValidityDisplay;
-(unsigned long long)suppressedContent;
-(BOOL)isModallyPresented;
-(double)modalShadowVisibility;
@end

