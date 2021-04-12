/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSDatabaseManager.h>

@class AXSSPunctuationEntryCloudKitHelper, AXSSPunctuationGroupCloudKitHelper, NSArray;

@interface AXSSPunctuationManager : AXSSDatabaseManager {

	AXSSPunctuationEntryCloudKitHelper* _punctuationEntryCloudKitHelper;
	AXSSPunctuationGroupCloudKitHelper* _punctuationGroupCloudKitHelper;
	BOOL _cloudKitSync;
	BOOL _cloudKitPushInSameProcess;

}

@property (assign,nonatomic) BOOL cloudKitSync;                           //@synthesize cloudKitSync=_cloudKitSync - In the implementation block
@property (assign,nonatomic) BOOL cloudKitPushInSameProcess;              //@synthesize cloudKitPushInSameProcess=_cloudKitPushInSameProcess - In the implementation block
@property (nonatomic,readonly) NSArray * punctuationGroups; 
+(void)initialize;
+(id)sharedDatabase;
-(id)init;
-(BOOL)isProtectedDataAvailable;
-(void)removeEntry:(id)arg1 ;
-(void)_setupDatabase;
-(void)updateEntry:(id)arg1 ;
-(BOOL)cloudKitSync;
-(void)_initializeSystemGroups;
-(void)_managedObjectChanged:(id)arg1 ;
-(void)_cloudKitUpdated:(id)arg1 ;
-(NSArray *)punctuationGroups;
-(void)updatePunctuationGroup:(id)arg1 ;
-(id)_punctuationEntryFromManagedObject:(id)arg1 ;
-(void)_updateCloudKitHelpers;
-(void)_initializeCloudKitHelpers;
-(BOOL)cloudKitPushInSameProcess;
-(id)_punctuationGroupForEntry:(id)arg1 ;
-(id)_databaseDirectoryPath;
-(BOOL)_saveIfPossible;
-(id)_databaseFilePath;
-(void)setCloudKitSync:(BOOL)arg1 ;
-(id)_punctuationGroupFromManagedObject:(id)arg1 ;
-(BOOL)isBasePunctuationGroup:(id)arg1 ;
-(id)parentPunctuationGroup:(id)arg1 ;
-(void)updatePunctuationGroup:(id)arg1 fromCloudKit:(BOOL)arg2 ;
-(void)addCloudRecordToPurge:(id)arg1 recordEntityType:(id)arg2 ;
-(long long)stringToRule:(id)arg1 ;
-(id)punctuationEntriesForGroupUUID:(id)arg1 ;
-(id)punctuationGroupsForContexts;
-(void)_filterAutoswitchContexts:(id)arg1 punctuationGroupsForContexts:(id)arg2 ;
-(void)updateEntry:(id)arg1 fromCloudKit:(BOOL)arg2 ;
-(id)ruleToString:(long long)arg1 ;
-(id)punctuationGroupForUUID:(id)arg1 ;
-(void)setCloudKitPushInSameProcess:(BOOL)arg1 ;
-(id)nextDefaultGroupName;
-(void)userAuthChanged;
-(id)cloudRecordsToPurge:(id)arg1 ;
-(void)removeAllRecordsForPurge;
-(void)removeCloudRecordForPurge:(id)arg1 ;
-(id)mostBasePunctuationGroupForGroup:(id)arg1 ;
-(void)importPunctuationGroup:(id)arg1 ;
-(id)punctuationEntryObjectFromLocalObjects:(id)arg1 ;
-(void)removePunctuationGroup:(id)arg1 ;
-(id)punctuationEntryForUUID:(id)arg1 ;
-(id)allPunctuationGroup;
-(id)somePunctuationGroup;
-(id)nonePunctuationGroup;
@end

