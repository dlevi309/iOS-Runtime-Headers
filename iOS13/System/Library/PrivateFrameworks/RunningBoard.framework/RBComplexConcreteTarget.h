/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBConcreteTarget.h>

@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {

	NSString* _description;
	RBProcess* _process;
	RBSProcessIdentity* _identity;
	NSString* _environment;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)environment;
-(id)identity;
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithProcess:(id)arg1 identity:(id)arg2 environment:(id)arg3 ;
@end

