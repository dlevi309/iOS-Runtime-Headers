/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUAlbumListCellDelegate;
@class PUStackView, PUSharedAlbumAvatarView, UIView, NSString, UIFont, UITextField, UILabel, PXUIButton;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate> {

	BOOL _combinesPhotoDecorations;
	BOOL _topInsetEnabled;
	BOOL _showsAvatarView;
	BOOL _editing;
	BOOL _enabled;
	BOOL _showsDeleteButtonWhenEditing;
	BOOL _highlighted;
	BOOL __showsTitleAndSubtitle;
	BOOL _usesLabelForTitle;
	id<PUAlbumListCellDelegate> _delegate;
	PUStackView* _stackView;
	PUSharedAlbumAvatarView* _avatarView;
	UIView* _customImageView;
	NSString* _title;
	NSString* _subtitle;
	double _xInset;
	long long _layout;
	unsigned long long _editCapabilities;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	UITextField* __titleTextField;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	PXUIButton* __deleteButton;

}

@property (setter=_setStackView:,nonatomic,retain) PUStackView * stackView;                              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PUSharedAlbumAvatarView * avatarView;                                       //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,setter=_setShowsTitleAndSubtitle:,nonatomic) BOOL _showsTitleAndSubtitle;              //@synthesize _showsTitleAndSubtitle=__showsTitleAndSubtitle - In the implementation block
@property (setter=_setTitleTextField:,nonatomic,retain) UITextField * _titleTextField;                   //@synthesize _titleTextField=__titleTextField - In the implementation block
@property (setter=_setTitleLabel:,nonatomic,retain) UILabel * _titleLabel;                               //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,nonatomic,retain) UILabel * _subtitleLabel;                         //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (setter=_setDeleteButton:,nonatomic,retain) PXUIButton * _deleteButton;                        //@synthesize _deleteButton=__deleteButton - In the implementation block
@property (assign,nonatomic) BOOL usesLabelForTitle;                                                     //@synthesize usesLabelForTitle=_usesLabelForTitle - In the implementation block
@property (assign,nonatomic,__weak) id<PUAlbumListCellDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * springLoadingTargetView; 
@property (assign,nonatomic) BOOL combinesPhotoDecorations;                                              //@synthesize combinesPhotoDecorations=_combinesPhotoDecorations - In the implementation block
@property (assign,nonatomic) BOOL topInsetEnabled;                                                       //@synthesize topInsetEnabled=_topInsetEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsAvatarView;                                                       //@synthesize showsAvatarView=_showsAvatarView - In the implementation block
@property (nonatomic,retain) UIView * customImageView;                                                   //@synthesize customImageView=_customImageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) double xInset;                                                              //@synthesize xInset=_xInset - In the implementation block
@property (assign,nonatomic) long long layout;                                                           //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long editCapabilities;                                        //@synthesize editCapabilities=_editCapabilities - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                              //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButtonWhenEditing;                                          //@synthesize showsDeleteButtonWhenEditing=_showsDeleteButtonWhenEditing - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                         //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                                                      //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                      //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)_updateTitleFieldAnimated:(BOOL)arg1 ;
-(void)_setShowsTitleAndSubtitle:(BOOL)arg1 ;
-(void)cancelPerformRetitleAction;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(UIView *)customImageView;
-(id<PUAlbumListCellDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_updateStackViewAnimated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(PUStackView *)stackView;
-(UIFont *)titleFont;
-(void)prepareForReuse;
-(PUSharedAlbumAvatarView *)avatarView;
-(BOOL)isEditing;
-(void)setShowsTitle:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)_subtitleLabel;
-(void)setDelegate:(id<PUAlbumListCellDelegate>)arg1 ;
-(void)setEditCapabilities:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)_setStackView:(id)arg1 ;
-(PXUIButton *)_deleteButton;
-(void)_setSubtitleLabel:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_setTitleTextField:(id)arg1 ;
-(UITextField *)_titleTextField;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)_titleTextFieldClearButtonModeForLayout:(long long)arg1 ;
-(void)_updateAvatarView;
-(UIFont *)subtitleFont;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isHighlighted;
-(BOOL)topInsetEnabled;
-(unsigned long long)editCapabilities;
-(BOOL)_showsTitleAndSubtitle;
-(void)handleLabelTap:(id)arg1 ;
-(void)setXInset:(double)arg1 ;
-(void)setShowsAvatarView:(BOOL)arg1 ;
-(void)setShowsDeleteButtonWhenEditing:(BOOL)arg1 ;
-(void)_updateSubviewOrdering;
-(void)setUsesLabelForTitle:(BOOL)arg1 ;
-(BOOL)showsAvatarView;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCombinesPhotoDecorations:(BOOL)arg1 ;
-(BOOL)showsDeleteButtonWhenEditing;
-(BOOL)usesLabelForTitle;
-(void)setAvatarView:(PUSharedAlbumAvatarView *)arg1 ;
-(double)xInset;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)combinesPhotoDecorations;
-(void)setEditing:(BOOL)arg1 ;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2 ;
-(CGPoint)_deleteButtonCenter;
-(UILabel *)_titleLabel;
-(void)_updateSubtitleLabelStyle;
-(void)_setDeleteButton:(id)arg1 ;
-(void)_setTitleLabel:(id)arg1 ;
-(void)_updateTitleStyle;
-(double)_titleFieldAlpha;
-(void)setLayout:(long long)arg1 ;
-(void)_updateSubtitleLabelAnimated:(BOOL)arg1 ;
-(void)_deleteAction:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setTopInsetEnabled:(BOOL)arg1 ;
-(UIView *)springLoadingTargetView;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setEditCapabilities:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateDeleteButtonAnimated:(BOOL)arg1 ;
-(NSString *)title;
-(void)setCustomImageView:(UIView *)arg1 ;
-(long long)layout;
-(void)setHighlighted:(BOOL)arg1 ;
@end

