/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {

	BSXPCServiceConnectionRootContext* _parent;
	unsigned long long _identifier;
	BOOL _remote;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isRemote,nonatomic,readonly) BOOL remote;                //@synthesize remote=_remote - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(unsigned long long)identifier;
-(BOOL)isServer;
-(BOOL)isRemote;
-(BOOL)isClient;
-(BOOL)isChild;
-(id)endpointDescription;
-(id)_initWithParent:(id)arg1 identifier:(unsigned long long)arg2 remote:(BOOL)arg3 proem:(id)arg4 ;
@end

