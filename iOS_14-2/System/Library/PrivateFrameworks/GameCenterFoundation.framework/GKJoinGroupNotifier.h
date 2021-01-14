/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKJoinGroup, NSLock, NSMutableArray, NSError;

@interface GKJoinGroupNotifier : NSObject {

	GKJoinGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (assign,nonatomic,__weak) GKJoinGroup * group;                //@synthesize group=_group - In the implementation block
@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(void)setGroup:(GKJoinGroup *)arg1 ;
-(GKJoinGroup *)group;
-(oneway void)release;
-(id)init;
-(id)retain;
-(NSMutableArray *)updateQueue;
-(NSLock *)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setLock:(NSLock *)arg1 ;
-(void)setResult:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

