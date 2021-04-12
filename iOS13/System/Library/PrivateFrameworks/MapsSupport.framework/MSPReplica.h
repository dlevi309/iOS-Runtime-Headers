/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPCloudReplica.h>

@class NSUUID, NSDictionary, NSString;

@interface MSPReplica : NSObject <MSPCloudReplica> {

	NSUUID* _clientIdentifier;
	NSDictionary* _records;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * records;                      //@synthesize records=_records - In the implementation block
+(id)allowedEditClasses;
+(void)_switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSDictionary *)records;
-(NSUUID *)clientIdentifier;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
-(id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2 ;
-(Class)replicaRecordClass;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)editsToMergeWithReplica:(id)arg1 ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
-(id)editsToInsertOrUpdateRecords:(id)arg1 ;
-(id)editsToRemoveRecordsWithIdentifiers:(id)arg1 ;
-(id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)tombstoneRecordForRecord:(id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
@end

