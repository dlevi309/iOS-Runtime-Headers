/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBBulletinSystemStateAdapter : NSObject {

	BOOL _quietModeEnabled;

}
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)dealloc;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_sendCurrentUILockedStatus;
@end

