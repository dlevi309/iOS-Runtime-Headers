/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBConcreteTarget.h>

@class RBSProcessIdentity;

@interface RBBasicIdentityConcreteTarget : RBConcreteTarget {

	RBSProcessIdentity* _identity;

}
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)identity;
-(id)description;
-(id)_initWithIdentity:(id)arg1 ;
@end

