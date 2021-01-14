/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoRetimerDelegate.h>

@class NSString;

@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate> {

	/*^block*/id _retimerDidRetimeSampleBuffer;

}

@property (copy) id retimerDidRetimeSampleBuffer;                   //@synthesize retimerDidRetimeSampleBuffer=_retimerDidRetimeSampleBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)retimer:(id)arg1 didRetimeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)retimerDidRetimeSampleBuffer;
-(void)setRetimerDidRetimeSampleBuffer:(id)arg1 ;
@end

