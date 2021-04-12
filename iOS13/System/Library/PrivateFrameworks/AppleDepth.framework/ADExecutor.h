/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADEspressoGenericExecutor, NSString;

@interface ADExecutor : NSObject {

	CGRect _inputRoi;
	unsigned long long _layout;
	unsigned _inputOrientation;
	unsigned long long _engineType;
	ADEspressoGenericExecutor* _espressoExecutor;

}

@property (nonatomic,copy,readonly) NSString * networkVersionString; 
-(id)init;
-(NSString *)networkVersionString;
-(CVBufferRef)wrapEspressoBufferAsPixelBuffer:(id)arg1 ;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 espressoInputNamesForBind:(id)arg4 espressoOutputNamesForBind:(id)arg5 inferenceDescriptor:(id)arg6 ;
-(long long)solveRotationPreference:(unsigned long long)arg1 ;
-(long long)convertIntrensicsFrom:(CVBufferRef)arg1 cropBy:(CGRect)arg2 to:(CVBufferRef)arg3 ;
-(id)getIntermediates;
@end

