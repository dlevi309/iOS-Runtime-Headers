/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDHealthStoreProviderServer.h>

@protocol HDHealthStoreProviderServer <NSObject>
@required
-(void)remote_fetchForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchAvailableIdentifiersWithCompletion:(/*^block*/id)arg1;
-(void)remote_requestAuthorizationToNewIdentifierWithCompletion:(/*^block*/id)arg1;
-(void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3;

@end


@class NSString;

@interface HDHealthStoreProviderServer : HDStandardTaskServer <HDHealthStoreProviderServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)remote_fetchForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchAvailableIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_requestAuthorizationToNewIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)profileManager;
-(id)exportedInterface;
-(id)remoteInterface;
-(BOOL)clientMayAccessProfile:(id)arg1 ;
@end

