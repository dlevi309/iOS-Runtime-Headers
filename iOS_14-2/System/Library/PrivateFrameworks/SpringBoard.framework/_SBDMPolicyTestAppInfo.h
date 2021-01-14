/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplicationInfo.h>

@interface _SBDMPolicyTestAppInfo : SBApplicationInfo {

	BOOL _testAppBlocked;

}

@property (assign,nonatomic) BOOL testAppBlocked;              //@synthesize testAppBlocked=_testAppBlocked - In the implementation block
-(void)setTestAppBlocked:(BOOL)arg1 ;
-(BOOL)testAppBlocked;
-(BOOL)isBlockedForScreenTimeExpiration;
-(long long)screenTimePolicy;
@end

