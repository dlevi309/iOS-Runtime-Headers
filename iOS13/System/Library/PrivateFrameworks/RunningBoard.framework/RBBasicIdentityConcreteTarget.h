/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBConcreteTarget.h>

@class RBSProcessIdentity;

@interface RBBasicIdentityConcreteTarget : RBConcreteTarget {

	RBSProcessIdentity* _identity;

}
-(id)description;
-(id)identity;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithIdentity:(id)arg1 ;
@end

