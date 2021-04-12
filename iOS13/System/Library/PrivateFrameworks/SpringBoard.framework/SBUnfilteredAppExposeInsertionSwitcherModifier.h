/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, SBInsertionSwitcherModifier;

@interface SBUnfilteredAppExposeInsertionSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	SBInsertionSwitcherModifier* _insertionSwitcherModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithAppLayout:(id)arg1 insertionSwitcherModifier:(id)arg2 ;
@end

