/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKJoinGroup, NSLock, NSMutableArray, NSError;

@interface GKJoinGroupNotifier : NSObject {

	GKJoinGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (assign,nonatomic) GKJoinGroup * group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(NSLock *)lock;
-(void)setGroup:(GKJoinGroup *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(GKJoinGroup *)group;
-(NSMutableArray *)updateQueue;
-(void)setLock:(NSLock *)arg1 ;
-(void)setResult:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
@end

