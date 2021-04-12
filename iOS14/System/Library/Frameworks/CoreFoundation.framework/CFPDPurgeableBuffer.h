/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	BOOL safe;
	BOOL usedMalloc;

}
-(id)initWithPropertyList:(void*)arg1 ;
-(BOOL)beginAccessing;
-(void*)bytes;
-(unsigned long long)length;
-(void)endAccessing;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(BOOL)purgable;
-(void)dealloc;
@end

