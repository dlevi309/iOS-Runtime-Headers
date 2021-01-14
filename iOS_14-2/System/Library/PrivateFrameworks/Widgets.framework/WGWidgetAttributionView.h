/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_attributionBackgroundColor;
-(id)_paragraphStyle;
-(id)_attributionFont;
-(void)layoutSubviews;
-(UIColor *)legibilityTextColor;
-(void)setLegibilityTextColor:(UIColor *)arg1 ;
-(void)_configureAttributedString;
-(id)initWithWidgetAttributedString:(id)arg1 ;
@end

