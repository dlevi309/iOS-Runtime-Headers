/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationWakeLifecycleHandling.h>

@class FBProcessManager, BKSProcessAssertion, NSString;

@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling> {

	FBProcessManager* _processManager;
	BKSProcessAssertion* _appKeepAliveAssertion;

}

@property (nonatomic,retain) BKSProcessAssertion * appKeepAliveAssertion;              //@synthesize appKeepAliveAssertion=_appKeepAliveAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)endWake;
-(void)dealloc;
-(double)wakeDuration;
-(id)initWithProcessManager:(id)arg1 ;
-(void)setAppKeepAliveAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_activateAppIfNeeded:(id)arg1 ;
-(id)_createAssertionForBundleID:(id)arg1 ;
-(BKSProcessAssertion *)appKeepAliveAssertion;
-(BOOL)beginWakeForApplication:(id)arg1 ;
@end

