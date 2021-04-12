/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSFormAutoFillCorrectionsStore.h>
#import <libobjc.A.dylib/WBSCrowdsourcedFeedbackAllowList.h>

@protocol OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject, WBSCrowdsourcedFeedbackDomainNormalizer, NSString;

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSFormAutoFillCorrectionsStore, WBSCrowdsourcedFeedbackAllowList> {

	NSURL* _localDatabaseURL;
	NSURL* _parsecDatabaseURL;
	WBSSQLiteDatabase* _localDatabase;
	WBSSQLiteDatabase* _parsecDatabase;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultLocalDatabaseURL;
+(id)standardStore;
+(id)_defaultParsecDatabaseURL;
-(void)getLastAllowListRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_normalizeDomain:(id)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 forDatabase:(id)arg2 ;
-(id)init;
-(id)initWithLocalDatabaseURL:(id)arg1 parsecDatabaseURL:(id)arg2 ;
-(int)_migrateToSchemaVersion_3;
-(void)_closeDatabases;
-(void)_openDatabasesIfNeeded;
-(BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 ;
-(void)setLastAllowListRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 date:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)_createFreshParsecDatabaseSchema;
-(BOOL)_removeAllLocalClassifications;
-(BOOL)_removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 ;
-(int)_migrateToSchemaVersion_2;
-(void)replaceDomainAllowListWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_classificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 ;
-(int)_createFreshLocalDatabaseSchema;
-(void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_setDomain:(id)arg1 isAllowListedForFeedback:(BOOL)arg2 ;
-(void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getAllowListStatusForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_openLocalDatabase;
-(void)setDomain:(id)arg1 isAllowListedForFeedback:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isDatabaseOpen:(id)arg1 ;
-(BOOL)_setParsecMetadataStringValue:(id)arg1 forKey:(id)arg2 ;
-(id)_parsecMetadataStringValueForKey:(id)arg1 ;
-(int)_migrateToSchemaVersion_4;
-(void)_openParsecDatabase;
-(BOOL)_replaceDomainAllowListWithDomains:(id)arg1 retrievalURLString:(id)arg2 ;
-(void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)closeDatabase;
-(BOOL)_migrateToSchemaVersion:(int)arg1 forDatabase:(id)arg2 ;
-(int)_schemaVersionForDatabase:(id)arg1 ;
-(void)removeAllLocalClassificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(void)_configureDatabase:(id)arg1 currentSchemaVersion:(int)arg2 ;
-(int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)arg1 ;
-(BOOL)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 dateReclassified:(id)arg4 ;
-(BOOL)_tryToPerformTransactionOnDatabase:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

