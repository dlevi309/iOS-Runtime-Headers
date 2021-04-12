/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@protocol OS_dispatch_queue;
@class CLSCurrentUser, NSObject;

@interface CLSSettingsVisibilityController : NSObject {

	CLSCurrentUser* _currentUser;
	BOOL _needToUpdateCurrentUser;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(id)currentUser;
-(void)currentUserChanged;
-(id)cachedCurrentUserAppleID;
-(BOOL)settingsUIVisible;
@end

