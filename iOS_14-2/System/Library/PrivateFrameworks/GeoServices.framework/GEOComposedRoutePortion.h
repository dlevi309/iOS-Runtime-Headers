/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray;


@protocol GEOComposedRoutePortion <NSObject>
@property (nonatomic,readonly) NSRange pointRange; 
@property (nonatomic,readonly) NSRange stepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) unsigned distance; 
@property (nonatomic,readonly) double expectedTime; 
@required
-(NSArray *)steps;
-(unsigned)distance;
-(double)expectedTime;
-(unsigned long long)endStepIndex;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(unsigned long long)stepCount;
-(unsigned long long)startStepIndex;
-(NSRange)stepRange;
-(unsigned)pointCount;
-(NSRange)pointRange;

@end

