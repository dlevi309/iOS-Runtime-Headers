/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)_performWithProxyHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)rulesVersionForFHIRDocumentExtractionWithCompletion:(/*^block*/id)arg1 ;
-(void)executeFHIRReferenceExtractionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeFHIRExtractionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)optInDataForFHIRDocumentWithRequest:(id)arg1 redactor:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

