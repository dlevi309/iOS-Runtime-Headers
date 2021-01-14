/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/HCHeardControllerProtocol.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_xpc_object;
@class AXDispatchTimer, NSObject, NSArray, NSDictionary, NSString;

@interface AXHeardController : NSObject <HCHeardControllerProtocol, UNUserNotificationCenterDelegate> {

	AXDispatchTimer* _transparencyHysteresisTimer;
	NSObject*<OS_xpc_object> _service;
	BOOL _finishedSetup;
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
-(NSArray *)clients;
-(NSDictionary *)handlers;
-(void)setHandlers:(NSDictionary *)arg1 ;
-(unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)handleNewConnection:(id)arg1 ;
-(void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2 ;
-(void)continueSetup;
-(void)addHandler:(id)arg1 andBlock:(/*^block*/id)arg2 forMessageIdentifier:(unsigned long long)arg3 ;
-(void)startServer;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2 ;
-(void)updatePersonalAudioSettingsOnAccessories;
-(void)setClients:(NSArray *)arg1 ;
-(void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)registerFakeClient:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

