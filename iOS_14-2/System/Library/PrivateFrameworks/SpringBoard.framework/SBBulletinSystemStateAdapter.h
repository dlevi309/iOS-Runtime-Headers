/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBBulletinSystemStateAdapter : NSObject {

	BOOL _quietModeEnabled;

}
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)_sendCurrentUILockedStatus;
-(void)_lockStateChanged:(id)arg1 ;
-(void)dealloc;
@end

