/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(id)init;
-(double)ascender;
-(id)initWithText:(id)arg1 style:(id)arg2 ;
-(double)firstLineLeading;
-(double)lastLineDescent;
-(long long)computedNumberOfLines;
-(void)setOverrideMaximumNumberOfLines:(long long)arg1 ;
-(NSAttributedString *)attributedString;
-(id)firstBaselineAnchor;
-(id)_createTextViewWithAttributedString:(id)arg1 style:(id)arg2 ;
-(long long)effectiveMaximumNumberOfLines;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)descender;
-(UIEdgeInsets)effectiveInsets;
-(id)lastBaselineAnchor;
-(LPTextViewStyle *)style;
@end

