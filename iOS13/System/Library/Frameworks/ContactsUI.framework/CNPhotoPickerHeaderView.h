/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@protocol CNPhotoPickerHeaderViewDelegate;
@class CNContactPhotoView, UIView, NSArray, UIButton;

@interface CNPhotoPickerHeaderView : UIView {

	BOOL _allowsEditing;
	CNContactPhotoView* _photoView;
	id<CNPhotoPickerHeaderViewDelegate> _delegate;
	UIView* _headerDropShadowView;
	NSArray* _subviewsConstraints;
	UIButton* _editButton;

}

@property (nonatomic,retain) CNContactPhotoView * photoView;                                   //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) UIView * headerDropShadowView;                                    //@synthesize headerDropShadowView=_headerDropShadowView - In the implementation block
@property (nonatomic,retain) NSArray * subviewsConstraints;                                    //@synthesize subviewsConstraints=_subviewsConstraints - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                            //@synthesize editButton=_editButton - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                               //@synthesize allowsEditing=_allowsEditing - In the implementation block
-(id<CNPhotoPickerHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<CNPhotoPickerHeaderViewDelegate>)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(CNContactPhotoView *)photoView;
-(UIButton *)editButton;
-(void)setEditButton:(UIButton *)arg1 ;
-(void)updatePhoto;
-(UIView *)headerDropShadowView;
-(void)setHeaderDropShadowView:(UIView *)arg1 ;
-(NSArray *)subviewsConstraints;
-(void)setSubviewsConstraints:(NSArray *)arg1 ;
-(void)photoViewTapped;
-(void)setPhotoView:(CNContactPhotoView *)arg1 ;
@end

