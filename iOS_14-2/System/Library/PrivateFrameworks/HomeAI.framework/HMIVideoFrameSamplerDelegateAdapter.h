/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoFrameSamplerDelegate.h>

@class NSString;

@interface HMIVideoFrameSamplerDelegateAdapter : HMFObject <HMIVideoFrameSamplerDelegate> {

	/*^block*/id _frameSamplerDidSampleFrame;
	/*^block*/id _frameSamplerDidDropFrame;

}

@property (copy) id frameSamplerDidSampleFrame;                     //@synthesize frameSamplerDidSampleFrame=_frameSamplerDidSampleFrame - In the implementation block
@property (copy) id frameSamplerDidDropFrame;                       //@synthesize frameSamplerDidDropFrame=_frameSamplerDidDropFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2 ;
-(void)frameSampler:(id)arg1 didDropFrame:(opaqueCMSampleBufferRef)arg2 ;
-(id)frameSamplerDidSampleFrame;
-(id)frameSamplerDidDropFrame;
-(void)setFrameSamplerDidSampleFrame:(id)arg1 ;
-(void)setFrameSamplerDidDropFrame:(id)arg1 ;
@end

