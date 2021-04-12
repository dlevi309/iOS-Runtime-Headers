/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class _UIStatusBarDisplayItemState, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation {

	BOOL _requirement;
	_UIStatusBarDisplayItemState* _itemState;
	_UIStatusBarDisplayItemPlacement* _placement;

}

@property (assign,nonatomic,__weak) _UIStatusBarDisplayItemState * itemState;              //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * placement;                 //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL requirement;                                             //@synthesize requirement=_requirement - In the implementation block
-(id)type;
-(BOOL)requirement;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(id)_ui_descriptionBuilder;
-(void)setPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(BOOL)isFulfilled;
-(id)itemStates;
-(void)setItemState:(_UIStatusBarDisplayItemState *)arg1 ;
-(void)setRequirement:(BOOL)arg1 ;
-(_UIStatusBarDisplayItemState *)itemState;
@end

