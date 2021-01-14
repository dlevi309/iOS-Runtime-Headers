/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKUpdateGroup, NSLock, NSMutableArray, NSError;

@interface GKUpdateGroupNotifier : NSObject {

	GKUpdateGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (assign,nonatomic,__weak) GKUpdateGroup * group;              //@synthesize group=_group - In the implementation block
@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(void)setGroup:(GKUpdateGroup *)arg1 ;
-(GKUpdateGroup *)group;
-(oneway void)release;
-(id)init;
-(id)retain;
-(NSMutableArray *)updateQueue;
-(NSLock *)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setLock:(NSLock *)arg1 ;
-(void)updateError:(id)arg1 ;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)addUpdatesFromGroup:(id)arg1 ;
-(void)addUpdate:(/*^block*/id)arg1 error:(id)arg2 ;
@end

