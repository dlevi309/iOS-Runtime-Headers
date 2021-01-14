/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell {

	UIImageView* _contactImageView;

}

@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
-(void)prepareForReuse;
-(BOOL)moreHighlighted;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(void)reloadData;
-(void)_updateFonts;
-(void)awakeFromNib;
@end

