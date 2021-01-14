/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoCommandBufferDelegate.h>

@class NSString;

@interface HMIVideoCommandBufferDelegateAdapter : HMFObject <HMIVideoCommandBufferDelegate> {

	/*^block*/id _bufferWillHandleSampleBuffer;
	/*^block*/id _bufferWillFlush;
	/*^block*/id _bufferWillFinish;

}

@property (copy) id bufferWillHandleSampleBuffer;                   //@synthesize bufferWillHandleSampleBuffer=_bufferWillHandleSampleBuffer - In the implementation block
@property (copy) id bufferWillFlush;                                //@synthesize bufferWillFlush=_bufferWillFlush - In the implementation block
@property (copy) id bufferWillFinish;                               //@synthesize bufferWillFinish=_bufferWillFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buffer:(id)arg1 willHandleSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)bufferWillFlush:(id)arg1 ;
-(void)bufferWillFinish:(id)arg1 ;
-(id)bufferWillHandleSampleBuffer;
-(id)bufferWillFinish;
-(id)bufferWillFlush;
-(void)setBufferWillHandleSampleBuffer:(id)arg1 ;
-(void)setBufferWillFlush:(id)arg1 ;
-(void)setBufferWillFinish:(id)arg1 ;
@end

