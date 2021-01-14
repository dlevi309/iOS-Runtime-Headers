/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/RBSServiceDelegate.h>

@class BSServicesConfiguration, NSDictionary, NSMutableDictionary, NSMapTable, RBSService, NSString;

@interface BSServiceManager : NSObject <RBSServiceDelegate> {

	BSServicesConfiguration* _configuration;
	NSDictionary* _identifierToDomain;
	os_unfair_lock_s _lock;
	BOOL _lock_bootstrapped;
	unsigned long long _lock_bootstrapExtensions;
	NSMutableDictionary* _lock_endpointToOutgoingRootConnections;
	NSMutableDictionary* _lock_inheritanceToEndpoint;
	NSMapTable* _lock_endpointToInheritances;
	NSMutableDictionary* _lock_serviceIdentifierToEndpoints;
	NSMutableDictionary* _lock_serviceIdentifierToMonitors;
	os_unfair_lock_s _callOutLock;
	NSMutableDictionary* _callOutLock_serviceIdentifierToEndpointsToEnvironments;
	RBSService* _RBSService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 didLoseInheritances:(id)arg2 ;
-(NSString *)debugDescription;
-(void)service:(id)arg1 didReceiveInheritances:(id)arg2 ;
@end

