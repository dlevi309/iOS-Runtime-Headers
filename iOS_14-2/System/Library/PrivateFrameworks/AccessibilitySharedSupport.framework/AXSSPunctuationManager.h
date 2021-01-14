/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSDatabaseManager.h>

@class AXSSPunctuationEntryCloudKitHelper, AXSSPunctuationGroupCloudKitHelper, NSArray;

@interface AXSSPunctuationManager : AXSSDatabaseManager {

	AXSSPunctuationEntryCloudKitHelper* _punctuationEntryCloudKitHelper;
	AXSSPunctuationGroupCloudKitHelper* _punctuationGroupCloudKitHelper;
	BOOL _finishedInitialization;
	BOOL _cloudKitSync;
	BOOL _cloudKitPushInSameProcess;

}

@property (assign,nonatomic) BOOL cloudKitSync;                           //@synthesize cloudKitSync=_cloudKitSync - In the implementation block
@property (assign,nonatomic) BOOL cloudKitPushInSameProcess;              //@synthesize cloudKitPushInSameProcess=_cloudKitPushInSameProcess - In the implementation block
@property (nonatomic,readonly) NSArray * punctuationGroups; 
+(void)initialize;
+(id)sharedDatabase;
+(id)overrideDatabasePath;
+(void)setOverrideDatabasePath:(id)arg1 ;
-(NSArray *)punctuationGroups;
-(void)updatePunctuationGroup:(id)arg1 fromCloudKit:(BOOL)arg2 ;
-(void)setCloudKitPushInSameProcess:(BOOL)arg1 ;
-(void)_initializeCloudKitHelpers;
-(void)userAuthChanged;
-(id)init;
-(void)_updateCloudKitHelpers;
-(id)_punctuationEntryFromManagedObject:(id)arg1 ;
-(id)punctuationEntriesForGroupUUID:(id)arg1 ;
-(BOOL)_saveIfPossible;
-(id)punctuationEntryObjectFromLocalObjects:(id)arg1 ;
-(void)updateEntry:(id)arg1 ;
-(id)punctuationGroupForUUID:(id)arg1 ;
-(void)updatePunctuationGroup:(id)arg1 ;
-(BOOL)cloudKitSync;
-(long long)stringToRule:(id)arg1 ;
-(id)_databaseFilePath;
-(void)addCloudRecordToPurge:(id)arg1 recordEntityType:(id)arg2 ;
-(id)punctuationEntryForUUID:(id)arg1 ;
-(BOOL)cloudKitPushInSameProcess;
-(void)removePunctuationGroup:(id)arg1 ;
-(id)_punctuationGroupFromManagedObject:(id)arg1 ;
-(void)setCloudKitSync:(BOOL)arg1 ;
-(id)parentPunctuationGroup:(id)arg1 ;
-(BOOL)isBasePunctuationGroup:(id)arg1 ;
-(id)allPunctuationGroup;
-(id)_punctuationGroupForEntry:(id)arg1 ;
-(void)_managedObjectChanged:(id)arg1 ;
-(id)nextDefaultGroupName;
-(void)removeCloudRecordForPurge:(id)arg1 ;
-(id)punctuationGroupsForContexts;
-(id)cloudRecordsToPurge:(id)arg1 ;
-(void)_initializeDatabaseStartup;
-(void)_initializeSystemGroups;
-(id)_databaseDirectoryPath;
-(id)ruleToString:(long long)arg1 ;
-(void)_setupDatabase;
-(void)removeAllRecordsForPurge;
-(void)_filterAutoswitchContexts:(id)arg1 punctuationGroupsForContexts:(id)arg2 ;
-(id)nonePunctuationGroup;
-(BOOL)isProtectedDataAvailable;
-(id)somePunctuationGroup;
-(void)updateEntry:(id)arg1 fromCloudKit:(BOOL)arg2 ;
-(void)_cloudKitUpdated:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
-(id)mostBasePunctuationGroupForGroup:(id)arg1 ;
-(void)importPunctuationGroup:(id)arg1 ;
@end

