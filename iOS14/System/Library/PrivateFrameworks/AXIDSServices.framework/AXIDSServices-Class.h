/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXIDSServices.framework/AXIDSServices
*/

#import <AXIDSServices/AXIDSServices-Structs.h>
#import <AXIDSServices/AXUIClientDelegate.h>

@class NSHashTable, AXUIClient, NSArray, NSString;

@interface AXIDSServices : NSObject <AXUIClientDelegate> {

	NSHashTable* _clients;
	os_unfair_lock_s _clientsLock;
	os_unfair_lock_s _connectedDevicesLock;
	AXUIClient* _idsServerClient;
	NSArray* _cachedConnectedDevices;

}

@property (nonatomic,readonly) AXUIClient * idsServerClient;                //@synthesize idsServerClient=_idsServerClient - In the implementation block
@property (nonatomic,retain) NSArray * cachedConnectedDevices;              //@synthesize cachedConnectedDevices=_cachedConnectedDevices - In the implementation block
@property (nonatomic,readonly) NSArray * connectedDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSArray *)connectedDevices;
-(id)_init;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2 ;
-(NSArray *)cachedConnectedDevices;
-(AXUIClient *)idsServerClient;
-(id)publishData:(id)arg1 requestingResponse:(BOOL)arg2 ;
-(id)publishMessage:(id)arg1 requestingResponse:(BOOL)arg2 ;
-(id)publishResourceAtURL:(id)arg1 requestingResponse:(BOOL)arg2 ;
-(id)publishData:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(BOOL)arg3 ;
-(id)publishMessage:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(BOOL)arg3 ;
-(id)publishResourceAtURL:(id)arg1 priority:(unsigned long long)arg2 requestingResponse:(BOOL)arg3 ;
-(id)sendPublishMessageToServer:(id)arg1 ;
-(void)_handleIncomingDataWithMessage:(id)arg1 ;
-(void)_handleConnectedDevicesChanged:(id)arg1 ;
-(void)_performBlockOnClients:(/*^block*/id)arg1 ;
-(void)setCachedConnectedDevices:(NSArray *)arg1 ;
-(void)registerForIncomingData:(id)arg1 ;
-(void)deregisterForIncomingData:(id)arg1 ;
-(id)publishData:(id)arg1 ;
-(id)publishMessage:(id)arg1 ;
-(id)publishResourceAtURL:(id)arg1 ;
@end

