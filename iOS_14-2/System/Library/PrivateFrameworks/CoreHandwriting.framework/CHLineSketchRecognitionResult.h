/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@class NSArray;

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult {

	BOOL _cornerLine;
	int _startEndpointType;
	int _endEndpointType;
	NSArray* _pathPoints;
	CGPoint _startLocation;
	CGPoint _endLocation;
	CGPoint _midpointLocation;
	CGPoint _controlPoint;

}

@property (readonly) int startEndpointType;                 //@synthesize startEndpointType=_startEndpointType - In the implementation block
@property (readonly) int endEndpointType;                   //@synthesize endEndpointType=_endEndpointType - In the implementation block
@property (readonly) CGPoint startLocation;                 //@synthesize startLocation=_startLocation - In the implementation block
@property (readonly) CGPoint endLocation;                   //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) CGPoint midpointLocation;              //@synthesize midpointLocation=_midpointLocation - In the implementation block
@property (readonly) CGPoint controlPoint;                  //@synthesize controlPoint=_controlPoint - In the implementation block
@property (readonly) NSArray * pathPoints;                  //@synthesize pathPoints=_pathPoints - In the implementation block
@property (readonly) BOOL cornerLine;                       //@synthesize cornerLine=_cornerLine - In the implementation block
-(CGPoint)endLocation;
-(CGPoint)startLocation;
-(void)dealloc;
-(CGPoint)controlPoint;
-(int)startEndpointType;
-(int)endEndpointType;
-(NSArray *)pathPoints;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(CGPoint)arg8 controlPointLocation:(CGPoint)arg9 ;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(CGPoint)arg8 controlPointLocation:(CGPoint)arg9 pathPoints:(id)arg10 ;
-(CGPoint)midpointLocation;
-(BOOL)cornerLine;
@end

