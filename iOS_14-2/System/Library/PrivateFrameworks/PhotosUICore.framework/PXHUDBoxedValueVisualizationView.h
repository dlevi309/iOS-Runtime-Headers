/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXHUDAbstractVisualizationView.h>

@class UILabel, PXHUDBoxedValueVisualization;

@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {

	UILabel* _titleAndValueLabel;

}

@property (nonatomic,retain) PXHUDBoxedValueVisualization * visualization; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)visualizationDidUpdate;
-(void)_updateTitleAndValueLabel;
@end

