/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class NSObject, NSMapTable, NSString;

@interface PPNotificationHandler : NSObject {

	atomic_flag _isFiring;
	atomic_flag _hasWaiter;
	NSObject*<OS_dispatch_queue> _waiterQueue;
	double _waitSeconds;
	NSMapTable* _blockMap;
	NSString* _name;

}

@property (assign,nonatomic) double waitSeconds;                 //@synthesize waitSeconds=_waitSeconds - In the implementation block
@property (nonatomic,retain) NSMapTable * blockMap;              //@synthesize blockMap=_blockMap - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(void)fire;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_executeBlocks;
-(void)_clearFlags;
-(void)addObserverBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(double)waitSeconds;
-(void)setWaitSeconds:(double)arg1 ;
-(NSMapTable *)blockMap;
-(void)setBlockMap:(NSMapTable *)arg1 ;
@end

