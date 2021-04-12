/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVAirTransportTransformationProtocol, AVAirTransportDelegate;
@class NSMutableArray, NSData;

@interface AVAirTransport : NSObject {

	NSMutableArray* _outputQueue;
	NSData* _leftoverInputData;
	NSMutableArray* _requestCompletions;
	id<AVAirTransportTransformationProtocol> _streamDataTransformer;
	id<AVAirTransportDelegate> _delegate;
	NSMutableArray* _receiveResponseBlocks;

}

@property (nonatomic,readonly) NSMutableArray * receiveResponseBlocks;                                    //@synthesize receiveResponseBlocks=_receiveResponseBlocks - In the implementation block
@property (nonatomic,readonly) BOOL canWrite; 
@property (nonatomic,retain) id<AVAirTransportTransformationProtocol> streamDataTransformer;              //@synthesize streamDataTransformer=_streamDataTransformer - In the implementation block
@property (nonatomic,readonly) BOOL isReadyToSend; 
@property (assign,nonatomic,__weak) id<AVAirTransportDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(id)eventThread;
+(id)eventRunLoop;
+(id)airTransportQueue;
+(BOOL)_isRunningOnAirChannelQueue;
+(void)startEventThreadIfNecessary;
+(void)__performBlock:(/*^block*/id)arg1 ;
+(id)channelWithInput:(id)arg1 output:(id)arg2 ;
+(void)performAsync:(/*^block*/id)arg1 ;
+(void)performSync:(/*^block*/id)arg1 ;
-(id)_initPrivate;
-(void)sendResponse:(id)arg1 ;
-(void)open;
-(id<AVAirTransportDelegate>)delegate;
-(void)close;
-(void)writeMore;
-(BOOL)isReadyToSend;
-(void)terminatePendingRequests;
-(void)performOnAirChannelQueueSync:(/*^block*/id)arg1 ;
-(id<AVAirTransportTransformationProtocol>)streamDataTransformer;
-(NSMutableArray *)receiveResponseBlocks;
-(id)requestCompletions;
-(void)sendObject:(id)arg1 receiveResponse:(/*^block*/id)arg2 ;
-(void)setStreamDataTransformer:(id<AVAirTransportTransformationProtocol>)arg1 ;
-(void)setDelegate:(id<AVAirTransportDelegate>)arg1 ;
-(id)description;
-(void)writeData:(id)arg1 ;
-(void)invalidate;
-(BOOL)canWrite;
-(void)dealloc;
-(long long)_writeData:(id)arg1 ;
@end

