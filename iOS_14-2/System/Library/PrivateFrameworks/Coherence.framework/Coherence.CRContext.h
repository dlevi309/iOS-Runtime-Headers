/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/


@interface Coherence.CRContext : NSObject {

	 crdtDatabase;
	 queue;
	 temporaryIDs;

}
+(id)newObjCReplicaFor:(id)arg1 ;
-(id)objCRenames;
-(void)retainObjCSequence:(id)arg1 ;
-(void)releaseObjCSequence:(id)arg1 ;
-(void)retainOrReleaseWithInitial:(id)arg1 current:(id)arg2 forReplica:(id)arg3 copyingFrom:(id)arg4 ;
-(id)renameObjCSequence:(id)arg1 after:(long long)arg2 ;
-(void)retainOrReleaseWithInitial:(id)arg1 current:(id)arg2 forReplica:(id)arg3 ;
-(id)init;
@end

