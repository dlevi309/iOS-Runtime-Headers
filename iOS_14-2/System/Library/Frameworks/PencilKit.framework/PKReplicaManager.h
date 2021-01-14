/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTestMode:(BOOL)arg1 ;
-(id)init;
-(BOOL)testMode;
-(id)description;
-(void)_loadState;
-(void)_applicationWillTerminate;
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

