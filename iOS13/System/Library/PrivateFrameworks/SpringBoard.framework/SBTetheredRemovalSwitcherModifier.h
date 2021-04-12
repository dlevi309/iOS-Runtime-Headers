/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID;

@interface SBTetheredRemovalSwitcherModifier : SBSwitcherModifier {

	NSUUID* _tetheredRemovalID;
	BOOL _isFloating;
	unsigned long long _phase;
	unsigned long long _indexToScrollAfterInsertion;

}
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(long long)layoutUpdateMode;
-(id)handleTetheredRemovalEvent:(id)arg1 ;
-(id)initWithTetheredRemovalID:(id)arg1 floating:(BOOL)arg2 ;
@end

