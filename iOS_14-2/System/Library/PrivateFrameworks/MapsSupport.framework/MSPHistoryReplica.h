/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaDataSerialization.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaSerialization.h>
#import <libobjc.A.dylib/MSPCloudReplica.h>

@class NSArray, NSString, NSData;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica>

@property (nonatomic,copy,readonly) NSArray * contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * propertyListDataRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
+(void)switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 caseIsEditModificationDate:(/*^block*/id)arg4 caseIsDeleteTombstone:(/*^block*/id)arg5 ;
+(id)allowedEditClasses;
-(NSArray *)contents;
-(id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(/*^block*/id)arg2 ;
-(NSData *)propertyListDataRepresentation;
-(id)propertyListRepresentation;
-(Class)replicaRecordClass;
-(id)editsToMergeWithReplica:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id*)arg2 ;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(/*^block*/id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
@end

