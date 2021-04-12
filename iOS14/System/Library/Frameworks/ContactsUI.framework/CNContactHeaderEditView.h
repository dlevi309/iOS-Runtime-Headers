/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 showingNavBar:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
+(id)sizeAttributesShowingNavBar:(BOOL)arg1 ;
+(id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
-(BOOL)hasPhoto;
-(UIButton *)editButton;
-(void)editButtonPressed;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 showingNavBar:(BOOL)arg4 monogramOnly:(BOOL)arg5 delegate:(id)arg6 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 delegate:(id)arg4 showingNavBar:(BOOL)arg5 monogramOnly:(BOOL)arg6 ;
-(void)updateWithContacts:(id)arg1 ;
-(void)updateFontSizes;
-(void)setEditButton:(UIButton *)arg1 ;
-(void)updateConstraints;
-(double)defaultMaxHeight;
-(void)didFinishUsing;
-(void)calculateLabelSizesIfNeeded;
-(void)updateSizeDependentAttributes;
-(void)setAllowsEditPhoto:(BOOL)arg1 ;
-(void)setAllowsEditPhoto:(BOOL)arg1 preservingChanges:(BOOL)arg2 ;
-(void)updateEditButtonTitle;
-(BOOL)photoIsModified;
-(void)saveContactPhoto;
-(void)updateContactWithEditedPropertyItem:(id)arg1 ;
-(BOOL)allowsEditPhoto;
-(CGSize)maxButtonSize;
-(void)setMaxButtonSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)editButtonHeightConstraint;
-(void)setEditButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)maxHeight;
@end

