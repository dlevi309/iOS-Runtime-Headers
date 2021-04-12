/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_nw_context;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject;

@interface NELoopbackConnection : NSObject {

	unsigned long long _blobSizes[4];
	nw_protocol* _protocol;
	nw_frame_array_s* _currentInputFrames;
	BOOL _outputFinished;
	NSObject*<OS_nw_context> _context;
	unsigned long long _currentBlobSizeIndex;
	unsigned long long _totalBytesReceived;

}

@property (readonly) nw_protocol* protocol; 
@property (readonly) NSObject*<OS_nw_context> context;                   //@synthesize context=_context - In the implementation block
@property (assign) unsigned long long currentBlobSizeIndex;              //@synthesize currentBlobSizeIndex=_currentBlobSizeIndex - In the implementation block
@property (assign) BOOL outputFinished;                                  //@synthesize outputFinished=_outputFinished - In the implementation block
@property (assign) unsigned long long totalBytesReceived;                //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
-(void)dealloc;
-(nw_protocol*)protocol;
-(NSObject*<OS_nw_context>)context;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)totalBytesReceived;
-(unsigned long long)currentBlobSizeIndex;
-(void)setCurrentBlobSizeIndex:(unsigned long long)arg1 ;
-(BOOL)outputFinished;
-(void)setOutputFinished:(BOOL)arg1 ;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(void)handleDetachedFromProtocol;
-(unsigned)addOutputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
-(unsigned)addInputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 outIsEOF:(BOOL*)arg5 ;
-(void)handleOutputFinished;
-(void)handleOutputFrame:(id)arg1 ;
-(void)notifyInputHandler;
@end

