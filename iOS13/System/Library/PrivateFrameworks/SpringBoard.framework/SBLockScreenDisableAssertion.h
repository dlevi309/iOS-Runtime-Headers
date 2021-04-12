/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBUILockScreenDisableAssertion.h>

@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {

	NSString* _identifier;
	SBFAuthenticationAssertion* _disableLockAssertion;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithIdentifier:(id)arg1 ;
@end

