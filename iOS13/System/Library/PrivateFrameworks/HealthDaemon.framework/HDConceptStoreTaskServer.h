/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)remote_startTaskServerIfNeeded;
-(void)remote_ontologyVersionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_queryConceptsByAttribute:(long long)arg1 withValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_queryConceptByID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_unitTest_queryConceptByExactNameMatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_queryConceptsByRelationship:(id)arg1 toNodeWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_queryConceptsByRelationship:(id)arg1 fromNodeWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_queryRelationshipsForNodeWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_queryConceptsAssociatedToUserRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_cleanUpAfterUnitTestWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_currentIndexingState:(/*^block*/id)arg1 ;
-(void)remote_testTaskServerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2 ;
-(void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1 ;
@end

