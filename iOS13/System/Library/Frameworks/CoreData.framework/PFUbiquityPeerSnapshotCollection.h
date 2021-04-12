/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {

	NSMutableDictionary* _peerIDToTransactionNumberToSnapshot;
	NSMutableDictionary* _peerIDToTranasctionNumberToKnowledgeVector;
	NSMutableDictionary* _kvToSnapshot;
	NSMutableArray* _peerSnapshots;
	BOOL _needSort;

}
-(id)init;
-(void)dealloc;
-(void)addSnapshot:(id)arg1 ;
-(id)allPeerIDs;
-(BOOL)calculateSnapshotDiffsWithError:(id*)arg1 ;
-(id)snapshotForKnowledgeVector:(id)arg1 ;
-(id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2 ;
@end

