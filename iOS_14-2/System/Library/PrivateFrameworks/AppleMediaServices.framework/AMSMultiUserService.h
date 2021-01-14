/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSMachService.h>

@class NSString;

@interface AMSMultiUserService : NSObject <AMSMachService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isConnectionEntitled:(id)arg1 ;
+(id)sharedConnectionAccessQueue;
+(id)_createXPCConnection;
+(id)proxyObject;
+(id)machServiceName;
+(id)serviceInterface;
+(id)sharedConnection;
+(id)proxyObjectAsync;
+(void)setSharedConnection:(id)arg1 ;
@end

