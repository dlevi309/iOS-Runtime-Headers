/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIImage, CIContext;

@interface CIPerspectiveAutoCalc : NSObject {

	CIImage* img;
	CIContext* ctx;
	SCD_Struct_CI31 config;
	double pitch;
	double yaw;
	double roll;
	double confidence;
	CIImage* debugImage;
	long long pitchFailureReason;
	long long yawFailureReason;
	BOOL generateDebugImage;

}

@property (readonly) double pitch; 
@property (readonly) double yaw; 
@property (readonly) double roll; 
@property (readonly) double confidence; 
@property (assign) BOOL generateDebugImage; 
@property (readonly) CIImage * debugImage; 
@property (readonly) long long pitchFailureReason; 
@property (readonly) long long yawFailureReason; 
-(void)dealloc;
-(double)confidence;
-(id)initWithContext:(id)arg1 image:(id)arg2 config:(const SCD_Struct_CI32*)arg3 ;
-(BOOL)compute;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(BOOL)generateDebugImage;
-(void)setGenerateDebugImage:(BOOL)arg1 ;
-(CIImage *)debugImage;
-(long long)pitchFailureReason;
-(long long)yawFailureReason;
@end

