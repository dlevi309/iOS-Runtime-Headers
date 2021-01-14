/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {

	BSXPCServiceConnectionRootContext* _parent;
	BOOL _remote;
	unsigned long long _identifier;

}
-(BOOL)isServer;
-(BOOL)isChild;
-(id)endpointDescription;
-(id)debugDescription;
-(BOOL)isClient;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

