/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class ARImageData, NSString;

@interface ARMLIntermediateDownScalingResultData : NSObject <ARResultData> {

	double _timestamp;
	CVBufferRef _pixelBuffer;
	ARImageData* _originalImageData;

}

@property (nonatomic,readonly) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                      //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) ARImageData * originalImageData;              //@synthesize originalImageData=_originalImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(CVBufferRef)pixelBuffer;
-(ARImageData *)originalImageData;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 timestamp:(double)arg2 originalImageData:(id)arg3 ;
@end

