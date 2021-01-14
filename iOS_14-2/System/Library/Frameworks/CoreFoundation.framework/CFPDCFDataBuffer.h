/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDCFDataBuffer : CFPDDataBuffer {

	CFDataRef data;

}
-(CFDataRef)copyCFData;
-(id)initWithCFData:(CFDataRef)arg1 ;
-(void*)bytes;
-(unsigned long long)length;
-(id)copyXPCData;
-(void)dealloc;
@end

