/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIButton, UIImage, NSString;

@interface SKUIEmptyContentPlaceholderView : UIView {

	UIEdgeInsets _imageInsets;
	UIImageView* _imageView;
	UILabel* _label;
	UIButton* _signInButton;

}

@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) UIEdgeInsets placeholderImageInsets;              //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,copy) NSString * placeholderMessage; 
@property (nonatomic,readonly) UILabel * placeholderMessageLabel; 
@property (assign,nonatomic) BOOL showsSignInButton; 
@property (nonatomic,readonly) UIButton * signInButton; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(NSString *)placeholderMessage;
-(UILabel *)placeholderMessageLabel;
-(UIButton *)signInButton;
-(void)maskPlaceholdersInBackdropView:(id)arg1 ;
-(void)setPlaceholderImageInsets:(UIEdgeInsets)arg1 ;
-(void)setPlaceholderMessage:(NSString *)arg1 ;
-(void)setShowsSignInButton:(BOOL)arg1 ;
-(BOOL)showsSignInButton;
-(UIEdgeInsets)placeholderImageInsets;
@end

