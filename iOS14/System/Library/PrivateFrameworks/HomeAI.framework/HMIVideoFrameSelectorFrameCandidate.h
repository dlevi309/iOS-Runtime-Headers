/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMIVideoFrameSelectorFrameCandidate : HMFObject {

	float _score;
	opaqueCMSampleBufferRef _sbuf;
	NSArray* _detections;

}

@property (readonly) opaqueCMSampleBufferRef sbuf;              //@synthesize sbuf=_sbuf - In the implementation block
@property (readonly) float score;                               //@synthesize score=_score - In the implementation block
@property (readonly) NSArray * detections;                      //@synthesize detections=_detections - In the implementation block
-(float)score;
-(opaqueCMSampleBufferRef)sbuf;
-(id)description;
-(void)dealloc;
-(NSArray *)detections;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 score:(float)arg2 detections:(id)arg3 ;
@end

