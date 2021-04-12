/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <CoreFoundation/NSData.h>

@interface PLIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned long long _length;

}
+(id)dataWithIOSurface:(void*)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithIOSurface:(void*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

