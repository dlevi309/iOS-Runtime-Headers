/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, TLKLabel, TLKProminenceView;

@interface TLKSectionHeaderView : TLKView {

	TLKMultilineText* _headerText;
	TLKLabel* _headerTextLabel;
	TLKProminenceView* _backgroundView;

}

@property (nonatomic,retain) TLKLabel * headerTextLabel;                      //@synthesize headerTextLabel=_headerTextLabel - In the implementation block
@property (nonatomic,retain) TLKProminenceView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) TLKMultilineText * headerText;                   //@synthesize headerText=_headerText - In the implementation block
-(TLKProminenceView *)backgroundView;
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(TLKMultilineText *)headerText;
-(void)setHeaderText:(TLKMultilineText *)arg1 ;
-(id)headerLabelText;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultInsets;
-(void)setHeaderTextLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)headerTextLabel;
@end

