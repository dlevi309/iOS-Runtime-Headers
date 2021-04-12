/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMControlStatusIndicatorDelegate.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@protocol CAMControlStatusBarDelegate;
@class NSArray, CAMDirectionalIndicator, UIView, NSMutableDictionary, NSSet, CAMFlashStatusIndicator, CAMLivePhotoStatusIndicator, CAMHDRStatusIndicator, CAMTimerStatusIndicator, CAMFilterStatusIndicator, CAMApertureStatusIndicator, CAMIntensityStatusIndicator, CAMVideoConfigurationStatusIndicator, CAMLowLightStatusIndicator, NSString;

@interface CAMControlStatusBar : UIView <CAMControlStatusIndicatorDelegate, CAMAccessibilityHUDItemProvider> {

	BOOL _directionIndicatorVisible;
	BOOL __directionIndicatorHiddenForSpace;
	id<CAMControlStatusBarDelegate> _delegate;
	NSArray* _primaryVisibleIndicatorTypes;
	NSArray* _secondaryVisibleIndicatorTypes;
	CAMDirectionalIndicator* _directionIndicator;
	UIView* _primaryAccessoryControl;
	UIView* _secondaryAccessoryControl;
	long long _orientation;
	NSMutableDictionary* __statusIndicatorsByType;
	NSSet* __allVisibleTypes;

}

