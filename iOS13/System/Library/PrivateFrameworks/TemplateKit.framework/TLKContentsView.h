/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>

@class TLKLabel, NSMutableArray;

@interface TLKContentsView : TLKStackView {

	TLKLabel* _titleLabel;
	NSMutableArray* _detailsLabels;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailsLabels;              //@synthesize detailsLabels=_detailsLabels - In the implementation block
+(id)detailsLabel;
-(id)init;
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(NSMutableArray *)detailsLabels;
-(void)updateWithTitle:(id)arg1 contents:(id)arg2 ;
-(void)setDetailsLabels:(NSMutableArray *)arg1 ;
@end

