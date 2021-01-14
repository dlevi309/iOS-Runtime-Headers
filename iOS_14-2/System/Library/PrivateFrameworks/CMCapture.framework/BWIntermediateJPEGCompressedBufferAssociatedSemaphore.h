/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, NSString;

@interface BWIntermediateJPEGCompressedBufferAssociatedSemaphore : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _name;
	SCD_Struct_BW8 _pts;

}
-(id)initWithSemaphore:(id)arg1 name:(id)arg2 presentationTimeStamp:(SCD_Struct_BW8)arg3 ;
-(void)dealloc;
@end

