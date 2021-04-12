/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSString, UIColor;

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {

	UILabel* _emojiSectionHeader;

}

@property (nonatomic,copy) NSString * headerName; 
@property (nonatomic,copy) UIColor * headerTextColor; 
@property (assign,nonatomic) double headerFontSize; 
@property (assign,nonatomic) double headerOpacity; 
@property (assign,nonatomic) BOOL useVibrantBlend; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHeaderName:(NSString *)arg1 ;
-(void)setHeaderFontSize:(double)arg1 ;
-(void)setHeaderTextColor:(UIColor *)arg1 ;
-(void)setHeaderOpacity:(double)arg1 ;
-(void)setUseVibrantBlend:(BOOL)arg1 ;
-(NSString *)headerName;
-(UIColor *)headerTextColor;
-(double)headerFontSize;
-(double)headerOpacity;
-(BOOL)useVibrantBlend;
@end

