/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDCFDataBuffer : CFPDDataBuffer {

	CFDataRef data;

}
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(CFDataRef)copyCFData;
-(id)copyXPCData;
-(id)initWithCFData:(CFDataRef)arg1 ;
@end

