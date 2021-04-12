/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class Protocol, NSXPCInterface, NSXPCListener, NSString, NSArray;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {

	Class _sessionClass;
	Protocol* _serviceProtocol;
	NSXPCInterface* _clientInterface;
	NSXPCListener* _listener;
	NSString* _persistentStoreName;
	NSString* _managedObjectModelPath;
	NSArray* _allowedEntitlements;
	NSString* _serviceName;

}

@property (retain) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSXPCInterface * clientInterface;                //@synthesize clientInterface=_clientInterface - In the implementation block
@property (retain) NSString * persistentStoreName;                  //@synthesize persistentStoreName=_persistentStoreName - In the implementation block
@property (retain) NSString * managedObjectModelPath;               //@synthesize managedObjectModelPath=_managedObjectModelPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)persistentStoreName;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(NSXPCInterface *)clientInterface;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setClientInterface:(NSXPCInterface *)arg1 ;
-(BOOL)_verifyAuthorizationForConnection:(id)arg1 ;
-(id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2 ;
-(void)restrictToClientsWithEntitlements:(id)arg1 ;
-(void)beginAcceptingConnections;
-(void)setPersistentStoreName:(NSString *)arg1 ;
-(NSString *)managedObjectModelPath;
-(void)setManagedObjectModelPath:(NSString *)arg1 ;
@end

