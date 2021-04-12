/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {

	NSString* _debugName;

}
-(BOOL)_canBeInterrupted;
-(id)init;
-(id)initWithDebugName:(id)arg1 ;
-(id)_graphNodeDebugName;
-(void)synchronize;
@end

