/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoFrameSamplerDelegate;
@class NSString;

@interface HMIVideoFrameSampler : HMIVideoProcessingNode <HMFLogging> {

	id<HMIVideoFrameSamplerDelegate> _delegate;

}

@property (__weak) id<HMIVideoFrameSamplerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMIVideoFrameSamplerDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoFrameSamplerDelegate>)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

