/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPTextStyleable.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class UILabel, LPTextViewStyle, NSAttributedString;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {

	UILabel* _textView;
	long long _overrideMaximumNumberOfLines;
	UIEdgeInsets _contentInset;
	LPTextViewStyle* _style;
	NSAttributedString* _attributedString;
	double _ascender;
	double _descender;

}

@property (nonatomic,retain,readonly) NSAttributedString * attributedString; 
@property (nonatomic,retain,readonly) LPTextViewStyle * style; 
-(id)init;
-(LPTextViewStyle *)style;
-(NSAttributedString *)attributedString;
-(double)descender;
-(double)ascender;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)lastBaselineAnchor;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)firstBaselineAnchor;
-(void)layoutComponentView;
-(id)initWithText:(id)arg1 style:(id)arg2 ;
-(double)firstLineLeading;
-(double)lastLineDescent;
-(long long)computedNumberOfLines;
-(void)setOverrideMaximumNumberOfLines:(long long)arg1 ;
-(id)_createTextViewWithAttributedString:(id)arg1 style:(id)arg2 ;
-(long long)effectiveMaximumNumberOfLines;
-(UIEdgeInsets)effectiveInsets;
@end

