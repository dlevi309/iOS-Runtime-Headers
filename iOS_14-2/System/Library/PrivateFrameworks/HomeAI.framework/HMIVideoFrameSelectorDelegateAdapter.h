/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoFrameSelectorDelegate.h>

@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate> {

	/*^block*/id _frameSelectorDidSelectFrame;

}

@property (copy) id frameSelectorDidSelectFrame;              //@synthesize frameSelectorDidSelectFrame=_frameSelectorDidSelectFrame - In the implementation block
-(void)frameSelector:(id)arg1 didSelectFrame:(opaqueCMSampleBufferRef)arg2 detections:(id)arg3 ;
-(id)frameSelectorDidSelectFrame;
-(void)setFrameSelectorDidSelectFrame:(id)arg1 ;
@end

