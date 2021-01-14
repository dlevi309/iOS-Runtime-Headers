/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SULockoutView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _bodyLabel;
	UIImageView* _glowImageView;
	UIImageView* _imageView;
	long long _layoutPreset;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * glowImage; 
@property (assign,nonatomic) long long layoutPreset;                 //@synthesize layoutPreset=_layoutPreset - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(void)setBody:(NSString *)arg1 ;
-(id)_imageView;
-(NSString *)body;
-(void)setImage:(UIImage *)arg1 ;
-(id)_newLabel;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(id)_bodyLabel;
-(UIImage *)backgroundImage;
-(id)_titleLabel;
-(NSString *)title;
-(void)dealloc;
-(long long)layoutPreset;
-(void)_layoutForSlowNetwork;
-(UIImage *)glowImage;
-(void)setGlowImage:(UIImage *)arg1 ;
-(void)setLayoutPreset:(long long)arg1 ;
@end

