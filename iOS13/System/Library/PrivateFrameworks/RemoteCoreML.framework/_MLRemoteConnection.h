/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@protocol OS_nw_connection, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, _MLNetworking, _MLNetworkOptions, _MLNetworkPacket, NSMutableData;

@interface _MLRemoteConnection : NSObject {

	NSObject*<OS_nw_connection> _connection;
	_MLNetworking* _nwObj;
	_MLNetworkOptions* _nwOptions;
	_MLNetworkPacket* _packet;
	NSMutableData* _outputResult;
	unsigned long long _jobCount;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSObject*<OS_dispatch_queue> _q;

}

@property (nonatomic,readonly) NSObject*<OS_nw_connection> connection;                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) _MLNetworking * nwObj;                                   //@synthesize nwObj=_nwObj - In the implementation block
@property (nonatomic,readonly) _MLNetworkOptions * nwOptions;                           //@synthesize nwOptions=_nwOptions - In the implementation block
@property (nonatomic,readonly) _MLNetworkPacket * packet;                               //@synthesize packet=_packet - In the implementation block
@property (nonatomic,retain) NSMutableData * outputResult;                              //@synthesize outputResult=_outputResult - In the implementation block
@property (nonatomic,readonly) unsigned long long jobCount;                             //@synthesize jobCount=_jobCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;                        //@synthesize q=_q - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(NSObject*<OS_nw_connection>)connection;
-(NSObject*<OS_dispatch_queue>)q;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(BOOL)loadFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(_MLNetworkPacket *)packet;
-(NSMutableData *)outputResult;
-(unsigned long long)jobCount;
-(_MLNetworkOptions *)nwOptions;
-(void)doReceive:(id)arg1 context:(id)arg2 isComplete:(BOOL)arg3 error:(id)arg4 ;
-(_MLNetworking *)nwObj;
-(void)setOutputResult:(NSMutableData *)arg1 ;
-(BOOL)sendDataAndWaitForAcknowledgementOrTimeout:(id)arg1 ;
-(BOOL)predictionFromURL:(id)arg1 features:(id)arg2 output:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)unloadFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)send:(id)arg1 options:(id)arg2 ;
@end

