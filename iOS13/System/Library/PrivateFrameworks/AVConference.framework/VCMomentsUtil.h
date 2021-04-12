/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCMomentsUtil : NSObject
+(OpaqueVTPixelTransferSessionRef)allocTransferSession;
+(CVBufferRef)createResizeFrame:(CVBufferRef)arg1 transferSession:(OpaqueVTPixelTransferSessionRef)arg2 bufferPool:(CVPixelBufferPoolRef)arg3 ;
+(int)setupBufferPool:(_CVPixelBufferPool*)arg1 width:(double)arg2 height:(double)arg3 ;
+(BOOL)pixelBufferPool:(CVPixelBufferPoolRef)arg1 matchesWidth:(int)arg2 height:(int)arg3 ;
@end

