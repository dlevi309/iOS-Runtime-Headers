/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSMachService.h>

@class NSString;

@interface AMSMultiUserService : NSObject <AMSMachService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
+(id)machServiceName;
+(id)serviceInterface;
+(id)proxyObject;
+(id)proxyObjectAsync;
+(id)sharedConnectionAccessQueue;
+(id)_createXPCConnection;
+(void)setSharedConnection:(id)arg1 ;
+(BOOL)isConnectionEntitled:(id)arg1 ;
@end

