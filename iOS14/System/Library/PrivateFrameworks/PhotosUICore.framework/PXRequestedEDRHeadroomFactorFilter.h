/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNumberFilter.h>

@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter {

	double _sustainDuration;
	double _highValue;
	double _lastDecreaseTime;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic) double highValue;                           //@synthesize highValue=_highValue - In the implementation block
@property (assign,nonatomic) double lastDecreaseTime;                    //@synthesize lastDecreaseTime=_lastDecreaseTime - In the implementation block
@property (assign,nonatomic) double sustainDuration;                     //@synthesize sustainDuration=_sustainDuration - In the implementation block
-(void)setLastDecreaseTime:(double)arg1 ;
-(void)setInput:(double)arg1 ;
-(void)setHighValue:(double)arg1 ;
-(double)lastDecreaseTime;
-(double)sustainDuration;
-(void)setSustainDuration:(double)arg1 ;
-(double)highValue;
-(id)initWithInput:(double)arg1 ;
-(BOOL)isPaused;
-(double)updatedOutput;
@end

