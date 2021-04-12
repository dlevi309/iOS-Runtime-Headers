/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@interface NPTuscanyLoopbackConnection : NSObject {

	unsigned long long _blobSizes[4];
	nw_protocol* _protocol;
	nw_frame_array_s* _currentInputFrames;
	BOOL _waitingForOutput;
	unsigned long long _currentBlobSizeIndex;

}

@property (readonly) nw_protocol* protocol; 
@property (assign) unsigned long long currentBlobSizeIndex;              //@synthesize currentBlobSizeIndex=_currentBlobSizeIndex - In the implementation block
@property (assign) BOOL waitingForOutput;                                //@synthesize waitingForOutput=_waitingForOutput - In the implementation block
-(id)init;
-(void)dealloc;
-(nw_protocol*)protocol;
-(unsigned long long)currentBlobSizeIndex;
-(void)setCurrentBlobSizeIndex:(unsigned long long)arg1 ;
-(void)handleDetachedFromProtocol;
-(unsigned)addOutputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
-(void)handleOutputFrame:(id)arg1 ;
-(void)notifyInputHandler;
-(BOOL)waitingForOutput;
-(void)setWaitingForOutput:(BOOL)arg1 ;
-(unsigned)addInputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
@end

