/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLKDevice;

@interface NTKCaliforniaStyleTransitionHandler : NSObject {

	double _fraction;
	unsigned long long _dial;
	CGPoint* _fadeOutHourMarkersCenterPoints;
	CGPoint* _fadeInHourMarkersCenterPoints;
	unsigned long long _hourMarkersCount;
	CLKDevice* _device;
	CGPoint _centerPoint;

}

@property (nonatomic,retain) CLKDevice * device;                                   //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) double fraction;                                      //@synthesize fraction=_fraction - In the implementation block
@property (assign,nonatomic) unsigned long long dial;                              //@synthesize dial=_dial - In the implementation block
@property (assign,nonatomic) CGPoint centerPoint;                                  //@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign,nonatomic) CGPoint* fadeOutHourMarkersCenterPoints;              //@synthesize fadeOutHourMarkersCenterPoints=_fadeOutHourMarkersCenterPoints - In the implementation block
@property (assign,nonatomic) CGPoint* fadeInHourMarkersCenterPoints;               //@synthesize fadeInHourMarkersCenterPoints=_fadeInHourMarkersCenterPoints - In the implementation block
@property (assign,nonatomic) unsigned long long hourMarkersCount;                  //@synthesize hourMarkersCount=_hourMarkersCount - In the implementation block
-(CGPoint)centerPoint;
-(CLKDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(double)fraction;
-(void)setFraction:(double)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setDial:(unsigned long long)arg1 ;
-(unsigned long long)dial;
-(void)setHourMarkersCount:(unsigned long long)arg1 ;
-(void)setFadeOutHourMarkersCenterPoints:(CGPoint*)arg1 ;
-(void)setFadeInHourMarkersCenterPoints:(CGPoint*)arg1 ;
-(double)opacityForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2 ;
-(CGPoint)positionForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2 ;
-(CGAffineTransform)transformForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2 ;
-(double)animationProgressForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2 ;
-(CGPoint*)fadeOutHourMarkersCenterPoints;
-(CGPoint*)fadeInHourMarkersCenterPoints;
-(double)animationStartTimeForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2 ;
-(double)animationDurationForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2 ;
-(unsigned long long)hourMarkersCount;
@end

