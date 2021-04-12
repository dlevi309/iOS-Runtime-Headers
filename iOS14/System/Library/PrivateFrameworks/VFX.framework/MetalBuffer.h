/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@protocol MTLBuffer;
@interface MetalBuffer : NSObject {

	id<MTLBuffer> _buffer;
	double _lastReuseTime;

}

@property (nonatomic,retain) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) double lastReuseTime;              //@synthesize lastReuseTime=_lastReuseTime - In the implementation block
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)buffer;
-(id)initWithBuffer:(id)arg1 ;
-(double)lastReuseTime;
-(void)setLastReuseTime:(double)arg1 ;
@end

