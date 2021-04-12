/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/HCHeardControllerProtocol.h>

@protocol OS_xpc_object;
@class NSObject, NSArray, NSDictionary, NSString;

@interface AXHeardController : NSObject <HCHeardControllerProtocol> {

	NSObject*<OS_xpc_object> _service;
	NSArray* _clients;
	NSDictionary* _handlers;

}

@property (nonatomic,retain) NSArray * clients;                     //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSDictionary * handlers;               //@synthesize handlers=_handlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
+(id)entitlementsForMessageID:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)clients;
-(NSDictionary *)handlers;
-(void)setHandlers:(NSDictionary *)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(void)setClients:(NSArray *)arg1 ;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2 ;
-(unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1 ;
-(void)addHandler:(id)arg1 andBlock:(/*^block*/id)arg2 forMessageIdentifier:(unsigned long long)arg3 ;
-(BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2 ;
-(void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)startServer;
-(void)registerFakeClient:(id)arg1 ;
@end

