/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigAssetWriterTrack.h>

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {

	NSMutableArray* _pendingAudioSampleBuffers;

}
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 error:(id*)arg7 ;
-(void)prepareToEndSession;
-(void)dealloc;
-(BOOL)_flushPendingSampleBuffersReturningError:(id*)arg1 ;
-(BOOL)markEndOfDataReturningError:(id*)arg1 ;
@end

