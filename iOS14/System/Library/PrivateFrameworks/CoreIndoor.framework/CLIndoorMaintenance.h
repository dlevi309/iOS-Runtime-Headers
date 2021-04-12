/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdown;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(void)prefetch:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(id)remoteObjectProtocol;
-(id)endpointName;
-(void)onQueueEraseEverything:(/*^block*/id)arg1 ;
-(void)onQueuePrefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3 ;
-(void)onQueueNumFloors:(/*^block*/id)arg1 ;
-(void)withinQueueInvalidateState;
-(void)numFloors:(/*^block*/id)arg1 ;
-(void)prefetchSynchronous:(id)arg1 ;
-(void)doSynchronousXPC:(/*^block*/id)arg1 description:(const char*)arg2 waitForever:(BOOL)arg3 ;
-(void)eraseEverything;
-(void)onQueueShutdown;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)withinQueueReinitializeRemoteState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
@end

