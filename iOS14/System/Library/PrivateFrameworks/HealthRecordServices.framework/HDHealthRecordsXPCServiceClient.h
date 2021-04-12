/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class NSObject, _HKXPCConnection, NSString;

@interface HDHealthRecordsXPCServiceClient : NSObject <_HKXPCExportable> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	_HKXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(void)connectionInvalidated;
-(id)init;
-(id)exportedInterface;
-(void)_performWithProxyHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_synchronousPerformWithProxyHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)rulesVersionForFHIRDocumentExtractionWithError:(id*)arg1 ;
-(id)supportedFHIRConfigurationWithError:(id*)arg1 ;
-(void)executeFHIRReferenceExtractionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeFHIRExtractionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)optInDataForFHIRDocumentWithRequest:(id)arg1 redactor:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

