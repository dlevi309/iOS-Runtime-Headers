/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell {

	BOOL __ck_editing;
	BOOL _hidesCheckmark;
	UIImageView* _checkmark;
	CGRect _contentAlignmentRect;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) UIImageView * checkmark;                                                   //@synthesize checkmark=_checkmark - In the implementation block
@property (assign,nonatomic) CGRect contentAlignmentRect;                                               //@synthesize contentAlignmentRect=_contentAlignmentRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentAlignmentInsets; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                 //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize _ck_editing=__ck_editing - In the implementation block
@property (assign,nonatomic) BOOL hidesCheckmark;                                                       //@synthesize hidesCheckmark=_hidesCheckmark - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)hidesCheckmark;
-(void)_ck_setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)contentAlignmentRect;
-(UIEdgeInsets)contentAlignmentInsets;
-(UIEdgeInsets)contentInsets;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIEdgeInsets)_horizontalSafeAreaInsets;
-(void)setContentAlignmentRect:(CGRect)arg1 ;
-(void)setHidesCheckmark:(BOOL)arg1 ;
-(void)updateCheckmarkImage;
-(id)description;
-(void)layoutSubviews;
-(BOOL)_ck_isEditing;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

