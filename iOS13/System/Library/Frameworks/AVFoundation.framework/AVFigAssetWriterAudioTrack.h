/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigAssetWriterTrack.h>

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {

	NSMutableArray* _pendingAudioSampleBuffers;

}
-(void)dealloc;
-(void)prepareToEndSession;
-(BOOL)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)markEndOfDataReturningError:(id*)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 error:(id*)arg7 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_flushPendingSampleBuffersReturningError:(id*)arg1 ;
@end

