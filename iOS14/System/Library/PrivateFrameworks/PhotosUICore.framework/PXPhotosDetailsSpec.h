/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpec.h>

@class PXWidgetCompositionSpec, PXWidgetSpec, PXPhotosDetailsBarSpec, UIColor;

@interface PXPhotosDetailsSpec : PXFeatureSpec {

	unsigned long long _detailsOptions;
	PXWidgetCompositionSpec* _compositionSpec;
	PXWidgetSpec* _widgetSpec;
	PXPhotosDetailsBarSpec* _barSpec;
	UIColor* _backgroundColor;
	UIColor* _dimmingColor;
	double _dimmingAlpha;

}

@property (nonatomic,readonly) unsigned long long detailsOptions;                      //@synthesize detailsOptions=_detailsOptions - In the implementation block
@property (nonatomic,readonly) PXWidgetCompositionSpec * compositionSpec;              //@synthesize compositionSpec=_compositionSpec - In the implementation block
@property (nonatomic,readonly) PXWidgetSpec * widgetSpec;                              //@synthesize widgetSpec=_widgetSpec - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsBarSpec * barSpec;                       //@synthesize barSpec=_barSpec - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * dimmingColor;                                 //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (nonatomic,readonly) double dimmingAlpha;                                    //@synthesize dimmingAlpha=_dimmingAlpha - In the implementation block
@property (nonatomic,readonly) BOOL shouldInitializeBarsController; 
@property (nonatomic,readonly) BOOL enableActionsWidget; 
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(PXPhotosDetailsBarSpec *)barSpec;
-(BOOL)shouldInitializeBarsController;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3 ;
-(BOOL)enableActionsWidget;
-(unsigned long long)detailsOptions;
-(PXWidgetCompositionSpec *)compositionSpec;
-(PXWidgetSpec *)widgetSpec;
-(UIColor *)backgroundColor;
-(double)dimmingAlpha;
-(UIColor *)dimmingColor;
@end

