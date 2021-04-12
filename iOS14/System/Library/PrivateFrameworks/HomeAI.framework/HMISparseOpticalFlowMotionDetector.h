/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIMotionDetector.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSString;

@interface HMISparseOpticalFlowMotionDetector : HMFObject <HMIMotionDetector, HMFLogging> {

	NSMutableArray* _frames;
	CGSize _size;

}

@property (readonly) NSMutableArray * frames;                       //@synthesize frames=_frames - In the implementation block
@property (readonly) CGSize size;                                   //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSMutableArray *)frames;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)appendFramePixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM3)arg2 ;
-(id)detectWithGlobalMotionScore:(float*)arg1 ;
-(id)_computeOpticalFlow:(CVBufferRef)arg1 with:(CVBufferRef)arg2 globalMotionScore:(float*)arg3 ;
@end

