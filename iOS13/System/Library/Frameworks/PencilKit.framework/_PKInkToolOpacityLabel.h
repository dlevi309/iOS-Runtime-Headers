/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _PKInkToolOpacityLabel : UIView {

	unsigned long long _sizeState;
	double _inkOpacity;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long sizeState;              //@synthesize sizeState=_sizeState - In the implementation block
@property (assign,nonatomic) double inkOpacity;                         //@synthesize inkOpacity=_inkOpacity - In the implementation block
+(id)_fontForSizeState:(unsigned long long)arg1 ;
+(double)_labelAlphaForInkOpacity:(double)arg1 ;
+(BOOL)_shouldHideLabel:(double)arg1 ;
+(id)_formattedStringForInkOpacity:(double)arg1 ;
+(double)_maxLabelHeightForSizeState:(unsigned long long)arg1 ;
+(double)_toolOffsetForSizeState:(unsigned long long)arg1 ;
+(double)_labelOffsetFromBottomEdgeForSizeState:(unsigned long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)_frameForRotatedLabel;
-(unsigned long long)sizeState;
-(id)_inkOpacityLabelString;
-(double)inkOpacity;
-(void)setInkOpacity:(double)arg1 animated:(BOOL)arg2 ;
-(void)setSizeState:(unsigned long long)arg1 ;
-(void)setInkOpacity:(double)arg1 ;
@end

