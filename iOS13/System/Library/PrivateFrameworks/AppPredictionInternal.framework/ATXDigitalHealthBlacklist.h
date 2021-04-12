/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class _PASLock, NSString;

@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol> {

	_PASLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(id)blacklistedBundleIds;
-(BOOL)_updateBlacklistWithNewBlacklistedBundleIds:(id)arg1 whitelistedBundleIds:(id)arg2 ;
@end

