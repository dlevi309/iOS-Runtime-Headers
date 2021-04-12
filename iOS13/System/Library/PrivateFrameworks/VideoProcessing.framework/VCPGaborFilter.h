/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPGaborFilter : NSObject {

	Kernel* _filterBanks;
	int _numScales;
	int _numOrientations;
	int _num;

}
-(void)dealloc;
-(int)createGaborFilterKernel:(Kernel*)arg1 sigmaX:(float)arg2 sigmaY:(float)arg3 lambda:(float)arg4 thetaInDegree:(float)arg5 phaseInDegree:(float)arg6 ;
-(id)initWithNumberOfScales:(int)arg1 numOfOrientations:(int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(int)processWithFilterScaleIdx:(int)arg1 orientIdx:(int)arg2 srcImage:(const float*)arg3 outImage:(float*)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 ;
@end

