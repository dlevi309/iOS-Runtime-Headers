/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)endpointName;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)numFloors:(/*^block*/id)arg1 ;
-(void)doSynchronousXPC:(/*^block*/id)arg1 description:(const char*)arg2 waitForever:(BOOL)arg3 ;
-(void)prefetch:(id)arg1 ;
-(void)onQueuePrefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3 ;
-(void)prefetchSynchronous:(id)arg1 ;
-(void)eraseEverything;
-(void)onQueueEraseEverything:(/*^block*/id)arg1 ;
-(void)onQueueShutdown;
-(void)onQueueNumFloors:(/*^block*/id)arg1 ;
-(id)remoteObjectProtocol;
-(void)withinQueueInvalidateState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
@end

