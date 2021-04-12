/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactHeaderView.h>

@class UIButton, NSLayoutConstraint;

@interface CNContactHeaderEditView : CNContactHeaderView {

	BOOL _allowsEditPhoto;
	UIButton* _editButton;
	NSLayoutConstraint* _editButtonHeightConstraint;
	CGSize _maxButtonSize;

}

@property (assign,nonatomic) CGSize maxButtonSize;                                         //@synthesize maxButtonSize=_maxButtonSize - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                        //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * editButtonHeightConstraint;              //@synthesize editButtonHeightConstraint=_editButtonHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL allowsEditPhoto;                                         //@synthesize allowsEditPhoto=_allowsEditPhoto - In the implementation block
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 monogramOnly:(BOOL)arg4 ;
+(id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
+(id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 showingNavBar:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
-(double)maxHeight;
-(void)updateConstraints;
-(BOOL)hasPhoto;
-(void)updateWithContacts:(id)arg1 ;
-(void)updateFontSizes;
-(double)defaultMaxHeight;
-(void)calculateLabelSizesIfNeeded;
-(void)updateSizeDependentAttributes;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 delegate:(id)arg4 showingNavBar:(BOOL)arg5 monogramOnly:(BOOL)arg6 ;
-(void)setAllowsEditPhoto:(BOOL)arg1 ;
-(void)setAllowsEditPhoto:(BOOL)arg1 preservingChanges:(BOOL)arg2 ;
-(void)updateEditButtonTitle;
-(BOOL)photoIsModified;
-(void)saveContactPhoto;
-(void)editButtonPressed;
-(void)updateContactWithEditedPropertyItem:(id)arg1 ;
-(BOOL)allowsEditPhoto;
-(CGSize)maxButtonSize;
-(void)setMaxButtonSize:(CGSize)arg1 ;
-(UIButton *)editButton;
-(void)setEditButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)editButtonHeightConstraint;
-(void)setEditButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

