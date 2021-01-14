/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(id)init;
-(double)ascender;
-(double)firstLineLeading;
-(double)lastLineDescent;
-(long long)computedNumberOfLines;
-(void)setOverrideMaximumNumberOfLines:(long long)arg1 ;
-(CGSize)_layoutCaptionPairForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4 button:(id)arg5 balancingMode:(long long)arg6 ;
-(void)buttonPressed:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)descender;
@end

