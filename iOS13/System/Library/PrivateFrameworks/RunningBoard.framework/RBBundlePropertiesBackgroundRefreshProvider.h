/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSCache, NSString;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject <BSDescriptionProviding> {

	NSCache* _backgroundRefreshStateByIdentity;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_registerForBackgroundRefreshStatusChangedNotification;
-(void)removeIdentity:(id)arg1 ;
-(BOOL)isBackgroundRefreshEnabledForIdentity:(id)arg1 ;
-(id)_lock_fetchBackgroundRefreshEnabledForIdentity:(id)arg1 ;
-(void)_unregisterFromBackgroundRefreshStatusChangedNotification;
-(void)_handleBackgroundRefreshStatusDidChange;
@end

