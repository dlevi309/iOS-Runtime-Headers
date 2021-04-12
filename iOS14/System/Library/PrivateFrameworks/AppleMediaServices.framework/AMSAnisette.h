/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>

@class NSString;

@interface AMSAnisette : NSObject <AMSBagConsumer_Project>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(BOOL)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
+(id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2 ;
+(id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4 ;
+(id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5 ;
+(unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
+(void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(BOOL)_shouldRetryAfterError:(id)arg1 ;
+(id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 ;
@end

