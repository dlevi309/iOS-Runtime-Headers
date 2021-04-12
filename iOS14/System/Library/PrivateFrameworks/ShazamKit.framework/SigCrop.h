/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface SigCrop : NSObject
+(double)signatureLength:(id)arg1 error:(id*)arg2 ;
+(id)cropSignature:(id)arg1 atPosition:(double)arg2 withLength:(double)arg3 error:(id*)arg4 ;
+(BOOL)FillUnknownError:(id*)arg1 ;
+(BOOL)ConvertException:(const exception*)arg1 toError:(id*)arg2 ;
+(BOOL)ConvertSystemError:(const system_error*)arg1 toError:(id*)arg2 ;
@end

