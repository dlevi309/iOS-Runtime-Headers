/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIMotionDetector, HMIVideoFrameSelectorDelegate;
@class NSMutableArray, NSString;

@interface HMIVideoFrameSelector : HMIVideoProcessingNode <HMFLogging> {

	id<HMIMotionDetector> _detector;
	NSMutableArray* _candidates;
	BOOL _enabled;
	SCD_Struct_HM3 _referenceInterval;
	SCD_Struct_HM3 _targetInterval;
	SCD_Struct_HM3 _expirationInterval;
	opaqueCMSampleBufferRef _reference;
	id<HMIVideoFrameSelectorDelegate> _delegate;

}

@property (__weak) id<HMIVideoFrameSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(id)init;
-(id<HMIVideoFrameSelectorDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoFrameSelectorDelegate>)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(void)dealloc;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleReference:(opaqueCMSampleBufferRef)arg1 target:(opaqueCMSampleBufferRef)arg2 ;
-(void)_drainCandidatesThatExpiredBefore:(SCD_Struct_HM3)arg1 ;
-(void)_ensureDetectorForPixelBuffer:(CVBufferRef)arg1 ;
@end

