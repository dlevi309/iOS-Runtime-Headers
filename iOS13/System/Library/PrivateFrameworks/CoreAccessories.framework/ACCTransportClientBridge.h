/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/

#import <libobjc.A.dylib/ACCTransportClientDelegate.h>

@class ACCTransportClient, NSString;

@interface ACCTransportClientBridge : NSObject <ACCTransportClientDelegate> {

	ACCTransportClient* _transportClient;
	/*^block*/id _connectionAuthStatusChangedHandler;
	/*^block*/id _connectionPropertiesChangedHandler;
	/*^block*/id _endpointPropertiesChangedHandler;

}

@property (nonatomic,retain) ACCTransportClient * transportClient;              //@synthesize transportClient=_transportClient - In the implementation block
@property (nonatomic,copy) id connectionAuthStatusChangedHandler;               //@synthesize connectionAuthStatusChangedHandler=_connectionAuthStatusChangedHandler - In the implementation block
@property (nonatomic,copy) id connectionPropertiesChangedHandler;               //@synthesize connectionPropertiesChangedHandler=_connectionPropertiesChangedHandler - In the implementation block
@property (nonatomic,copy) id endpointPropertiesChangedHandler;                 //@synthesize endpointPropertiesChangedHandler=_endpointPropertiesChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBridge;
-(id)init;
-(id)connectionAuthStatusChangedHandler;
-(id)connectionPropertiesChangedHandler;
-(id)endpointPropertiesChangedHandler;
-(void)transportClient:(id)arg1 authStatusDidChange:(BOOL)arg2 forConnectionWithUUID:(id)arg3 ;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4 ;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5 ;
-(ACCTransportClient *)transportClient;
-(void)setTransportClient:(ACCTransportClient *)arg1 ;
-(void)setConnectionAuthStatusChangedHandler:(id)arg1 ;
-(void)setConnectionPropertiesChangedHandler:(id)arg1 ;
-(void)setEndpointPropertiesChangedHandler:(id)arg1 ;
@end

