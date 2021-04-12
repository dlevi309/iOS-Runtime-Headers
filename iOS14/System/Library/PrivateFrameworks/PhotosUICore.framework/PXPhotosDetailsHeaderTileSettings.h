/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDetailsHeaderTileSettings : PXSettings {

	BOOL _showAlways;
	BOOL _showSlideshow;
	BOOL _forceMiroCompelling;
	BOOL _fakeMiroViewController;
	double _aspectRatio;
	double _maximumHeightRelativeToScreenHeight;
	double _maximumAbsoluteHeight;
	double _fakeMiroViewAspectRatio;
	double _fakeMiroViewLoadingDuration;

}

@property (assign,nonatomic) double aspectRatio;                                      //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double maximumHeightRelativeToScreenHeight;              //@synthesize maximumHeightRelativeToScreenHeight=_maximumHeightRelativeToScreenHeight - In the implementation block
@property (assign,nonatomic) double maximumAbsoluteHeight;                            //@synthesize maximumAbsoluteHeight=_maximumAbsoluteHeight - In the implementation block
@property (assign,nonatomic) BOOL showAlways;                                         //@synthesize showAlways=_showAlways - In the implementation block
@property (assign,nonatomic) BOOL showSlideshow;                                      //@synthesize showSlideshow=_showSlideshow - In the implementation block
@property (assign,nonatomic) BOOL forceMiroCompelling;                                //@synthesize forceMiroCompelling=_forceMiroCompelling - In the implementation block
@property (assign,nonatomic) BOOL fakeMiroViewController;                             //@synthesize fakeMiroViewController=_fakeMiroViewController - In the implementation block
@property (assign,nonatomic) double fakeMiroViewAspectRatio;                          //@synthesize fakeMiroViewAspectRatio=_fakeMiroViewAspectRatio - In the implementation block
@property (assign,nonatomic) double fakeMiroViewLoadingDuration;                      //@synthesize fakeMiroViewLoadingDuration=_fakeMiroViewLoadingDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setShowAlways:(BOOL)arg1 ;
-(double)maximumAbsoluteHeight;
-(double)maximumHeightRelativeToScreenHeight;
-(BOOL)fakeMiroViewController;
-(double)aspectRatio;
-(void)setMaximumAbsoluteHeight:(double)arg1 ;
-(BOOL)forceMiroCompelling;
-(BOOL)showSlideshow;
-(BOOL)showAlways;
-(void)setFakeMiroViewAspectRatio:(double)arg1 ;
-(double)fakeMiroViewAspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(void)setMaximumHeightRelativeToScreenHeight:(double)arg1 ;
-(double)fakeMiroViewLoadingDuration;
-(void)setShowSlideshow:(BOOL)arg1 ;
-(void)setFakeMiroViewLoadingDuration:(double)arg1 ;
-(void)setFakeMiroViewController:(BOOL)arg1 ;
-(void)setForceMiroCompelling:(BOOL)arg1 ;
@end

