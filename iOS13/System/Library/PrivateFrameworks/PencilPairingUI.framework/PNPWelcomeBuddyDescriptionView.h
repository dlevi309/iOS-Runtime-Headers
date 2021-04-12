/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface PNPWelcomeBuddyDescriptionView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIImageView* _iconView;
	NSString* _title;
	NSString* _descriptionString;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * descriptionString;              //@synthesize descriptionString=_descriptionString - In the implementation block
@property (nonatomic,retain) UIImage * icon;                            //@synthesize icon=_icon - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)descriptionString;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setDescriptionString:(NSString *)arg1 ;
-(void)_updateFonts;
-(void)_configureConstraints;
-(void)_initializeUIElements;
@end

