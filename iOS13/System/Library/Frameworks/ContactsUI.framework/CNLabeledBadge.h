/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)invalidateCachedTextSize;
-(void)cacheTextSizeIfNeeded;
@end

