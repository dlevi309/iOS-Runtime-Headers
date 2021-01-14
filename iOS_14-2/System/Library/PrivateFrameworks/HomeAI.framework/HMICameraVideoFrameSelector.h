/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMICameraVideoFrameSamplerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMICameraVideoFrameSelectorDelegate, HMIMotionDetector;
@class HMICameraVideoFrameSampler, NSMutableArray, NSArray, NSString;

@interface HMICameraVideoFrameSelector : HMFObject <HMICameraVideoFrameSamplerDelegate, HMFLogging> {

	id<HMICameraVideoFrameSelectorDelegate> _delegate;
	HMICameraVideoFrameSampler* _sampler;
	NSMutableArray* _framesInternal;
	long long _maxFrameCount;
	NSMutableArray* _predictedFrames;
	id<HMIMotionDetector> _detector;
	SCD_Struct_HM3 _sampleRate;

}

@property (readonly) HMICameraVideoFrameSampler * sampler;                        //@synthesize sampler=_sampler - In the implementation block
@property (readonly) SCD_Struct_HM3 sampleRate;                                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (readonly) NSMutableArray * framesInternal;                             //@synthesize framesInternal=_framesInternal - In the implementation block
@property (readonly) long long maxFrameCount;                                     //@synthesize maxFrameCount=_maxFrameCount - In the implementation block
@property (readonly) NSMutableArray * predictedFrames;                            //@synthesize predictedFrames=_predictedFrames - In the implementation block
@property (readonly) id<HMIMotionDetector> detector;                              //@synthesize detector=_detector - In the implementation block
@property (__weak) id<HMICameraVideoFrameSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * frames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)finish;
-(long long)maxFrameCount;
-(NSArray *)frames;
-(id<HMICameraVideoFrameSelectorDelegate>)delegate;
-(HMICameraVideoFrameSampler *)sampler;
-(void)setDelegate:(id<HMICameraVideoFrameSelectorDelegate>)arg1 ;
-(id<HMIMotionDetector>)detector;
-(SCD_Struct_HM3)sampleRate;
-(id)initWithResourceAttributes:(id)arg1 sampleRate:(SCD_Struct_HM3)arg2 ;
-(BOOL)handleVideoFrame:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFinishedEarly;
-(NSMutableArray *)framesInternal;
-(NSMutableArray *)predictedFrames;
-(void)sampler:(id)arg1 didFindSample:(id)arg2 target:(id)arg3 ;
-(void)sampler:(id)arg1 didDiscardFrame:(id)arg2 ;
@end

