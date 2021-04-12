/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)index;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)invalidateIntrinsicContentSize;
-(UILabel *)subtitleLabel;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(id)_createButtonWithGridView:(id)arg1 item:(id)arg2 ;
-(id)_createLabelForStyle:(long long)arg1 ;
-(id)currentFont;
-(void)_didTapButton;
-(CGSize)donatableSpaceAllowRemeasure:(BOOL)arg1 ;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3 ;
-(CGSize)donatableSpace;
-(NUIWidgetGridView *)gridView;
@end

