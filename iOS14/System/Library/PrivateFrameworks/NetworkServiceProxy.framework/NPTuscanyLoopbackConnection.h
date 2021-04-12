/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(nw_protocol*)protocol;
-(void)handleOutputFrame:(id)arg1 ;
-(unsigned long long)currentBlobSizeIndex;
-(void)setCurrentBlobSizeIndex:(unsigned long long)arg1 ;
-(void)handleDetachedFromProtocol;
-(unsigned)addOutputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
-(unsigned)addInputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
-(void)notifyInputHandler;
-(void)dealloc;
-(BOOL)waitingForOutput;
-(void)setWaitingForOutput:(BOOL)arg1 ;
@end

