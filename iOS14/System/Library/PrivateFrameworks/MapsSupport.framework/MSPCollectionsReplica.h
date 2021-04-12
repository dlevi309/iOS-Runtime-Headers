/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPOrderedReplica.h>
#import <libobjc.A.dylib/MSPCloudReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaDataSerialization.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaSerialization.h>

@class NSData, NSString, NSArray;

@interface MSPCollectionsReplica : MSPOrderedReplica <MSPCloudReplica, MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (nonatomic,readonly) NSData * propertyListDataRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
-(NSArray *)contents;
-(id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(/*^block*/id)arg2 ;
-(NSData *)propertyListDataRepresentation;
-(id)propertyListRepresentation;
-(Class)replicaRecordClass;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(/*^block*/id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
@end

