/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)identity;
-(id)description;
-(unsigned long long)hash;
-(id)environment;
-(BOOL)isEqual:(id)arg1 ;
@end

