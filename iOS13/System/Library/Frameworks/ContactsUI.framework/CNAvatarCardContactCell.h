/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell {

	UIImageView* _contactImageView;

}

@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
-(void)prepareForReuse;
-(void)reloadData;
-(void)awakeFromNib;
-(void)_updateFonts;
-(BOOL)moreHighlighted;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
@end

