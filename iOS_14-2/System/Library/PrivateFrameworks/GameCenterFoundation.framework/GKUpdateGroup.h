/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSLock *)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)perform:(/*^block*/id)arg1 ;
-(NSString *)name;
-(void)wait;
-(void)setLock:(NSLock *)arg1 ;
-(long long)updateCount;
-(void)setName:(NSString *)arg1 ;
-(void)performOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)join:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)applyUpdates;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(NSMutableArray *)notifiers;
-(void)joinApplyUpdatesAndDo:(/*^block*/id)arg1 ;
-(void)joinAndApplyUpdates;
-(void)cancelUpdates;
-(void)setNotifiers:(NSMutableArray *)arg1 ;
@end

