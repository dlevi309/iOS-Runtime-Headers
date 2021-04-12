/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXHUDVisualization.h>

@class PXTimeInterval;

@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {

	id _stateTransitionHandlerToken;
	PXTimeInterval* _timeInterval;

}

@property (nonatomic,retain) PXTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(id)visualizationWithTimeInterval:(id)arg1 ;
-(void)setTimeInterval:(PXTimeInterval *)arg1 ;
-(PXTimeInterval *)timeInterval;
@end

