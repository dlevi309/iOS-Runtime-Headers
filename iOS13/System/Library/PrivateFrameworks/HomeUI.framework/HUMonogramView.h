/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, NSArray, UIFont, UIColor, NSString;

@interface HUMonogramView : UIView {

	BOOL _needsComputeLayoutMetrics;
	UILabel* _monogramLabel;
	UIView* _backgroundView;
	unsigned long long _style;
	NSArray* _labelLayoutConstraints;
	UIEdgeInsets _bubbleEdgeOutsets;

}

@property (nonatomic,readonly) UILabel * monogramLabel;                   //@synthesize monogramLabel=_monogramLabel - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL needsComputeLayoutMetrics;              //@synthesize needsComputeLayoutMetrics=_needsComputeLayoutMetrics - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bubbleEdgeOutsets;              //@synthesize bubbleEdgeOutsets=_bubbleEdgeOutsets - In the implementation block
@property (nonatomic,copy) NSArray * labelLayoutConstraints;              //@synthesize labelLayoutConstraints=_labelLayoutConstraints - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * monogramString; 
+(unsigned long long)desiredStyleForString:(id)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(UIFont *)font;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIColor *)textColor;
-(void)setMonogramString:(NSString *)arg1 ;
-(void)_setupBackgroundView:(CGRect)arg1 ;
-(void)_setupMonogramLabel:(CGRect)arg1 ;
-(void)setNeedsComputeLayoutMetrics;
-(void)_computeLayoutMetrics;
-(UILabel *)monogramLabel;
-(NSArray *)labelLayoutConstraints;
-(void)setLabelLayoutConstraints:(NSArray *)arg1 ;
-(UIEdgeInsets)bubbleEdgeOutsets;
-(void)setNeedsComputeLayoutMetrics:(BOOL)arg1 ;
-(BOOL)needsComputeLayoutMetrics;
-(NSString *)monogramString;
-(void)setBubbleEdgeOutsets:(UIEdgeInsets)arg1 ;
@end

