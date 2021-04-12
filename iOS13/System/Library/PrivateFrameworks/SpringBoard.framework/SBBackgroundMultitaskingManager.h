/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_appToBackgroundTasks;

}
+(id)sharedInstance;
-(id)init;
-(void)_appProcessStateDidChange:(id)arg1 ;
-(void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
-(id)_createBackgroundFetchTaskForApplication:(id)arg1 ;
@end

