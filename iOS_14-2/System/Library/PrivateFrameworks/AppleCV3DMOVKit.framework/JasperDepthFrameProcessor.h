/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
@class JDDepthProcessor;

@interface JasperDepthFrameProcessor : NSObject {

	JDDepthProcessor* _jdProc;

}

@property (nonatomic,retain) JDDepthProcessor * jdProc;              //@synthesize jdProc=_jdProc - In the implementation block
-(JDDepthProcessor *)jdProc;
-(id)process:(CVBufferRef)arg1 ;
-(id)initWithCalibrationDict:(id)arg1 ;
-(void)setJdProc:(JDDepthProcessor *)arg1 ;
@end

