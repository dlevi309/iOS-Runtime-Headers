/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

@interface RBBasicProcessConcreteTarget : RBConcreteTarget {

	RBProcess* _process;

}
-(id)description;
-(id)identity;
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithProcess:(id)arg1 ;
@end

