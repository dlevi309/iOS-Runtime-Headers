/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSMutableArray;

@interface SBGroupSwitcherModifierAction : SBSwitcherModifierAction {

	NSMutableArray* _actions;

}
+(id)groupActionWithActions:(id)arg1 ;
-(id)init;
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(id)appendAction:(id)arg1 ;
-(void)enumerateActionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)leafCount;
-(void)enumerateLeafActionsUsingBlock:(/*^block*/id)arg1 ;
@end

