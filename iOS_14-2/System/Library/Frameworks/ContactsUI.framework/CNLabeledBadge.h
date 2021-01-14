/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface CNLabeledBadge : UIView {

	UILabel* _label;
	double _height;
	CGSize _cachedTextSize;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,copy) UIColor * textColor; 
+(id)labeledBadgeWithText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)cacheTextSizeIfNeeded;
-(void)invalidateCachedTextSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(UIFont *)font;
@end

