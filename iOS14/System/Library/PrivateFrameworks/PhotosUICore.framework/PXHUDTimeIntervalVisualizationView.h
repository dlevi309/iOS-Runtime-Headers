/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXHUDAbstractVisualizationView.h>

@class UILabel, NSTimer, PXHUDTimeIntervalVisualization;

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {

	UILabel* _titleAndTimeLabel;
	NSTimer* _timer;

}

@property (nonatomic,retain) PXHUDTimeIntervalVisualization * visualization; 
-(void)_setupTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)visualizationDidUpdate;
-(void)_updateTitleAndTimeLabel;
-(void)_cleanupTimer;
-(void)_updateTimer;
-(void)dealloc;
-(void)_timerTick;
@end

