/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplicationInfo.h>

@interface _SBDMPolicyTestAppInfo : SBApplicationInfo {

	BOOL _testAppBlocked;

}

@property (assign,nonatomic) BOOL testAppBlocked;              //@synthesize testAppBlocked=_testAppBlocked - In the implementation block
-(BOOL)isBlockedForScreenTimeExpiration;
-(BOOL)testAppBlocked;
-(void)setTestAppBlocked:(BOOL)arg1 ;
@end

