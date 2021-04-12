/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplica.h>

@interface MSPOrderedReplica : MSPReplica
+(id)allowedEditClasses;
+(void)_switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 caseIsEditPosition:(/*^block*/id)arg4 caseIsRemoveTombstone:(/*^block*/id)arg5 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)orderedReplicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
@end

