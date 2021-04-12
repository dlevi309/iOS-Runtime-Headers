/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(id)init;
-(NSMutableArray *)detailsLabels;
-(void)updateWithTitle:(id)arg1 contents:(id)arg2 ;
-(void)setDetailsLabels:(NSMutableArray *)arg1 ;
@end

