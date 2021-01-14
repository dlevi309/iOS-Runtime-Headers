/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPOrderedReplica.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaDataSerialization.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaSerialization.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/MSPCloudReplica.h>

@class NSData, NSString, NSArray;

@interface MSPFavoritesReplica : MSPOrderedReplica <NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPContainerStateSnapshot, MSPCloudReplica>

@property (nonatomic,readonly) NSData * propertyListDataRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSArray * contents; 
+(BOOL)supportsSecureCoding;
+(void)switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 caseIsEditPosition:(/*^block*/id)arg4 caseIsRemoveTombstone:(/*^block*/id)arg5 ;
-(NSArray *)contents;
-(id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(/*^block*/id)arg2 ;
-(NSData *)propertyListDataRepresentation;
-(id)propertyListRepresentation;
-(Class)replicaRecordClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(/*^block*/id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
@end

