/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSError, _DKKnowledgeSyncStorageAssertion, NSMutableArray;

@interface _DKSyncState : NSObject {

	BOOL _needsCloudSyncDown;
	BOOL _needsCloudSyncUp;
	NSError* _error;
	_DKKnowledgeSyncStorageAssertion* _assertion;
	NSMutableArray* _replies;

}

@property (retain) _DKKnowledgeSyncStorageAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (retain) NSMutableArray * replies;                                  //@synthesize replies=_replies - In the implementation block
@property (assign) BOOL needsCloudSyncDown;                                   //@synthesize needsCloudSyncDown=_needsCloudSyncDown - In the implementation block
@property (assign) BOOL needsCloudSyncUp;                                     //@synthesize needsCloudSyncUp=_needsCloudSyncUp - In the implementation block
@property (retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)finish;
-(void)addReplyBlock:(/*^block*/id)arg1 ;
-(id)initWithSyncStorageAssertion:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setNeedsCloudSyncDown:(BOOL)arg1 ;
-(void)setNeedsCloudSyncUp:(BOOL)arg1 ;
-(BOOL)needsCloudSyncUp;
-(BOOL)needsCloudSyncDown;
-(_DKKnowledgeSyncStorageAssertion *)assertion;
-(void)setAssertion:(_DKKnowledgeSyncStorageAssertion *)arg1 ;
-(NSMutableArray *)replies;
-(void)setReplies:(NSMutableArray *)arg1 ;
@end

