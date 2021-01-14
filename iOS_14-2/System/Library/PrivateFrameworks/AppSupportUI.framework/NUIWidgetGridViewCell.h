/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/NUIWidgetGridViewCell.h>

@protocol NUIWidgetGridViewCell
@property (nonatomic,readonly) unsigned long long index; 
@required
-(unsigned long long)index;
-(CGSize*)donatableSpaceAllowRemeasure:(BOOL)arg1;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
-(CGSize*)donatableSpace;

@end


@class NUIWidgetGridView, UIImageView, UILabel, NSString;

@interface NUIWidgetGridViewCell : NUIContainerStackView <NUIContainerViewDelegate, NUIWidgetGridViewCell> {

	double _width;
	CGSize _measuredSize;
	unsigned long long _index;
	BOOL _donatableSpaceIsValid;
	BOOL _accessibilityEnabled;
	CGSize _donatableSpace;
	NUIWidgetGridView* _gridView;

}

@property (nonatomic,__weak,readonly) NUIWidgetGridView * gridView;              //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long index; 
-(UILabel *)titleLabel;
-(NUIWidgetGridView *)gridView;
-(unsigned long long)index;
-(UIImageView *)imageView;
-(UILabel *)subtitleLabel;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)invalidateIntrinsicContentSize;
-(void)_didTapButton;
-(CGSize)donatableSpaceAllowRemeasure:(BOOL)arg1 ;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3 ;
-(CGSize)donatableSpace;
@end

