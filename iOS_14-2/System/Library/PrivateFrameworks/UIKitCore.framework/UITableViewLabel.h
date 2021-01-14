/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSAttributedString, UITableViewCell;

@interface UITableViewLabel : UILabel {

	long long _savedNumberOfLines;
	double _firstParagraphFirstLineHeadIndent;
	NSAttributedString* _shadowAttributedText;
	BOOL _usingDefaultFont;
	UITableViewCell* _tableCell;

}

@property (assign,nonatomic,__weak) UITableViewCell * tableCell;              //@synthesize tableCell=_tableCell - In the implementation block
@property (nonatomic,readonly) BOOL usingDefaultFont;                         //@synthesize usingDefaultFont=_usingDefaultFont - In the implementation block
-(void)_restoreNumberOfLines;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setDefaultFont:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)_cleanupErrantFirstLineHeadIndent;
-(UITableViewCell *)tableCell;
-(void)setText:(id)arg1 ;
-(BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1 ;
-(id)_disabledFontColor;
-(void)_setNumberOfLinesForAXLayoutIfNecessary;
-(BOOL)usingDefaultFont;
-(id)initWithCoder:(id)arg1 ;
-(void)_clearNumberOfLines;
-(void)setTableCell:(UITableViewCell *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setFirstParagraphFirstLineHeadIndent:(double)arg1 ;
@end

