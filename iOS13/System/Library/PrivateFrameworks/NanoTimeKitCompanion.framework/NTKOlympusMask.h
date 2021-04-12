/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKOlympusMask : NSObject
+(double)normalizeAngle:(double)arg1 ;
+(double)angleForHour:(unsigned long long)arg1 minutes:(unsigned long long)arg2 ;
+(double)angleForMinute:(unsigned long long)arg1 seconds:(unsigned long long)arg2 ;
+(id)clippingPathFromCenterPoint:(CGPoint)arg1 startAngle:(double)arg2 endAngle:(double)arg3 radius:(double)arg4 ;
+(CGPoint)pointForAngle:(double)arg1 radius:(double)arg2 centerPoint:(CGPoint)arg3 ;
+(CGPoint)convertPointFromViewCoordinatesToCartesianCoordiates:(CGPoint)arg1 centerFromViewCoordinates:(CGPoint)arg2 ;
+(unsigned long long)quadrantForPoint:(CGPoint)arg1 ;
+(CGPoint)roundPoint:(CGPoint)arg1 ;
+(CGPoint)convertPoint:(CGPoint)arg1 translantedQuadrantIndex:(unsigned long long)arg2 ;
+(CGPoint)nextPointFromStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 radius:(double)arg3 ;
+(CGPoint)convertPoint:(CGPoint)arg1 translantedFromFirstToQuadrantIndex:(unsigned long long)arg2 ;
+(unsigned long long)nextQuadrantIndex:(unsigned long long)arg1 ;
+(CGPoint)convertPointFromCartesianCoordiatesToViewCoordiates:(CGPoint)arg1 centerFromViewCoordinates:(CGPoint)arg2 ;
+(unsigned long long)quadrantForAngle:(double)arg1 ;
+(double)convertAngleForFirstQuadrant:(double)arg1 ;
+(double)hourHandAngleWithDate:(id)arg1 ;
+(double)minuteHandAngleWithDate:(id)arg1 ;
@end

