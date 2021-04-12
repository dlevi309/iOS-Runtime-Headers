/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {

	PXYearsLayoutGenerator* _layoutGenerator;
	PXYearsLayoutMetrics* _metrics;

}

@property (nonatomic,copy) PXYearsLayoutMetrics * metrics;                      //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) long long presentedNumberOfColumns; 
-(void)setMetrics:(PXYearsLayoutMetrics *)arg1 ;
-(PXYearsLayoutMetrics *)metrics;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
-(id)configuredLayoutGenerator;
-(long long)presentedNumberOfColumns;
@end

