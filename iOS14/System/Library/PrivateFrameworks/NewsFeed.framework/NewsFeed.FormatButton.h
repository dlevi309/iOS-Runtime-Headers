/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSString;

@interface NewsFeed.FormatButton : UIControl {

	 onTap;
	 formatLayoutView;
	 stateMaskFormatLayoutViews;
	 actions;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityIdentifier; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL enabled; 
-(NSString *)accessibilityLabel;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(NSString *)accessibilityHint;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setHighlighted:(BOOL)arg1 ;
@end

