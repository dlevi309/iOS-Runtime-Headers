/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITextView, NSArray, NSLayoutConstraint, NSAttributedString, NSString;

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView {

	BOOL _includeBottomSpacing;
	UITextView* _messageTextView;
	NSArray* _constraints;
	NSLayoutConstraint* _bottomSpacingConstraint;

}

@property (nonatomic,retain) UITextView * messageTextView;                              //@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                     //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomSpacingConstraint;              //@synthesize bottomSpacingConstraint=_bottomSpacingConstraint - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedMessage; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (assign,nonatomic) BOOL includeBottomSpacing;                                 //@synthesize includeBottomSpacing=_includeBottomSpacing - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSString *)message;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)updateConstraints;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(unsigned long long)numberOfLines;
-(UITextView *)messageTextView;
-(void)setIncludeBottomSpacing:(BOOL)arg1 ;
-(void)setMessageTextView:(UITextView *)arg1 ;
-(double)_bottomSpacing;
-(NSLayoutConstraint *)bottomSpacingConstraint;
-(BOOL)includeBottomSpacing;
-(void)setBottomSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedMessage;
@end

