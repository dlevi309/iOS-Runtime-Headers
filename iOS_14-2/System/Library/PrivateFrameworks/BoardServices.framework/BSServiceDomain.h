/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)init;
@end

