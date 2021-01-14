/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer {

	GKCollectionViewCell* _currentEditingCell;

}

@property (nonatomic,retain) GKCollectionViewCell * currentEditingCell;              //@synthesize currentEditingCell=_currentEditingCell - In the implementation block
-(GKCollectionViewCell *)currentEditingCell;
-(void)setCurrentEditingCell:(GKCollectionViewCell *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

