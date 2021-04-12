/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)cellHeightForDisplayScale:(double)arg1 ;
+(id)identifierForConversation:(id)arg1 ;
+(id)hyphenationParagraphStyle;
-(void)setFirstLineLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)firstLineLayoutGuide;
-(id)_constraintForEditing:(BOOL)arg1 ;
-(void)setEditingDependentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)editingDependentConstraint;
-(NSTextAttachment *)unreadIndicatorAttachment;
-(id)_contentSizeCategoryDependentConstraints;
-(void)setContentSizeCategoryDependentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentSizeCategoryDependentConstraints;
-(void)setUnreadIndicatorColor:(UIColor *)arg1 ;
-(void)setUnreadIndicatorAttachment:(NSTextAttachment *)arg1 ;
-(UIColor *)unreadIndicatorColor;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)contentSizeCategoryDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

