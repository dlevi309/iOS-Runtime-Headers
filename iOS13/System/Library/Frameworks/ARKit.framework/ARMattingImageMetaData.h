/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

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
-(void)dealloc;
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 downSampledImageBuffer:(CVBufferRef)arg2 mattingScaleImageBuffer:(CVBufferRef)arg3 ;
-(CVBufferRef)downSampledImageBuffer;
-(CVBufferRef)mattingScaleImageBuffer;
@end

