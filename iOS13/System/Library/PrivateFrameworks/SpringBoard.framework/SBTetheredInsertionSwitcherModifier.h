/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID, NSArray;

@interface SBTetheredInsertionSwitcherModifier : SBSwitcherModifier {

	NSUUID* _tetheredInsertionID;
	BOOL _isFloating;
	unsigned long long _phase;
	NSArray* _appLayoutsVisibleBeforeInsertion;
	unsigned long long _indexToScrollAfterInsertion;

}
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(id)handleTetheredInsertionEvent:(id)arg1 ;
-(id)initWithTetheredInsertionID:(id)arg1 floating:(BOOL)arg2 ;
@end

