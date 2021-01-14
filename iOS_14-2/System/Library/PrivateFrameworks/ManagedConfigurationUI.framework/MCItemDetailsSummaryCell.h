/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface MCItemDetailsSummaryCell : UITableViewCell {

	NSArray* _detailViews;
	double _detailLabelOriginX;

}

@property (nonatomic,retain) NSArray * detailViews;                  //@synthesize detailViews=_detailViews - In the implementation block
@property (assign,nonatomic) double detailLabelOriginX;              //@synthesize detailLabelOriginX=_detailLabelOriginX - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)createViewWithDescriptors:(id)arg1 ;
-(NSArray *)detailViews;
-(void)setDetailViews:(NSArray *)arg1 ;
-(void)setDetailLabelOriginX:(double)arg1 ;
-(void)createViewWithItemDetailArray:(id)arg1 ;
-(double)detailLabelOriginX;
@end

