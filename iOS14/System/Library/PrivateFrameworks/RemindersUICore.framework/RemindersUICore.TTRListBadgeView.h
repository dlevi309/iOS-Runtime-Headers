/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
*/

#import <RemindersUICore/RemindersUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSArray;

@interface RemindersUICore.TTRListBadgeView : UIView {

	 listColor;
	 emoji;
	 emojiFontSize;
	 imageColor;
	 selected;
	 useEmojiColors;
	 shadowParams;
	 selectionBorderSpacing;
	 backgroundView;
	 selectedLayer;
	 shadowLayer;
	 imageView;
	 emojiView;
	 nonEmojiBackgroundViewGradientSettings;
	 emojiBackgroundViewGradientSettings;
	 layerColorsDirty;
	 ttrAccessibilityName;
	 ttrAccessibilityShouldIgnoreAccessibilityName;
	 ttrAccessibilityShouldIgnoreTintColorValue;

}

@property (assign,nonatomic) BOOL ttrAccessibilityShouldIgnoreAccessibilityName; 
@property (assign,nonatomic) BOOL ttrAccessibilityShouldIgnoreTintColorValue; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSArray * accessibilityUserInputLabels; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
-(NSString *)accessibilityLabel;
-(void)setAccessibilityUserInputLabels:(NSArray *)arg1 ;
-(void)tintColorDidChange;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSArray *)accessibilityUserInputLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)_dynamicUserInterfaceTraitDidChange;
-(unsigned long long)accessibilityTraits;
-(void)layoutSubviews;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ttrAccessibilityShouldIgnoreAccessibilityName;
-(void)setTtrAccessibilityShouldIgnoreAccessibilityName:(BOOL)arg1 ;
-(BOOL)ttrAccessibilityShouldIgnoreTintColorValue;
-(void)setTtrAccessibilityShouldIgnoreTintColorValue:(BOOL)arg1 ;
@end

