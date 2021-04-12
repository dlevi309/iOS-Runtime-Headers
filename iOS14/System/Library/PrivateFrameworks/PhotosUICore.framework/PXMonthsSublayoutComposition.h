/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class NSIndexSet, PXMonthsLayoutGenerator, PXMonthsLayoutMetrics;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {

	NSIndexSet* _indexesOfChapterHeaders;
	NSIndexSet* _indexesOfHeroes;
	PXMonthsLayoutGenerator* _layoutGenerator;
	PXMonthsLayoutMetrics* _metrics;

}

@property (nonatomic,copy) PXMonthsLayoutMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) BOOL presentedSingleColumn; 
-(void)setMetrics:(PXMonthsLayoutMetrics *)arg1 ;
-(PXMonthsLayoutMetrics *)metrics;
-(void)updateSublayoutAttributes;
-(BOOL)presentedSingleColumn;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
-(id)configuredLayoutGenerator;
@end

