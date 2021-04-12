/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutYAxisAnchor, HUCameraErrorContent, UIImageView, HURemoteContextHostingView, HUCameraBadgeView, UIView, HUCameraErrorView, UIActivityIndicatorView, NADecayingTimer, NSArray, NSLayoutConstraint, HMCameraView, HMCameraSource;

@interface HUCameraView : UIView {

	BOOL _showActivityIndicator;
	unsigned long long _maskedCameraCorners;
	NSLayoutYAxisAnchor* _badgeBottomAnchor;
	HUCameraErrorContent* _errorContent;
	UIImageView* _demoSnapshotImageView;
	HURemoteContextHostingView* _cameraContainerView;
	HUCameraBadgeView* _badgeView;
	UIView* _cameraOverlayView;
	UIView* _cameraDimmingView;
	UIView* _backgroundView;
	HUCameraErrorView* _errorView;
	UIActivityIndicatorView* _activityIndicatorView;
	NADecayingTimer* _snapshotAgeUpdateTimer;
	NSArray* _staticConstraints;
	NSLayoutConstraint* _cameraAspectRatioConstraint;
	NSLayoutConstraint* _badgeBottomConstraint;
	NSLayoutConstraint* _badgeTrailingConstraint;
	UIOffset _badgeOffset;

}

@property (nonatomic,readonly) HMCameraView * cameraView; 
@property (nonatomic,readonly) HURemoteContextHostingView * cameraContainerView;              //@synthesize cameraContainerView=_cameraContainerView - In the implementation block
@property (nonatomic,readonly) HUCameraBadgeView * badgeView;                                 //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UIView * cameraOverlayView;                                    //@synthesize cameraOverlayView=_cameraOverlayView - In the implementation block
@property (nonatomic,retain) UIView * cameraDimmingView;                                      //@synthesize cameraDimmingView=_cameraDimmingView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) HUCameraErrorView * errorView;                                   //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                 //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) NADecayingTimer * snapshotAgeUpdateTimer;                        //@synthesize snapshotAgeUpdateTimer=_snapshotAgeUpdateTimer - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                                     //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cameraAspectRatioConstraint;                //@synthesize cameraAspectRatioConstraint=_cameraAspectRatioConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * badgeBottomConstraint;                      //@synthesize badgeBottomConstraint=_badgeBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * badgeTrailingConstraint;                    //@synthesize badgeTrailingConstraint=_badgeTrailingConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * demoSnapshotImageView;                             //@synthesize demoSnapshotImageView=_demoSnapshotImageView - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCameraCorners;                          //@synthesize maskedCameraCorners=_maskedCameraCorners - In the implementation block
@property (nonatomic,retain) HMCameraSource * cameraSource; 
@property (assign,getter=isBadgeHidden,nonatomic) BOOL badgeHidden; 
@property (assign,nonatomic) UIOffset badgeOffset;                                            //@synthesize badgeOffset=_badgeOffset - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * badgeBottomAnchor;                         //@synthesize badgeBottomAnchor=_badgeBottomAnchor - In the implementation block
@property (nonatomic,retain) HUCameraErrorContent * errorContent;                             //@synthesize errorContent=_errorContent - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (nonatomic,readonly) CGRect cameraContentFrame; 
@property (nonatomic,readonly) CGRect derivedCameraContentFrame; 
@property (nonatomic,readonly) UIView * cameraOverlaySnapshot; 
+(BOOL)requiresConstraintBasedLayout;
-(void)_updateBadgeView;
-(HUCameraBadgeView *)badgeView;
-(double)_continuousCornerRadius;
-(HMCameraView *)cameraView;
-(id)init;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(void)updateConstraints;
-(HUCameraErrorView *)errorView;
-(UIOffset)badgeOffset;
-(UIView *)cameraOverlayView;
-(BOOL)isBadgeHidden;
-(void)setBadgeHidden:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setBadgeOffset:(UIOffset)arg1 ;
-(HMCameraSource *)cameraSource;
-(void)setCameraSource:(HMCameraSource *)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(void)dealloc;
-(UIView *)cameraOverlaySnapshot;
-(void)setCameraSource:(id)arg1 withDemoSnapshotURL:(id)arg2 animated:(BOOL)arg3 ;
-(void)setCameraSource:(id)arg1 animated:(BOOL)arg2 ;
-(void)setErrorContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMaskedCameraCorners:(unsigned long long)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(id)initWithBadgeView:(id)arg1 ;
-(NADecayingTimer *)snapshotAgeUpdateTimer;
-(HURemoteContextHostingView *)cameraContainerView;
-(UIImageView *)demoSnapshotImageView;
-(void)_updateMaskedCameraCorners;
-(NSLayoutConstraint *)badgeBottomConstraint;
-(NSLayoutConstraint *)badgeTrailingConstraint;
-(NSLayoutYAxisAnchor *)badgeBottomAnchor;
-(void)setBadgeBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBadgeTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(CGRect)cameraContentFrame;
-(void)setDemoSnapshotImageView:(UIImageView *)arg1 ;
-(void)_updateErrorAndActivityIndicatorVisibilityAnimated:(BOOL)arg1 ;
-(void)setErrorView:(HUCameraErrorView *)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(HUCameraErrorContent *)errorContent;
-(unsigned long long)maskedCameraCorners;
-(UIView *)cameraDimmingView;
-(void)setCameraDimmingView:(UIView *)arg1 ;
-(void)_updateBadgeViewReschedulingTimerIfNecessary:(BOOL)arg1 ;
-(void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1 ;
-(void)setSnapshotAgeUpdateTimer:(NADecayingTimer *)arg1 ;
-(void)setCameraContentMode:(long long)arg1 ;
-(void)setErrorContent:(HUCameraErrorContent *)arg1 ;
-(void)setBadgeBottomAnchor:(NSLayoutYAxisAnchor *)arg1 ;
-(CGRect)derivedCameraContentFrame;
-(id)cameraContentSnapshot;
-(NSLayoutConstraint *)cameraAspectRatioConstraint;
-(void)setCameraAspectRatioConstraint:(NSLayoutConstraint *)arg1 ;
@end

