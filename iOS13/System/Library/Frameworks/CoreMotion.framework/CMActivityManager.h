/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) BOOL activityAvailable; 
-(id)init;
-(void)dealloc;
-(BOOL)isActivityAvailable;
-(long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(void)setActivityHandler:(id)arg1 ;
-(id)activityHandler;
@end

