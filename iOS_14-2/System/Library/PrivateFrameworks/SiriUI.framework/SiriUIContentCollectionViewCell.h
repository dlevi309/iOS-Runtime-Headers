/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIKeyline, UIImageView, NSLayoutConstraint, NSMutableArray, UIView, UILabel, UIColor;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {

	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	BOOL _hasSetUpSubviewConstraints;
	BOOL _hasSetupStaticSubviewConstraints;
	NSLayoutConstraint* leftChevronWidthConstraint;
	NSLayoutConstraint* rightChevronWidthConstraint;
	NSMutableArray* _subviewConstraints;
	BOOL _hasChevron;
	long long _verticalAlignment;
	UIView* _accessoryView;
	UILabel* _textLabel;
	UIView* _customView;
	long long _keylineType;
	UIOffset _textOffset;
	UIOffset _accessoryOffset;
	UIOffset _chevronOffset;
	UIEdgeInsets _textAndAccessoryInsets;
	UIEdgeInsets _customViewEdgeInsets;

}

@property (assign,nonatomic) long long verticalAlignment;                         //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAndAccessoryInsets;                 //@synthesize textAndAccessoryInsets=_textAndAccessoryInsets - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                              //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIView * customView;                                 //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets customViewEdgeInsets;                   //@synthesize customViewEdgeInsets=_customViewEdgeInsets - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                                 //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) UIOffset accessoryOffset;                            //@synthesize accessoryOffset=_accessoryOffset - In the implementation block
@property (assign,nonatomic) UIOffset chevronOffset;                              //@synthesize chevronOffset=_chevronOffset - In the implementation block
@property (nonatomic,readonly) double chevronTrailingMargin; 
@property (nonatomic,readonly) SiriUIKeyline * keyline;                           //@synthesize keyline=_keyline - In the implementation block
@property (assign,nonatomic) long long keylineType;                               //@synthesize keylineType=_keylineType - In the implementation block
@property (nonatomic,retain) UIColor * keylineCustomBackgroundColor; 
@property (assign,nonatomic) BOOL hasChevron;                                     //@synthesize hasChevron=_hasChevron - In the implementation block
+(id)reuseIdentifier;
+(BOOL)chevronBlendEffectEnabled;
+(UIEdgeInsets)defaultInsets;
+(double)chevronTrailingMargin;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIOffset)accessoryOffset;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(UIView *)customView;
-(void)updateConstraints;
-(SiriUIKeyline *)keyline;
-(UIOffset)textOffset;
-(void)setCustomView:(UIView *)arg1 ;
-(long long)verticalAlignment;
-(void)setTextOffset:(UIOffset)arg1 ;
-(UILabel *)textLabel;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setKeylineType:(long long)arg1 ;
-(void)setNeedsUpdateSubviewConstraints;
-(void)_updateSubviewConstraints;
-(double)chevronTrailingMargin;
-(void)setKeylineCustomBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)keylineCustomBackgroundColor;
-(void)setAccessoryOffset:(UIOffset)arg1 ;
-(void)setHasChevron:(BOOL)arg1 ;
-(UIEdgeInsets)textAndAccessoryInsets;
-(void)setTextAndAccessoryInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)customViewEdgeInsets;
-(void)setCustomViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIOffset)chevronOffset;
-(void)setChevronOffset:(UIOffset)arg1 ;
-(long long)keylineType;
-(BOOL)hasChevron;
@end