@property (nonatomic,readonly) NSMutableDictionary * _statusIndicatorsByType;                                                                                             //@synthesize _statusIndicatorsByType=__statusIndicatorsByType - In the implementation block
@property (setter=_setAllVisibleTypes:,nonatomic,retain) NSSet * _allVisibleTypes;                                                                                        //@synthesize _allVisibleTypes=__allVisibleTypes - In the implementation block
@property (assign,setter=_setDirectionIndicatorHiddenForSpace:,getter=_isDirectionIndicatorHiddenForSpace,nonatomic) BOOL _directionIndicatorHiddenForSpace;              //@synthesize _directionIndicatorHiddenForSpace=__directionIndicatorHiddenForSpace - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlStatusBarDelegate> delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * primaryVisibleIndicatorTypes;                                                                                                        //@synthesize primaryVisibleIndicatorTypes=_primaryVisibleIndicatorTypes - In the implementation block
@property (nonatomic,copy) NSArray * secondaryVisibleIndicatorTypes;                                                                                                      //@synthesize secondaryVisibleIndicatorTypes=_secondaryVisibleIndicatorTypes - In the implementation block
@property (nonatomic,readonly) CAMFlashStatusIndicator * flashIndicator; 
@property (nonatomic,readonly) CAMLivePhotoStatusIndicator * livePhotoIndicator; 
@property (nonatomic,readonly) CAMHDRStatusIndicator * hdrIndicator; 
@property (nonatomic,readonly) CAMTimerStatusIndicator * timerIndicator; 
@property (nonatomic,readonly) CAMFilterStatusIndicator * filterIndicator; 
@property (nonatomic,readonly) CAMApertureStatusIndicator * apertureIndicator; 
@property (nonatomic,readonly) CAMIntensityStatusIndicator * intensityIndicator; 
@property (nonatomic,readonly) CAMVideoConfigurationStatusIndicator * videoConfigurationIndicator; 
@property (nonatomic,readonly) CAMLowLightStatusIndicator * lowLightIndicator; 
@property (assign,getter=isDirectionIndicatorVisible,nonatomic) BOOL directionIndicatorVisible;                                                                           //@synthesize directionIndicatorVisible=_directionIndicatorVisible - In the implementation block
@property (nonatomic,readonly) CAMDirectionalIndicator * directionIndicator;                                                                                              //@synthesize directionIndicator=_directionIndicator - In the implementation block
@property (nonatomic,retain) UIView * primaryAccessoryControl;                                                                                                            //@synthesize primaryAccessoryControl=_primaryAccessoryControl - In the implementation block
@property (nonatomic,retain) UIView * secondaryAccessoryControl;                                                                                                          //@synthesize secondaryAccessoryControl=_secondaryAccessoryControl - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                                                       //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMControlStatusBarDelegate>)delegate;
-(void)setDelegate:(id<CAMControlStatusBarDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setDirectionIndicatorVisible:(BOOL)arg1 ;
-(CAMDirectionalIndicator *)directionIndicator;
-(CAMTimerStatusIndicator *)timerIndicator;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(/*^block*/id)arg2 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPrimaryAccessoryControl:(UIView *)arg1 ;
-(void)setSecondaryAccessoryControl:(UIView *)arg1 ;
-(CAMLivePhotoStatusIndicator *)livePhotoIndicator;
-(BOOL)isDirectionIndicatorVisible;
-(void)setDirectionIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isIndicatorVisibleForType:(unsigned long long)arg1 ;
-(void)setPrimaryVisibleIndicatorTypes:(id)arg1 secondaryVisibleIndicatorTypes:(id)arg2 animated:(BOOL)arg3 ;
-(CAMApertureStatusIndicator *)apertureIndicator;
-(CAMVideoConfigurationStatusIndicator *)videoConfigurationIndicator;
-(CAMHDRStatusIndicator *)hdrIndicator;
-(CAMFlashStatusIndicator *)flashIndicator;
-(CAMFilterStatusIndicator *)filterIndicator;
-(CAMIntensityStatusIndicator *)intensityIndicator;
-(CAMLowLightStatusIndicator *)lowLightIndicator;
-(NSArray *)primaryVisibleIndicatorTypes;
-(void)_layoutAllVisibleTypes:(id)arg1 atOrigin:(long long)arg2 ;
-(NSArray *)secondaryVisibleIndicatorTypes;
-(NSMutableDictionary *)_statusIndicatorsByType;
-(void)_setDirectionIndicatorHiddenForSpace:(BOOL)arg1 ;
-(void)_layoutVisibleViewsForTypes:(id)arg1 inVisibleTypes:(id)arg2 atOrigin:(long long)arg3 ;
-(UIView *)primaryAccessoryControl;
-(UIView *)secondaryAccessoryControl;
-(void)_handleFlashStatusIndicatorTapped:(id)arg1 ;
-(void)_handleLivePhotoStatusIndicatorTapped:(id)arg1 ;
-(void)_handleHDRStatusIndicatorTapped:(id)arg1 ;
-(void)_handleTimerStatusIndicatorTapped:(id)arg1 ;
-(void)_handleFilterStatusIndicatorTapped:(id)arg1 ;
-(void)_handleApertureStatusIndicatorTapped:(id)arg1 ;
-(void)_handleIntensityStatusIndicatorTapped:(id)arg1 ;
-(void)_handleLowLightStatusIndicatorTapped:(id)arg1 ;
-(void)_setAllVisibleTypes:(id)arg1 ;
-(void)_ensureVisibleIndicators;
-(void)_prelayoutForNewTypes:(id)arg1 oldTypes:(id)arg2 atOrigin:(long long)arg3 ;
-(void)_updateIndicatorsVisibilityAnimated:(BOOL)arg1 ;
-(NSSet *)_allVisibleTypes;
-(void)_updateDirectionIndicatorAlphaAnimated:(BOOL)arg1 ;
-(BOOL)_isDirectionIndicatorHiddenForSpace;
-(void)_loadIndicatorIfNeededForType:(unsigned long long)arg1 ;
-(void)_installIndicatorIfNeededForType:(unsigned long long)arg1 ;
-(id)_createIndicatorForType:(unsigned long long)arg1 ;
-(void)setPrimaryVisibleIndicatorTypes:(NSArray *)arg1 ;
-(void)setSecondaryVisibleIndicatorTypes:(NSArray *)arg1 ;
@end

