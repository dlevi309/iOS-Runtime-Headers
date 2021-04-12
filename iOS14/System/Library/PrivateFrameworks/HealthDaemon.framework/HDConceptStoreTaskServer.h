/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDHealthOntologyManagerObserver.h>
#import <libobjc.A.dylib/HDConceptIndexManagerObserver.h>
#import <libobjc.A.dylib/HKConceptStoreServerInterface.h>

@class NSString;

@interface HDConceptStoreTaskServer : HDStandardTaskServer <HDHealthOntologyManagerObserver, HDConceptIndexManagerObserver, HKConceptStoreServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1 ;
-(void)remote_startTaskServerIfNeeded;
-(void)remote_ontologyVersionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_queryConceptByIdentifier:(id)arg1 loadRelationships:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_queryRelationshipsForNodeWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_testTaskServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_cleanUpAfterUnitTestWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_currentIndexingState:(/*^block*/id)arg1 ;
@end

