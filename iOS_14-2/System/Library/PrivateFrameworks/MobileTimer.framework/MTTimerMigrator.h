/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

