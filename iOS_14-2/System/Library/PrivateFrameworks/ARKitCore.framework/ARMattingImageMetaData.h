/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSString;

@interface ARMattingImageMetaData : NSObject <ARResultData> {

	double _timestamp;
	CVBufferRef _downSampledImageBuffer;
	CVBufferRef _mattingScaleImageBuffer;

}

@property (nonatomic,readonly) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef downSampledImageBuffer;               //@synthesize downSampledImageBuffer=_downSampledImageBuffer - In the implementation block
@property (nonatomic,readonly) CVBufferRef mattingScaleImageBuffer;              //@synthesize mattingScaleImageBuffer=_mattingScaleImageBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(NSString *)description;
-(void)dealloc;
-(id)initWithTimestamp:(double)arg1 downSampledImageBuffer:(CVBufferRef)arg2 mattingScaleImageBuffer:(CVBufferRef)arg3 ;
-(CVBufferRef)downSampledImageBuffer;
-(CVBufferRef)mattingScaleImageBuffer;
@end

