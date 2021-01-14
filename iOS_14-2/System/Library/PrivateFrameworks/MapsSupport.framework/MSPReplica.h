/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)replicaRecordClass;
-(id)init;
-(NSDictionary *)records;
-(id)editsToMergeWithReplica:(id)arg1 ;
-(NSString *)debugDescription;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)editsToRemoveRecordsWithIdentifiers:(id)arg1 ;
-(NSString *)description;
-(id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)editsToInsertOrUpdateRecords:(id)arg1 ;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
-(NSUUID *)clientIdentifier;
-(id)tombstoneRecordForRecord:(id)arg1 ;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
@end

