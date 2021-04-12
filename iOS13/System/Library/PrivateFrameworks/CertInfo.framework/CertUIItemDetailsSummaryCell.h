/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell {

	NSArray* _detailViews;
	double _detailLabelOriginX;

}

@property (nonatomic,retain) NSArray * detailViews;                  //@synthesize detailViews=_detailViews - In the implementation block
@property (assign,nonatomic) double detailLabelOriginX;              //@synthesize detailLabelOriginX=_detailLabelOriginX - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)detailViews;
-(void)setDetailViews:(NSArray *)arg1 ;
-(void)setDetailLabelOriginX:(double)arg1 ;
-(void)createViewWithDescriptors:(id)arg1 ;
-(void)createViewWithItemDetailArray:(id)arg1 ;
-(double)detailLabelOriginX;
@end

