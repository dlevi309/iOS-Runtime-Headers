/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell {

	BOOL _editing;
	BOOL _hidesCheckmark;
	UIImageView* _checkmark;
	CGRect _contentAlignmentRect;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) UIImageView * checkmark;                            //@synthesize checkmark=_checkmark - In the implementation block
@property (assign,nonatomic) CGRect contentAlignmentRect;                        //@synthesize contentAlignmentRect=_contentAlignmentRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentAlignmentInsets; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                          //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                      //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL hidesCheckmark;                                //@synthesize hidesCheckmark=_hidesCheckmark - In the implementation block
-(id)description;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(CGRect)contentAlignmentRect;
-(UIEdgeInsets)contentAlignmentInsets;
-(UIImageView *)checkmark;
-(UIEdgeInsets)_horizontalSafeAreaInsets;
-(void)setContentAlignmentRect:(CGRect)arg1 ;
-(void)updateCheckmarkImage;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(BOOL)hidesCheckmark;
-(void)setHidesCheckmark:(BOOL)arg1 ;
@end

