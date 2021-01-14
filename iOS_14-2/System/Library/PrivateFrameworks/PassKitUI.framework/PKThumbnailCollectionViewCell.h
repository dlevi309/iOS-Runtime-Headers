/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UILabel, NSString, UIImage, CNAvatarView;

@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _imageView;
	UILabel* _labelTitle;
	NSString* _title;
	UIImage* _image;
	CNAvatarView* _avatarView;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(CNAvatarView *)avatarView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_resetFonts;
-(void)_setupImageView:(id)arg1 ;
-(void)showAvatarView:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
@end

