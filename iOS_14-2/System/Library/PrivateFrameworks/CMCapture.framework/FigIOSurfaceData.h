/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CoreFoundation/NSData.h>

@interface FigIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	unsigned long long _length;
	const void* _bytes;

}
+(void)initialize;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

