/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARSensorData.h>

@class NSString;

@interface ARAudioData : NSObject <ARSensorData> {

	double _timestamp;
	opaqueCMSampleBufferRef _sampleBuffer;

}

@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
@end

