/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue, OS_nw_interface;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFlowMetaData, NSObject, NSData;

@interface NEAppProxyFlow : NSObject {

	NEFlowMetaData* _metaData;
	NEFlowRef _flow;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_interface> __networkInterface;

}

@property (assign) NEFlowRef flow;                                            //@synthesize flow=_flow - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_nw_interface> _networkInterface;              //@synthesize _networkInterface=__networkInterface - In the implementation block
@property (retain) NSData * applicationData; 
@property (readonly) NEFlowMetaData * metaData;                               //@synthesize metaData=_metaData - In the implementation block
@property (copy) NSObject*<OS_nw_interface> networkInterface; 
+(id)flowErrorForVPNFlowError:(long long)arg1 ;
+(CFErrorRef)copyVPNFlowErrorFromFlowError:(id)arg1 ;
+(id)copyRemoteEndpointFromFlow:(NEFlowRef)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setMetadata:(id)arg1 ;
-(NEFlowMetaData *)metaData;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(NEFlowRef)flow;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)set_networkInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(void)clearEventHandlers;
-(NSObject*<OS_nw_interface>)_networkInterface;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeReadWithError:(id)arg1 ;
-(void)closeWriteWithError:(id)arg1 ;
-(NSObject*<OS_nw_interface>)networkInterface;
-(void)setNetworkInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(void)setFlow:(NEFlowRef)arg1 ;
@end

