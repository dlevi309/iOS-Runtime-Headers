/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXCursorInteractionSettings : PXSettings {

	BOOL _enableGridShadows;
	BOOL _enableGridLift;
	BOOL _enableCardShadows;
	BOOL _enableCardLift;
	BOOL _enableDetailsEffect;
	BOOL _enableCuratedLibraryEffects;
	double _animationDuration;
	double _dampingRatio;
	double _yearsPadding;
	double _monthsPadding;
	double _allPhotosAspectFitPadding;

}

@property (assign,nonatomic) double animationDuration;                      //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double dampingRatio;                           //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) double yearsPadding;                           //@synthesize yearsPadding=_yearsPadding - In the implementation block
@property (assign,nonatomic) double monthsPadding;                          //@synthesize monthsPadding=_monthsPadding - In the implementation block
@property (assign,nonatomic) double allPhotosAspectFitPadding;              //@synthesize allPhotosAspectFitPadding=_allPhotosAspectFitPadding - In the implementation block
@property (assign,nonatomic) BOOL enableGridShadows;                        //@synthesize enableGridShadows=_enableGridShadows - In the implementation block
@property (assign,nonatomic) BOOL enableGridLift;                           //@synthesize enableGridLift=_enableGridLift - In the implementation block
@property (assign,nonatomic) BOOL enableCardShadows;                        //@synthesize enableCardShadows=_enableCardShadows - In the implementation block
@property (assign,nonatomic) BOOL enableCardLift;                           //@synthesize enableCardLift=_enableCardLift - In the implementation block
@property (assign,nonatomic) BOOL enableDetailsEffect;                      //@synthesize enableDetailsEffect=_enableDetailsEffect - In the implementation block
@property (assign,nonatomic) BOOL enableCuratedLibraryEffects;              //@synthesize enableCuratedLibraryEffects=_enableCuratedLibraryEffects - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(double)animationDuration;
-(void)setEnableCardLift:(BOOL)arg1 ;
-(BOOL)enableDetailsEffect;
-(void)setEnableGridLift:(BOOL)arg1 ;
-(double)allPhotosAspectFitPadding;
-(BOOL)enableCuratedLibraryEffects;
-(void)setEnableCuratedLibraryEffects:(BOOL)arg1 ;
-(long long)cardInteractionOptions;
-(void)setYearsPadding:(double)arg1 ;
-(void)setMonthsPadding:(double)arg1 ;
-(void)setEnableGridShadows:(BOOL)arg1 ;
-(BOOL)enableCardShadows;
-(double)yearsPadding;
-(long long)gridInteractionOptions;
-(void)setEnableCardShadows:(BOOL)arg1 ;
-(double)monthsPadding;
-(BOOL)enableGridLift;
-(void)setEnableDetailsEffect:(BOOL)arg1 ;
-(long long)interactionOptionsForZoomLevel:(long long)arg1 isAllPhotosAspectFit:(BOOL)arg2 ;
-(BOOL)enableGridShadows;
-(double)dampingRatio;
-(BOOL)enableCardLift;
-(void)setAllPhotosAspectFitPadding:(double)arg1 ;
-(void)setDampingRatio:(double)arg1 ;
-(double)paddingForZoomLevel:(long long)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
@end

