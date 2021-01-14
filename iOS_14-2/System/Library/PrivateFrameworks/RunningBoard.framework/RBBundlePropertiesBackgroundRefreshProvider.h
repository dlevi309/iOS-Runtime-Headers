/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


#import <RunningBoard/RunningBoard-Structs.h>
@class NSCache;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject {

	NSCache* _backgroundRefreshStateByIdentity;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)removeIdentity:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)isBackgroundRefreshEnabledForIdentity:(id)arg1 ;
@end

