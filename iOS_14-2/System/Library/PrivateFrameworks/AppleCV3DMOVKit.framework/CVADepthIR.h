/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
@interface CVADepthIR : NSObject {

	double _timestamp;
	CVBufferRef _dataBuffer;

}

@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CVBufferRef dataBuffer;              //@synthesize dataBuffer=_dataBuffer - In the implementation block
-(double)timestamp;
-(CVBufferRef)dataBuffer;
-(void)setTimestamp:(double)arg1 ;
-(void)setDataBuffer:(CVBufferRef)arg1 ;
-(id)initWithPixelBufferRef:(CVBufferRef)arg1 timestamp:(double)arg2 ;
@end

