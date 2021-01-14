/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIStatusBarDisplayItemPlacement *)placement;
-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(BOOL)requirement;
-(_UIStatusBarDisplayItemState *)itemState;
-(id)itemStates;
-(void)setPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)setRequirement:(BOOL)arg1 ;
-(id)type;
-(void)setItemState:(_UIStatusBarDisplayItemState *)arg1 ;
@end

