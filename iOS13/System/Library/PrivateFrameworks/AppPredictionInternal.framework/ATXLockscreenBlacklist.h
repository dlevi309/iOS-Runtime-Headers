/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {

	_PASLock* _lock;
	id _notificationCenterToken;
	int _libnotifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)blacklist;
-(BOOL)isPredictionGloballyDisabled;
@end

