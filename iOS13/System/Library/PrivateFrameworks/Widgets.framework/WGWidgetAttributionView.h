/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <UIKitCore/UITextView.h>

@class NSMutableAttributedString, UIColor;

@interface WGWidgetAttributionView : UITextView {

	NSMutableAttributedString* _widgetAttributedString;
	UIColor* _legibilityTextColor;

}

@property (nonatomic,retain) UIColor * legibilityTextColor;              //@synthesize legibilityTextColor=_legibilityTextColor - In the implementation block
+(void)requestAttributedStringForIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(id)widgetAttributionIDsInOrder;
-(void)layoutSubviews;
-(id)initWithWidgetAttributedString:(id)arg1 ;
-(void)setLegibilityTextColor:(UIColor *)arg1 ;
-(void)_configureAttributedString;
-(id)_attributionBackgroundColor;
-(id)_attributionFont;
-(id)_paragraphStyle;
-(UIColor *)legibilityTextColor;
@end

