/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)headerName;
-(void)setHeaderName:(NSString *)arg1 ;
-(void)setHeaderFontSize:(double)arg1 ;
-(void)setHeaderTextColor:(UIColor *)arg1 ;
-(void)setHeaderOpacity:(double)arg1 ;
-(void)setUseVibrantBlend:(BOOL)arg1 ;
-(UIColor *)headerTextColor;
-(double)headerFontSize;
-(double)headerOpacity;
-(BOOL)useVibrantBlend;
@end

