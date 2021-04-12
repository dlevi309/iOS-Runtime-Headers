/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCVideoFrameUtil : NSObject
+(CVBufferRef)CVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(BOOL)arg2 ;
+(SCD_Struct_AV77)CMTimeFromXPCDictionary:(id)arg1 ;
+(id)newXPCDictionaryWithCVPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_AV77)arg3 ;
@end

