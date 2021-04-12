/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UITextView.h>

@class NSString, UITapGestureRecognizer, UIViewController;

@interface ICLearnMoreTextView : UITextView {

	BOOL _isShowingLearnMore;
	NSString* _helpTopicID;
	NSString* _helpVersion;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL isShowingLearnMore;                                     //@synthesize isShowingLearnMore=_isShowingLearnMore - In the implementation block
@property (nonatomic,retain) NSString * helpTopicID;                                      //@synthesize helpTopicID=_helpTopicID - In the implementation block
@property (nonatomic,retain) NSString * helpVersion;                                      //@synthesize helpVersion=_helpVersion - In the implementation block
-(BOOL)isAccessibilityElement;
-(UIViewController *)parentViewController;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(BOOL)_accessibilityHasTextOperations;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)updateForAccessibilityDarkerSystemColors;
-(void)setIsShowingLearnMore:(BOOL)arg1 ;
-(id)attributedString:(id)arg1 withColor:(id)arg2 font:(id)arg3 ;
-(void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(BOOL)arg4 ;
-(void)resetTextView;
-(void)didTapLearnMore;
-(NSString *)helpTopicID;
-(NSString *)helpVersion;
-(BOOL)isShowingLearnMore;
-(void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(BOOL)arg5 ;
-(void)setAttributedText:(id)arg1 addLearnMore:(BOOL)arg2 ;
-(void)sizeToFitWidthUsingHeightConstraint:(id)arg1 ;
-(void)setHelpTopicID:(NSString *)arg1 ;
-(void)setHelpVersion:(NSString *)arg1 ;
@end

