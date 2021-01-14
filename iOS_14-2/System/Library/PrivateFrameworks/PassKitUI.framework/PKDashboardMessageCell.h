/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UIButton, NSString, UIImage;

@interface PKDashboardMessageCell : UITableViewCell {

	UILabel* _labelTitle;
	UILabel* _labelMessage;
	UIImageView* _iconImageView;
	UIButton* _dismissButton;
	BOOL _isTemplateLayout;
	BOOL _smallDevice;
	NSString* _title;
	NSString* _message;
	UIImage* _iconImage;
	UIImage* _dismissImage;
	/*^block*/id _actionOnDismiss;

}

@property (assign,nonatomic) BOOL smallDevice;                      //@synthesize smallDevice=_smallDevice - In the implementation block
@property (nonatomic,readonly) UILabel * labelTitle;                //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,readonly) UILabel * labelMessage;              //@synthesize labelMessage=_labelMessage - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                   //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * dismissImage;                //@synthesize dismissImage=_dismissImage - In the implementation block
@property (nonatomic,copy) id actionOnDismiss;                      //@synthesize actionOnDismiss=_actionOnDismiss - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIImage *)iconImage;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setActionOnDismiss:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)actionOnDismiss;
-(void)setIconImage:(UIImage *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)dismissButtonPressed:(id)arg1 ;
-(void)setDismissImage:(UIImage *)arg1 ;
-(BOOL)smallDevice;
-(void)setSmallDevice:(BOOL)arg1 ;
-(UILabel *)labelTitle;
-(UILabel *)labelMessage;
-(UIImage *)dismissImage;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

