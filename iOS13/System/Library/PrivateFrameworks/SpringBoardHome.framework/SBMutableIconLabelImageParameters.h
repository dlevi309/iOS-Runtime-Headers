/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconLabelImageParameters.h>

@class NSString, UIFont, UIColor;

@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) CGSize maxSize; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) BOOL containsEmoji; 
@property (assign,nonatomic) BOOL canTruncate; 
@property (assign,nonatomic) BOOL canTighten; 
@property (assign,nonatomic) long long legibilityStyle; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,getter=isAccessibilityReduceTransparencyEnabled,nonatomic) BOOL accessibilityReduceTransparencyEnabled; 
@property (nonatomic,copy) NSString * contentSizeCategory; 
@property (nonatomic,retain) UIColor * focusHighlightColor; 
@property (assign,nonatomic) UIEdgeInsets textInsets; 
@property (assign,nonatomic) UIEdgeInsets fontLanguageInsets; 
@property (nonatomic,copy) NSString * iconLocation; 
-(id)copy;
-(void)setScale:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(void)setIconLocation:(NSString *)arg1 ;
-(void)setCanTruncate:(BOOL)arg1 ;
-(void)setCanTighten:(BOOL)arg1 ;
-(void)setContainsEmoji:(BOOL)arg1 ;
-(void)setAccessibilityReduceTransparencyEnabled:(BOOL)arg1 ;
-(void)setFocusHighlightColor:(UIColor *)arg1 ;
-(void)setFontLanguageInsets:(UIEdgeInsets)arg1 ;
@end

