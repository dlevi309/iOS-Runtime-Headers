/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMICameraVideoFrameSamplerDelegate;
@class HMICameraVideoResourceAttributes, NSMutableArray, HMICameraVideoFrame, NSString;

@interface HMICameraVideoFrameSampler : HMFObject <HMFLogging> {

	BOOL _markedAsFinished;
	id<HMICameraVideoFrameSamplerDelegate> _delegate;
	HMICameraVideoResourceAttributes* _attributes;
	NSMutableArray* _unmatchedSampleFrames;
	HMICameraVideoFrame* _frame;
	SCD_Struct_HM3 _targetInterval;
	SCD_Struct_HM3 _sampleInterval;

}

@property (readonly) SCD_Struct_HM3 targetInterval;                              //@synthesize targetInterval=_targetInterval - In the implementation block
@property (readonly) HMICameraVideoResourceAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (readonly) SCD_Struct_HM3 sampleInterval;                              //@synthesize sampleInterval=_sampleInterval - In the implementation block
@property (readonly) NSMutableArray * unmatchedSampleFrames;                     //@synthesize unmatchedSampleFrames=_unmatchedSampleFrames - In the implementation block
@property (retain) HMICameraVideoFrame * frame;                                  //@synthesize frame=_frame - In the implementation block
@property (getter=isMarkedAsFinished) BOOL markedAsFinished;                     //@synthesize markedAsFinished=_markedAsFinished - In the implementation block
@property (__weak) id<HMICameraVideoFrameSamplerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)finish;
-(SCD_Struct_HM3)sampleInterval;
-(id<HMICameraVideoFrameSamplerDelegate>)delegate;
-(HMICameraVideoFrame *)frame;
-(HMICameraVideoResourceAttributes *)attributes;
-(void)setDelegate:(id<HMICameraVideoFrameSamplerDelegate>)arg1 ;
-(void)setFrame:(HMICameraVideoFrame *)arg1 ;
-(BOOL)isFinishedEarly;
-(id)initWithResourceAttributes:(id)arg1 sampleRate:(SCD_Struct_HM3)arg2 targetInterval:(SCD_Struct_HM3)arg3 ;
-(BOOL)appendFrame:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_HM3)targetInterval;
-(NSMutableArray *)unmatchedSampleFrames;
-(BOOL)isMarkedAsFinished;
-(BOOL)_appendFrame:(id)arg1 error:(id*)arg2 ;
-(void)setMarkedAsFinished:(BOOL)arg1 ;
@end

