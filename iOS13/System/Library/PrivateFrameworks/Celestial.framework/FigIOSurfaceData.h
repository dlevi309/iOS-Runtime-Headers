/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <CoreFoundation/NSData.h>

@interface FigIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	unsigned long long _length;
	const void* _bytes;

}
+(void)initialize;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
@end

