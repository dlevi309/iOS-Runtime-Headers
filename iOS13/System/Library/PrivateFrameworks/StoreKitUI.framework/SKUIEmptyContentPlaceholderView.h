/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(UIButton *)signInButton;
-(UILabel *)placeholderMessageLabel;
-(void)maskPlaceholdersInBackdropView:(id)arg1 ;
-(NSString *)placeholderMessage;
-(void)setPlaceholderImageInsets:(UIEdgeInsets)arg1 ;
-(void)setPlaceholderMessage:(NSString *)arg1 ;
-(void)setShowsSignInButton:(BOOL)arg1 ;
-(BOOL)showsSignInButton;
-(UIEdgeInsets)placeholderImageInsets;
@end

