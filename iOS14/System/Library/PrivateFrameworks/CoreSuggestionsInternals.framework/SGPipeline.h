/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSDictionary;

@interface SGPipeline : NSObject {

	NSDictionary* _dissectorsAndDependencies;

}
+(void)initialize;
+(id)remindersTestingPipeline;
+(id)remindersTestingPipelineWithCustomReminderDissector:(id)arg1 ;
+(id)fullPipeline;
+(id)deliveriesTestingPipeline;
+(id)parallelPipeline:(id)arg1 ;
+(id)retrainingPipeline;
+(id)sharedBackgroundStorageQueue;
+(void)_delayedResetCachesAndModels;
+(id)sharedBackgroundProcessingQueue;
+(id)customPipeline:(id)arg1 ;
+(id)dependencyClassesForDissectorClass:(Class)arg1 ;
+(id)portraitTestingPipeline;
+(void)_resetCachesAndModels;
+(id)emptyPipeline;
-(void)logDKIMStatus:(long long)arg1 forPipelineEntity:(id)arg2 ;
-(id)_dissectOperations:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3 ;
-(void)dissect:(id)arg1 ;
-(id)dissectors;
-(void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2 destinationStore:(id)arg3 ;
-(id)verificationOperation:(id)arg1 overrideVerificationStatus:(id)arg2 withDependencies:(id)arg3 ;
-(void)dissect:(id)arg1 inContext:(id)arg2 ;
-(void)_dissectEntity:(id)arg1 inContext:(id)arg2 andThen:(/*^block*/id)arg3 ;
-(id)_dissectOperations:(id)arg1 inContext:(id)arg2 ;
-(id)geocodeOperation:(id)arg1 withDependencies:(id)arg2 ;
-(void)dissect:(id)arg1 andStore:(id)arg2 ;
-(void)dissectEntity:(id)arg1 andStore:(id)arg2 ;
-(id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6 originalEnrichmentCount:(unsigned long long)arg7 ;
-(void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2 ;
-(void)dissectAndStore:(id)arg1 inContext:(id)arg2 ;
-(id)verificationOperation:(id)arg1 withDependencies:(id)arg2 ;
-(id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3 originalEnrichmentCount:(unsigned long long)arg4 ;
-(id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6 ;
-(id)dissectOperationsForInteraction:(id)arg1 entity:(id)arg2 inContext:(id)arg3 ;
-(void)dissectAndStoreSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 inContext:(id)arg5 ;
-(id)dissectOperationsForTextMessage:(id)arg1 entity:(id)arg2 inContext:(id)arg3 ;
-(id)dissectOperationsForMailMessage:(id)arg1 entity:(id)arg2 inContext:(id)arg3 ;
@end

