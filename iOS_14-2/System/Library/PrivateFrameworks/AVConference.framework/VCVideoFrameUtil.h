/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCVideoFrameUtil : NSObject
+(id)newXPCDictionaryWithCVPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_VC84)arg3 ;
+(CVBufferRef)CVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(BOOL)arg2 ;
+(SCD_Struct_VC84)CMTimeFromXPCDictionary:(id)arg1 ;
@end

