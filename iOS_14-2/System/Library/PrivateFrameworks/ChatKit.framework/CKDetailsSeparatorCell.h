/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>

@class UIView;

@interface CKDetailsSeparatorCell : CKDetailsCell {

	BOOL _indentSeparator;
	double _leadingSpace;
	UIView* _separatorView;

}

@property (assign,nonatomic) double leadingSpace;                   //@synthesize leadingSpace=_leadingSpace - In the implementation block
@property (assign,nonatomic) BOOL indentSeparator;                  //@synthesize indentSeparator=_indentSeparator - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
+(double)defaultHeight;
+(double)defaultLeadingSpace;
+(id)reuseIdentifier;
-(UIView *)separatorView;
-(double)leadingSpace;
-(void)setIndentSeparator:(BOOL)arg1 ;
-(BOOL)indentSeparator;
-(void)setLeadingSpace:(double)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

