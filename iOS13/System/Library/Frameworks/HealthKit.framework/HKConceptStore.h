/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKConceptStoreClientInterface.h>

@class HKObserverSet, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface> {

	HKObserverSet* _conceptObservers;
	os_unfair_lock_s _conceptIndexManagerStateLock;
	unsigned long long _lastKnownConceptIndexManagerState;
	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                    //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long currentConceptIndexerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)taskServerIdentifier;
+(id)conceptStore;
-(id)init;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)exportedInterface;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_startTaskServerIfNeeded;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(id)_conceptForIdentifier:(id)arg1 ;
-(id)conceptsWithAttribute:(long long)arg1 matchingValue:(id)arg2 ;
-(void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1 ;
-(id)ontologyVersionWithError:(id*)arg1 ;
-(id)conceptForIdentifier:(id)arg1 ;
-(id)_conceptForCoding:(id)arg1 ;
-(id)_unitTest_conceptForName:(id)arg1 ;
-(id)conceptsWithRelationship:(id)arg1 toNode:(id)arg2 ;
-(id)conceptsWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 ;
-(BOOL)loadRelationshipsForConcept:(id)arg1 ;
-(BOOL)makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 ;
-(BOOL)breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 ;
-(long long)countOfConceptsAssociatedToUserRecordsWithError:(id*)arg1 ;
-(id)conceptsAssociatedToUserRecordsWithError:(id*)arg1 ;
-(BOOL)cleanUpAfterUnitTest;
-(void)resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)currentConceptIndexerState;
-(void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2 ;
-(void)unregisterAsConceptObserver:(id)arg1 onQueue:(id)arg2 ;
@end

