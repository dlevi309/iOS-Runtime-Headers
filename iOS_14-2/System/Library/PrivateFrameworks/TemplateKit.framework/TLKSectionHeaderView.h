/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(TLKProminenceView *)backgroundView;
-(void)setHeaderTextLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)headerTextLabel;
-(id)headerLabelText;
-(void)setHeaderText:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)headerText;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultLayoutMargins;
@end

