/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_appToBackgroundTasks;

}
+(id)sharedInstance;
-(void)_appProcessStateDidChange:(id)arg1 ;
-(id)init;
-(id)_createBackgroundFetchTaskForApplication:(id)arg1 ;
-(void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
@end

