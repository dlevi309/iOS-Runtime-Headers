/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell {

	BOOL _editing;
	UIImageView* _checkmarkView;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                //@synthesize checkmarkView=_checkmarkView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
@end

