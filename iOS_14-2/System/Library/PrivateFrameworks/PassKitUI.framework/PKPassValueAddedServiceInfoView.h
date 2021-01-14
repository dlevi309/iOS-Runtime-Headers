/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPass, PKPassSnapshotter, UILabel, UIImageView;

@interface PKPassValueAddedServiceInfoView : UIView {

	long long _style;
	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UILabel* _labelView;
	UIImageView* _snapshotView;
	UILabel* _statusView;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKPass * pass;                //@synthesize pass=_pass - In the implementation block
-(void)setPass:(PKPass *)arg1 ;
-(id)_statusAttributedStringForStyle:(long long)arg1 ;
-(void)_calculateViewMetricsForWidth:(double)arg1 labelSize:(CGSize*)arg2 statusSize:(CGSize*)arg3 baselineAdjustment:(double*)arg4 ;
-(void)setPass:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelAttributedStringForString:(id)arg1 ;
-(id)_statusFont;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPass *)pass;
-(CGSize)_snapshotSize;
-(double)_baselineDistance;
-(void)setStyle:(long long)arg1 ;
-(id)_labelFont;
-(long long)style;
-(void)dealloc;
@end

