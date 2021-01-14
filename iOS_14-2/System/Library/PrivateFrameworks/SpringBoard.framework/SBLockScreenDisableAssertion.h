/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBUILockScreenDisableAssertion.h>

@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {

	NSString* _identifier;
	SBFAuthenticationAssertion* _disableLockAssertion;

}
+(void)initialize;
-(id)description;
-(void)invalidate;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

