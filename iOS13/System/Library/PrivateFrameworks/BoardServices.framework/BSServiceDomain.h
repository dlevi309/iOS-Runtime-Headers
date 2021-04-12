/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


#import <BoardServices/BoardServices-Structs.h>
@class BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSString, NSDictionary, NSMutableArray;

@interface BSServiceDomain : NSObject {

	BSServiceDomainSpecification* _specification;
	os_unfair_lock_s _lock;
	BSXPCServiceConnectionListener* _xpcListener;
	NSString* _listenerEndpointDescription;
	NSDictionary* _identifierToService;
	NSMutableArray* _lock_incomingConnections;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> listenerEndpoint; 
@property (nonatomic,readonly) BOOL listenerEndpointIsNonLaunching; 
@property (nonatomic,readonly) NSString * listenerEndpointDescription; 
-(id)init;
-(NSString *)identifier;
-(NSObject*<OS_xpc_object>)listenerEndpoint;
-(id)_initWithSpecification:(id)arg1 ;
-(void)_disableLaunchWhitelist;
-(BOOL)listenerEndpointIsNonLaunching;
-(NSString *)listenerEndpointDescription;
-(id)registerListener:(id)arg1 ;
@end

