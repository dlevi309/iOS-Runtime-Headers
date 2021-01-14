/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HFServiceNameComponents, NSString, UIColor, UIFont;

@interface HUGridServiceCellTextView : UIView {

	BOOL _textColorFollowsTintColor;
	BOOL _shouldShowRoomName;
	double _lineHeight;
	HFServiceNameComponents* _serviceNameComponents;
	NSString* _descriptionText;
	UIColor* _textColor;
	double _descriptionTextColorDimmingFactor;
	UIFont* _font;
	unsigned long long _mode;

}

@property (assign,nonatomic) unsigned long long mode;                                      //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) HFServiceNameComponents * serviceNameComponents;              //@synthesize serviceNameComponents=_serviceNameComponents - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                   //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL textColorFollowsTintColor;                               //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) double descriptionTextColorDimmingFactor;                     //@synthesize descriptionTextColorDimmingFactor=_descriptionTextColorDimmingFactor - In the implementation block
@property (assign,nonatomic) double lineHeight;                                            //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldShowRoomName;                                      //@synthesize shouldShowRoomName=_shouldShowRoomName - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) double topToFirstBaselineDistance; 
@property (nonatomic,readonly) double lastBaselineToBottomDistance; 
+(double)minimumDescriptionScaleFactor;
-(unsigned long long)mode;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)lineHeight;
-(HFServiceNameComponents *)serviceNameComponents;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)textColorFollowsTintColor;
-(void)setShouldShowRoomName:(BOOL)arg1 ;
-(UIFont *)font;
-(void)setDescriptionTextColorDimmingFactor:(double)arg1 ;
-(BOOL)shouldShowRoomName;
-(void)_updateMode;
-(id)_commonTextAttributesWithLineBreakMode:(long long)arg1 ;
-(id)_combinedAttributedString;
-(void)_drawSeperateLabels;
-(void)_drawCombinedLabel;
-(void)_drawDescriptionLabel;
-(id)_effectiveTextColor;
-(double)descriptionTextColorDimmingFactor;
-(void)setServiceNameComponents:(HFServiceNameComponents *)arg1 ;
-(double)topToFirstBaselineDistance;
-(double)lastBaselineToBottomDistance;
@end

