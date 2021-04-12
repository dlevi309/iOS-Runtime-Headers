/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIFontMetrics, NSString;

@interface AXDynamicTypeImageView : UIImageView {

	UIFontMetrics* _fontMetrics;
	NSString* _minimumContentSizeCategory;
	NSString* _maximumContentSizeCategory;

}

@property (nonatomic,retain) UIFontMetrics * fontMetrics;                      //@synthesize fontMetrics=_fontMetrics - In the implementation block
@property (nonatomic,copy) NSString * minimumContentSizeCategory;              //@synthesize minimumContentSizeCategory=_minimumContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * maximumContentSizeCategory;              //@synthesize maximumContentSizeCategory=_maximumContentSizeCategory - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(NSString *)minimumContentSizeCategory;
-(NSString *)maximumContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFontMetrics *)fontMetrics;
-(CGSize)_scaledSizeForSize:(CGSize)arg1 ;
-(void)setFontMetrics:(UIFontMetrics *)arg1 ;
-(void)_commonInit;
-(void)setMaximumContentSizeCategory:(NSString *)arg1 ;
-(void)setMinimumContentSizeCategory:(NSString *)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

