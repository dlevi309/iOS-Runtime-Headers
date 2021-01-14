/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {

	unsigned long long _unique;
	AQ __uniqueChildCounter;
	NSString* _eDesc;

}
-(BOOL)isRoot;
-(id)endpointDescription;
-(id)debugDescription;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

