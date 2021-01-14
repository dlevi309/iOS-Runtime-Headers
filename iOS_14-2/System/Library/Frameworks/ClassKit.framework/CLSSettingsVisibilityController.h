/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


#import <ClassKit/ClassKit-Structs.h>
@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {

	CLSCurrentUser* _currentUser;
	os_unfair_lock_s _lock;

}
+(id)shared;
-(void)unlock;
-(id)init;
-(id)currentUser;
-(void)lock;
-(BOOL)settingsUIVisible;
-(void)currentUserDidChange:(id)arg1 ;
-(id)cachedCurrentUserAppleID;
-(void)dealloc;
@end

