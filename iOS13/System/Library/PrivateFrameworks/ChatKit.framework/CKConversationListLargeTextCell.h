/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKConversationListCell.h>

@class UILayoutGuide, NSLayoutConstraint, NSArray, NSTextAttachment, UIColor;

@interface CKConversationListLargeTextCell : CKConversationListCell {

	UILayoutGuide* _firstLineLayoutGuide;
	NSLayoutConstraint* _editingDependentConstraint;
	NSArray* _contentSizeCategoryDependentConstraints;
	NSTextAttachment* _unreadIndicatorAttachment;
	UIColor* _unreadIndicatorColor;

}

@property (nonatomic,retain) UILayoutGuide * firstLineLayoutGuide;                           //@synthesize firstLineLayoutGuide=_firstLineLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * editingDependentConstraint;                //@synthesize editingDependentConstraint=_editingDependentConstraint - In the implementation block
@property (nonatomic,retain) NSArray * contentSizeCategoryDependentConstraints;              //@synthesize contentSizeCategoryDependentConstraints=_contentSizeCategoryDependentConstraints - In the implementation block
@property (nonatomic,retain) NSTextAttachment * unreadIndicatorAttachment;                   //@synthesize unreadIndicatorAttachment=_unreadIndicatorAttachment - In the implementation block
@property (nonatomic,retain) UIColor * unreadIndicatorColor;                                 //@synthesize unreadIndicatorColor=_unreadIndicatorColor - In the implementation block
+(id)identifierForConversation:(id)arg1 ;
+(double)cellHeight;
+(id)hyphenationParagraphStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)unreadIndicatorColor;
-(void)contentSizeCategoryDidChange;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(void)setFirstLineLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)firstLineLayoutGuide;
-(id)_constraintForEditing:(BOOL)arg1 ;
-(void)setEditingDependentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)editingDependentConstraint;
-(id)_contentSizeCategoryDependentConstraints;
-(void)setContentSizeCategoryDependentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentSizeCategoryDependentConstraints;
-(NSTextAttachment *)unreadIndicatorAttachment;
-(void)setUnreadIndicatorColor:(UIColor *)arg1 ;
-(void)setUnreadIndicatorAttachment:(NSTextAttachment *)arg1 ;
@end

