/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>

@class HFItem, HUGridCameraCellLayoutOptions, UIView, UILabel, HULegibilityLabel, HUCameraView, _UILegibilitySettings, NSArray, NADecayingTimer, HUVisualEffectContainerView;

@interface HUGridCameraCell : HUGridCell {

	HFItem* _item;
	HUGridCameraCellLayoutOptions* _layoutOptions;
	UIView* _topBarView;
	UIView* _recordingIndicator;
	UILabel* _titleLabel;
	HULegibilityLabel* _descriptionLabel;
	HUCameraView* _cameraView;
	_UILegibilitySettings* _legibilitySettings;
	NSArray* _allConstraints;
	NSArray* _labelsConstraints;
	NADecayingTimer* _descriptionLabelUpdateTimer;
	HUVisualEffectContainerView* _exclamationView;

}

@property (nonatomic,retain) UIView * topBarView;                                        //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,retain) UIView * recordingIndicator;                                //@synthesize recordingIndicator=_recordingIndicator - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HULegibilityLabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) HUCameraView * cameraView;                                  //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                                   //@synthesize allConstraints=_allConstraints - In the implementation block
@property (nonatomic,retain) NSArray * labelsConstraints;                                //@synthesize labelsConstraints=_labelsConstraints - In the implementation block
@property (nonatomic,retain) NADecayingTimer * descriptionLabelUpdateTimer;              //@synthesize descriptionLabelUpdateTimer=_descriptionLabelUpdateTimer - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * exclamationView;              //@synthesize exclamationView=_exclamationView - In the implementation block
@property (nonatomic,retain) HUGridCameraCellLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) double cameraViewAlpha; 
@property (nonatomic,readonly) UIView * cameraContentView; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(HUCameraView *)cameraView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(UIView *)cameraContentView;
-(id)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(id)arg1 ;
-(void)updateConstraints;
-(_UILegibilitySettings *)legibilitySettings;
-(HUGridCameraCellLayoutOptions *)layoutOptions;
-(void)setDescriptionLabel:(HULegibilityLabel *)arg1 ;
-(HULegibilityLabel *)descriptionLabel;
-(void)setLayoutOptions:(HUGridCameraCellLayoutOptions *)arg1 ;
-(void)dealloc;
-(HUVisualEffectContainerView *)exclamationView;
-(void)layoutOptionsDidChange;
-(CGRect)cameraViewFrame;
-(void)setCameraViewAlpha:(double)arg1 ;
-(NADecayingTimer *)descriptionLabelUpdateTimer;
-(void)setDescriptionLabelUpdateTimer:(NADecayingTimer *)arg1 ;
-(id)_descriptionLabelText:(id)arg1 ;
-(BOOL)shouldDisplayAccessModeErrorContent;
-(UIView *)recordingIndicator;
-(BOOL)shouldDisplayErrorContent;
-(void)_updateRecordIndicatorColor;
-(void)_updateCameraViewAppearance;
-(UIView *)topBarView;
-(NSArray *)allConstraints;
-(NSArray *)labelsConstraints;
-(void)setLabelsConstraints:(NSArray *)arg1 ;
-(void)setAllConstraints:(NSArray *)arg1 ;
-(double)cameraViewAlpha;
-(void)_animateTransitionWithView:(id)arg1 animations:(/*^block*/id)arg2 ;
-(void)setTopBarView:(UIView *)arg1 ;
-(void)setRecordingIndicator:(UIView *)arg1 ;
-(void)setExclamationView:(HUVisualEffectContainerView *)arg1 ;
@end

