/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAutoUnlockRule.h>

@class NSMutableSet, NSString;

@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule> {

	NSMutableSet* _disableLockScreenIfPossibleAssertions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(id)init;
-(BOOL)isLockScreenDisabledForAssertion;
-(void)removeLockScreenDisableAssertion:(id)arg1 ;
-(NSString *)description;
-(void)addLockScreenDisableAssertion:(id)arg1 ;
@end

