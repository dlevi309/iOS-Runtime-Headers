/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface MOVStreamFrameConverter : NSObject {

	CVPixelBufferPoolRef _pool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BOOL _transferSessionUsageDisabled;

}

@property (assign) BOOL transferSessionUsageDisabled;              //@synthesize transferSessionUsageDisabled=_transferSessionUsageDisabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(CVBufferRef)convertPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 extendedPixelsPerRow:(unsigned long long)arg4 ;
-(BOOL)transferSessionUsageDisabled;
-(void)setTransferSessionUsageDisabled:(BOOL)arg1 ;
@end

