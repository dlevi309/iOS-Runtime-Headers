/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPTextStyleable.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class LPTextView, LPCaptionButtonPresentationProperties, UIButton;

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable> {

	LPTextView* _leftView;
	LPTextView* _rightView;
	LPCaptionButtonPresentationProperties* _buttonProperties;
	UIEdgeInsets _contentInset;
	long long _balancingMode;
	UIButton* _button;

}
-(id)init;
-(double)descender;
-(double)ascender;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)layoutComponentView;
-(double)firstLineLeading;
-(double)lastLineDescent;
-(long long)computedNumberOfLines;
-(void)setOverrideMaximumNumberOfLines:(long long)arg1 ;
-(CGSize)_layoutCaptionPairForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4 button:(id)arg5 balancingMode:(long long)arg6 ;
@end

