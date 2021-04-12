/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlInteractionCoordinatorDelegate.h>
#import <libobjc.A.dylib/HUQuickControlTouchContinuing.h>

@class HUQuickControlInteractionCoordinator, NAValueThrottler, HUQuickControlViewProfile, _HUQuickControlSingleControlHostView, HFControlItem, NSString;

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <HUQuickControlInteractionCoordinatorDelegate, HUQuickControlTouchContinuing> {

	BOOL _writesInProgressOrPossible;
	BOOL _hasWrittenAnyNewValues;
	BOOL _hasSetControlSize;
	HUQuickControlInteractionCoordinator* _interactionCoordinator;
	id _modelValue;
	NAValueThrottler* _valueWriteThrottler;
	unsigned long long _inFlightWriteCount;
	HUQuickControlViewProfile* _viewProfile;
	double _verticalDirectionalControlStretchFactor;
	double _horizontalControlCompressionFactor;

}

@property (nonatomic,readonly) NAValueThrottler * valueWriteThrottler;                                          //@synthesize valueWriteThrottler=_valueWriteThrottler - In the implementation block
@property (assign,nonatomic) unsigned long long inFlightWriteCount;                                             //@synthesize inFlightWriteCount=_inFlightWriteCount - In the implementation block
@property (assign,getter=areWritesInProgressOrPossible,nonatomic) BOOL writesInProgressOrPossible;              //@synthesize writesInProgressOrPossible=_writesInProgressOrPossible - In the implementation block
@property (assign,nonatomic) BOOL hasWrittenAnyNewValues;                                                       //@synthesize hasWrittenAnyNewValues=_hasWrittenAnyNewValues - In the implementation block
@property (nonatomic,retain) HUQuickControlViewProfile * viewProfile;                                           //@synthesize viewProfile=_viewProfile - In the implementation block
@property (nonatomic,retain) HUQuickControlInteractionCoordinator * interactionCoordinator;                     //@synthesize interactionCoordinator=_interactionCoordinator - In the implementation block
@property (assign,nonatomic) double verticalDirectionalControlStretchFactor;                                    //@synthesize verticalDirectionalControlStretchFactor=_verticalDirectionalControlStretchFactor - In the implementation block
@property (assign,nonatomic) double horizontalControlCompressionFactor;                                         //@synthesize horizontalControlCompressionFactor=_horizontalControlCompressionFactor - In the implementation block
@property (nonatomic,retain) _HUQuickControlSingleControlHostView * view; 
@property (assign,nonatomic) BOOL hasSetControlSize;                                                            //@synthesize hasSetControlSize=_hasSetControlSize - In the implementation block
@property (nonatomic,readonly) HFControlItem * controlItem; 
@property (nonatomic,readonly) id modelValue;                                                                   //@synthesize modelValue=_modelValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(void)_updateTitle;
-(void)setControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(void)setPreferredFrameLayoutGuide:(id)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)overrideValueForCharacteristic:(id)arg1 ;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(id)overrideStatusText;
-(id)overrideSecondaryStatusText;
-(id)viewControllerForTouchContinuation;
-(void)setControlOrientation:(unsigned long long)arg1 ;
-(void)setPreferredControl:(unsigned long long)arg1 ;
-(id)viewForTouchContinuation;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)invalidateViewProfile;
-(HFControlItem *)controlItem;
-(HUQuickControlViewProfile *)viewProfile;
-(void)updateValueFromControlItem;
-(HUQuickControlInteractionCoordinator *)interactionCoordinator;
-(id)initWithControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)controlToViewValueTransformer;
-(void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2 ;
-(void)interactionCoordinator:(id)arg1 interactionStateDidChange:(BOOL)arg2 ;
-(BOOL)hasModelValueChangedForInteractionCoordinator:(id)arg1 ;
-(void)interactionCoordinatorWantsDismissal:(id)arg1 ;
-(void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2 ;
-(void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1 ;
-(void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2 ;
-(void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2 ;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(BOOL)hasSetControlSize;
-(id)modelValue;
-(void)modelValueDidChange;
-(NAValueThrottler *)valueWriteThrottler;
-(void)_writeModelControlValue:(id)arg1 ;
-(BOOL)areWritesInProgressOrPossible;
-(void)setHasSetControlSize:(BOOL)arg1 ;
-(void)_updateViewProfileForCurrentItemState;
-(void)_setModelValue:(id)arg1 writeValue:(BOOL)arg2 ;
-(unsigned long long)inFlightWriteCount;
-(void)setInFlightWriteCount:(unsigned long long)arg1 ;
-(void)setHasWrittenAnyNewValues:(BOOL)arg1 ;
-(void)_updateWriteState;
-(void)setWritesInProgressOrPossible:(BOOL)arg1 ;
-(void)setViewProfile:(HUQuickControlViewProfile *)arg1 ;
-(void)setInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 ;
-(double)horizontalControlCompressionFactor;
-(double)verticalDirectionalControlStretchFactor;
-(void)_updateControlTransform;
-(void)_updateControlViewReachabilityState;
-(BOOL)hasWrittenAnyNewValues;
-(void)setHorizontalControlCompressionFactor:(double)arg1 ;
-(void)setVerticalDirectionalControlStretchFactor:(double)arg1 ;
@end

