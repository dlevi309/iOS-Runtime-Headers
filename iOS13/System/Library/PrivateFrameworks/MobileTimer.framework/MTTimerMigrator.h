/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class MTTimer;

@interface MTTimerMigrator : NSObject {

	MTTimer* _timer;

}

@property (nonatomic,retain) MTTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(MTTimer *)timer;
-(void)setTimer:(MTTimer *)arg1 ;
-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;
@end

