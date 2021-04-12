/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaDataSerialization.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaSerialization.h>
#import <libobjc.A.dylib/MSPCloudReplica.h>

@class NSString, NSArray, NSData;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (nonatomic,readonly) NSData * propertyListDataRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)allowedEditClasses;
+(void)switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 caseIsEditModificationDate:(/*^block*/id)arg4 caseIsDeleteTombstone:(/*^block*/id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)contents;
-(id)propertyListRepresentation;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
-(id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(/*^block*/id)arg2 ;
-(Class)replicaRecordClass;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(/*^block*/id)arg1 ;
-(NSData *)propertyListDataRepresentation;
-(id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id*)arg2 ;
-(id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2 ;
-(id)editsToMergeWithReplica:(id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
@end

