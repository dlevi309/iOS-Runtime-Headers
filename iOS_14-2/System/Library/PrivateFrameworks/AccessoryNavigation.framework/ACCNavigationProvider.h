/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
*/


@protocol ACCNavigationXPCServerProtocol;
@class NSString, NSXPCConnection, NSMutableDictionary, NSMutableArray;

@interface ACCNavigationProvider : NSObject {

	NSString* _providerUID;
	NSXPCConnection* _serverConnection;
	id<ACCNavigationXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;
	NSMutableArray* _delegates;

}

@property (nonatomic,retain) NSXPCConnection * serverConnection;                           //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCNavigationXPCServerProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                            //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * delegates;                                   //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSString * providerUID;                                       //@synthesize providerUID=_providerUID - In the implementation block
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(NSXPCConnection *)serverConnection;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(NSMutableDictionary *)accessories;
-(id<ACCNavigationXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCNavigationXPCServerProtocol>)arg1 ;
-(void)dealloc;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(void)connectToServer;
-(void)routeGuidance:(id)arg1 updateInfo:(id)arg2 componentIdList:(id)arg3 ;
-(void)routeGuidance:(id)arg1 maneuverUpdateInfo:(id)arg2 componentIdList:(id)arg3 ;
-(void)routeGuidance:(id)arg1 laneGuidanceInfo:(id)arg2 componentIdList:(id)arg3 ;
-(void)objectDetection:(id)arg1 startComponentIdList:(id)arg2 objectTypes:(id)arg3 ;
-(void)objectDetection:(id)arg1 stopComponentIdList:(id)arg2 ;
-(void)accessoryNavigationAttached:(id)arg1 componentList:(id)arg2 ;
-(void)accessoryNavigationDetached:(id)arg1 ;
-(void)accessoryNavigationStartRouteGuidance:(id)arg1 componentIdList:(id)arg2 options:(unsigned long long)arg3 ;
-(void)accessoryNavigationStopRouteGuidance:(id)arg1 componentIdList:(id)arg2 ;
-(void)accessoryNavigationObjectDetection:(id)arg1 componentIdList:(id)arg2 updateInfo:(id)arg3 ;
-(void)detachAllAccessories;
-(id)delegatesImplementing:(SEL)arg1 ;
-(id)accessoryForUID:(id)arg1 ;
@end

