/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSecurityService.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface AFSecurityConnection : NSObject <AFSecurityService> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dispatchCallbackForProcessedDataMap:(id)arg1 errorMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)_processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)setKeychainValue:(id)arg1 forKey:(id)arg2 accountIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_invalidateConnection;
-(void)invalidate;
-(id)_connection;
-(void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

