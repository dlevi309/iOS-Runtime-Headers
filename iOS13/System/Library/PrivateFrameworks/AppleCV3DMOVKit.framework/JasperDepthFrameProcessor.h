/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
@class JDDepthProcessor;

@interface JasperDepthFrameProcessor : NSObject {

	JDDepthProcessor* _jdProc;

}

@property (retain) JDDepthProcessor * jdProc;              //@synthesize jdProc=_jdProc - In the implementation block
-(id)process:(CVBufferRef)arg1 ;
-(id)initWithCalibrationDict:(id)arg1 ;
-(JDDepthProcessor *)jdProc;
-(void)setJdProc:(JDDepthProcessor *)arg1 ;
@end

