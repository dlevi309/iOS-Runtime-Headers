/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSMutableArray, NSArray;

@interface BWStillImageProcessorOutputRouter : NSObject {

	/*^block*/id _outputSampleBufferRouter;
	NSMutableArray* _bypassedProcessorTypes;

}

@property (nonatomic,readonly) id outputSampleBufferRouter;                    //@synthesize outputSampleBufferRouter=_outputSampleBufferRouter - In the implementation block
@property (nonatomic,readonly) NSArray * bypassedProcessorsTypes; 
-(id)initWithOutputSampleBufferRouter:(/*^block*/id)arg1 ;
-(id)initByRetainingOutputSampleBufferRouter:(/*^block*/id)arg1 ;
-(void)addBypassedProcessorType:(unsigned long long)arg1 ;
-(NSArray *)bypassedProcessorsTypes;
-(id)outputSampleBufferRouter;
-(void)dealloc;
@end

