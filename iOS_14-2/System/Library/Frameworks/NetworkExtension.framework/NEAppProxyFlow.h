/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue, OS_nw_interface;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFlowMetaData, NSString, NSObject, NSData;

@interface NEAppProxyFlow : NSObject {

	NEFlowMetaData* _metaData;
	NSString* _remoteHostname;
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
@property (readonly) NSString * remoteHostname;                               //@synthesize remoteHostname=_remoteHostname - In the implementation block
+(id)flowErrorForVPNFlowError:(long long)arg1 ;
+(CFErrorRef)copyVPNFlowErrorFromFlowError:(id)arg1 ;
+(id)copyRemoteEndpointFromFlow:(NEFlowRef)arg1 ;
-(NEFlowRef)flow;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)set_networkInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(void)clearEventHandlers;
-(NSObject*<OS_nw_interface>)_networkInterface;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeReadWithError:(id)arg1 ;
-(NSString *)remoteHostname;
-(void)closeWriteWithError:(id)arg1 ;
-(NSObject*<OS_nw_interface>)networkInterface;
-(void)setNetworkInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(id)description;
-(NSData *)applicationData;
-(NEFlowMetaData *)metaData;
-(void)setFlow:(NEFlowRef)arg1 ;
-(unsigned long long)hash;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

