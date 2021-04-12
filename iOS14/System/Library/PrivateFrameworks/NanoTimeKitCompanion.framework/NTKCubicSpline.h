/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKCubicSpline : NSObject {

	SCD_Struct_NT11* _processedPoints;
	SCD_Struct_NT11* _controlPoints;
	SCD_Struct_NT11* _workspace;
	SCD_Struct_NT10* _splineMatrix;
	BOOL _closed;
	int _length;
	int _startIndex;
	 _a;
	 _b;
	 _c;
	 _d;

}
-(void)process;
-(BOOL)isClosed;
-(int)length;
-(void)dealloc;
-(void)_processSpline;
-(void)_processClosedSpline;
-(void)_processOpenSpline;
-(2)interpolateAt:(float)arg1 derivative:(2*)arg2 ;
-(id)initWithNumberOfControlPoints:(int)arg1 isClosed:(BOOL)arg2 ;
-(SCD_Struct_NT11*)controlPointsBuffer;
-(2)interpolateAt:(float)arg1 ;
-(void)interpolateWithSteps:(int)arg1 interpolation:(/*^block*/id)arg2 ;
-(void)getControlPoints:(1*)arg1 processedPoints:(2*)arg2 ;
@end

