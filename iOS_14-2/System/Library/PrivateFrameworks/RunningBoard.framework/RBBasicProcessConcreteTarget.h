/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

@interface RBBasicProcessConcreteTarget : RBConcreteTarget {

	RBProcess* _process;

}
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)identity;
-(id)_initWithProcess:(id)arg1 ;
-(id)description;
@end

