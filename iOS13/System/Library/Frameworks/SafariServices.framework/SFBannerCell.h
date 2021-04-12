/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, UILabel, NSArray, NSString;

@interface SFBannerCell : UICollectionViewCell {

	UIButton* _dismissButton;
	UILabel* _messageLabel;
	NSArray* _minimalLayoutConstraints;
	NSArray* _prominentLayoutConstraints;
	UILabel* _titleLabel;
	/*^block*/id _dismissHandler;
	long long _bannerStyle;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,copy) id dismissHandler;                    //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (assign,nonatomic) long long bannerStyle;              //@synthesize bannerStyle=_bannerStyle - In the implementation block
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setModel:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setDismissHandler:(id)arg1 ;
-(long long)bannerStyle;
-(void)setBannerStyle:(long long)arg1 ;
-(id)dismissHandler;
-(void)_dismiss:(id)arg1 ;
@end

