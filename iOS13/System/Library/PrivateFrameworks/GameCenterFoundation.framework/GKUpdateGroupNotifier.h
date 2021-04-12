/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKUpdateGroup, NSLock, NSMutableArray, NSError;

@interface GKUpdateGroupNotifier : NSObject {

	GKUpdateGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(NSLock *)lock;
-(void)setGroup:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)group;
-(NSMutableArray *)updateQueue;
-(void)setLock:(NSLock *)arg1 ;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(void)addUpdatesFromGroup:(id)arg1 ;
-(void)addUpdate:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)updateError:(id)arg1 ;
@end

