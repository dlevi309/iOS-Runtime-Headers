/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADEspressoRunner, NSString;

@interface ADExecutor : NSObject {

	CGRect _inputRoi;
	unsigned long long _layout;
	unsigned _inputOrientation;
	unsigned long long _engineType;
	ADEspressoRunner* _espressoRunner;
	unsigned long long _rotationPreference;
	long long _rotationConstant;

}

@property (nonatomic,copy,readonly) NSString * networkVersionString; 
-(id)init;
-(NSString *)networkVersionString;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 rotationPreference:(unsigned long long)arg4 inferenceDescriptor:(id)arg5 ;
-(long long)numberOfExecutionSteps;
-(long long)solveRotationPreference:(unsigned long long)arg1 ;
-(BOOL)isLandscape:(CGRect)arg1 ;
-(id)getIntermediates;
-(long long)convertIntrensicsFrom:(CVBufferRef)arg1 cropBy:(CGRect)arg2 to:(CVBufferRef)arg3 ;
-(id)getIntermediateWithName:(id)arg1 ;
@end

