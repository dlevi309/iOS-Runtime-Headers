/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSLock, NSError, NSString;

@interface GKUpdateGroup : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableArray* _notifiers;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSLock* _lock;
	NSError* _error;
	NSString* _name;

}

@property (retain) NSLock * lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * notifiers;              //@synthesize notifiers=_notifiers - In the implementation block
@property (retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long updateCount; 
+(id)updateGroup;
+(id)updateGroupWithName:(id)arg1 ;
+(id)updateGroupForTargetQueue:(id)arg1 ;
+(id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(NSLock *)lock;
-(void)setName:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)wait;
-(void)setLock:(NSLock *)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(void)join:(/*^block*/id)arg1 ;
-(long long)updateCount;
-(void)applyUpdates;
-(void)performOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(NSMutableArray *)notifiers;
-(void)joinApplyUpdatesAndDo:(/*^block*/id)arg1 ;
-(void)joinAndApplyUpdates;
-(void)cancelUpdates;
-(void)setNotifiers:(NSMutableArray *)arg1 ;
@end

