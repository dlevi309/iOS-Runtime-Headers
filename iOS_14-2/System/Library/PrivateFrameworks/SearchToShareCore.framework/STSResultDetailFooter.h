/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSMutableArray, UIButton, UIImage;

@interface STSResultDetailFooter : UIView {

	UIImageView* _providerIconView;
	NSMutableArray* _constraints;
	UIButton* _providerButton;
	UIButton* _sendButton;
	CGSize _providerIconSize;

}

@property (assign,nonatomic) CGSize providerIconSize;                  //@synthesize providerIconSize=_providerIconSize - In the implementation block
@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,readonly) UIButton * providerButton;              //@synthesize providerButton=_providerButton - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                  //@synthesize sendButton=_sendButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIButton *)sendButton;
-(CGSize)providerIconSize;
-(void)setProviderIconSize:(CGSize)arg1 ;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(UIButton *)providerButton;
@end

