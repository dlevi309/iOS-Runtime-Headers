/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerZoomTransitionSettings : PXSettings {

	BOOL _showRectsOfInterest;
	BOOL _animateViewControllersViews;
	BOOL _animateEndPointsContents;
	long long _animationType;
	long long _crossfadeType;
	double _transitionDuration;
	double _minimumZoomScale;
	double _maximumZoomScale;
	double _titleCrossfadeAmount;

}

@property (assign,nonatomic) long long animationType;                       //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) long long crossfadeType;                       //@synthesize crossfadeType=_crossfadeType - In the implementation block
@property (assign,nonatomic) double transitionDuration;                     //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double minimumZoomScale;                       //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                       //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double titleCrossfadeAmount;                   //@synthesize titleCrossfadeAmount=_titleCrossfadeAmount - In the implementation block
@property (assign,nonatomic) BOOL showRectsOfInterest;                      //@synthesize showRectsOfInterest=_showRectsOfInterest - In the implementation block
@property (assign,nonatomic) BOOL animateViewControllersViews;              //@synthesize animateViewControllersViews=_animateViewControllersViews - In the implementation block
@property (assign,nonatomic) BOOL animateEndPointsContents;                 //@synthesize animateEndPointsContents=_animateEndPointsContents - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setTransitionDuration:(double)arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;
-(double)transitionDuration;
-(void)setAnimateEndPointsContents:(BOOL)arg1 ;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setTitleCrossfadeAmount:(double)arg1 ;
-(void)setAnimationType:(long long)arg1 ;
-(BOOL)animateViewControllersViews;
-(void)setShowRectsOfInterest:(BOOL)arg1 ;
-(BOOL)animateEndPointsContents;
-(void)setAnimateViewControllersViews:(BOOL)arg1 ;
-(long long)animationType;
-(double)maximumZoomScale;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)minimumZoomScale;
-(double)titleCrossfadeAmount;
-(long long)crossfadeType;
-(BOOL)showRectsOfInterest;
-(void)setCrossfadeType:(long long)arg1 ;
@end

