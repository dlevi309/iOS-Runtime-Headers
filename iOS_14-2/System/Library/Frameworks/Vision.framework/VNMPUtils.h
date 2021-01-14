/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNMPUtils : NSObject
+(unsigned long long)getHostTimeInNanos;
+(void)freeVImageBuffer:(vImage_Buffer*)arg1 ;
+(id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2 ;
+(long long)parseExifTimestamp:(id)arg1 ;
+(double)getHostTime;
@end

