/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootClientServiceContext : BSXPCServiceConnectionRootContext {

	BOOL _privileged;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (getter=isPrivileged,nonatomic,readonly) BOOL privileged;              //@synthesize privileged=_privileged - In the implementation block
+(id)uniqueClientContextWithServiceName:(id)arg1 privileged:(BOOL)arg2 ;
-(NSString *)serviceName;
-(BOOL)isClient;
-(id)_initWithService:(id)arg1 privileged:(BOOL)arg2 ;
-(BOOL)isPrivileged;
@end

