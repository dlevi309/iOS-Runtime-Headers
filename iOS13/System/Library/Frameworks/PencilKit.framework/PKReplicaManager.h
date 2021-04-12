/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface PKReplicaManager : NSObject {

	NSObject*<OS_dispatch_queue> _uuidAccessQueue;
	NSMutableOrderedSet* _replicaUUIDs;
	NSMutableDictionary* _replicaEntries;
	NSMutableArray* _replicaManagerErrors;
	/*^block*/id _saveStateBlock;
	BOOL _dirtyTokenSet;
	BOOL _shouldPersist;
	BOOL _testMode;

}

@property (assign,nonatomic) BOOL testMode;                                 //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,readonly) NSArray * replicaManagerErrors; 
+(id)sharedReplicaManager;
-(id)init;
-(id)description;
-(BOOL)testMode;
-(void)setTestMode:(BOOL)arg1 ;
-(void)_applicationWillTerminate;
-(void)_loadState;
-(id)checkoutReplicaUUIDForDrawing:(id)arg1 ;
-(void)returnReplicaForDrawing:(id)arg1 ;
-(void)updateVersionForDrawing:(id)arg1 ;
-(void)persistIfNeeded;
-(void)_saveStateImmediately;
-(void)_setReplicasDirtyToken;
-(void)_scheduleSaveState;
-(BOOL)isValidBundleIDForSaving:(id)arg1 ;
-(void)_resetAllReplicaUUIDs;
-(NSArray *)replicaManagerErrors;
@end

