/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {

	unsigned long long _unique;
	AQ __uniqueChildCounter;
	NSString* _eDesc;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(BOOL)isRoot;
-(id)endpointDescription;
-(id)_initWithType:(char)arg1 eDesc:(id)arg2 ;
-(id)uniqueChildContext;
-(id)childContextWithRemoteIdentifier:(unsigned long long)arg1 ;
@end

