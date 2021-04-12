/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIAppInstallView, UILabel, UIStackView, UIImage, NSString, VUITextBadge;

@interface VUIAppInstallLockup : UIView {

	VUIAppInstallView* _iconView;
	UILabel* _nameLabel;
	UILabel* _iAPLabel;
	UILabel* _subtitleLabel;
	UIStackView* _nameAndRatingStack;
	UIStackView* _containerStack;
	BOOL _canFocus;
	UIImage* _icon;
	NSString* _name;
	NSString* _ageRating;
	NSString* _iAP;
	NSString* _subtitle;
	UIStackView* _metadataStackView;
	VUITextBadge* _ageRatingBadge;
	UILabel* _ageRatingLabel;

}

@property (nonatomic,retain) VUITextBadge * ageRatingBadge;                  //@synthesize ageRatingBadge=_ageRatingBadge - In the implementation block
@property (nonatomic,retain) UILabel * ageRatingLabel;                       //@synthesize ageRatingLabel=_ageRatingLabel - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * ageRating;                             //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,copy) NSString * iAP;                                   //@synthesize iAP=_iAP - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) VUIAppInstallView * installView; 
@property (nonatomic,retain) UIStackView * metadataStackView;                //@synthesize metadataStackView=_metadataStackView - In the implementation block
@property (assign,nonatomic) BOOL canFocus;                                  //@synthesize canFocus=_canFocus - In the implementation block
-(BOOL)canBecomeFocused;
-(NSString *)iAP;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)icon;
-(NSString *)subtitle;
-(UIStackView *)metadataStackView;
-(void)setMetadataStackView:(UIStackView *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)name;
-(NSString *)ageRating;
-(void)setIAP:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)canFocus;
-(void)_configureLabels;
-(VUIAppInstallView *)installView;
-(void)setAgeRating:(NSString *)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)setCanFocus:(BOOL)arg1 ;
-(VUITextBadge *)ageRatingBadge;
-(UILabel *)ageRatingLabel;
-(void)_configureAgeRatingBadge;
-(id)_textColorForDarkMode;
-(void)setAgeRatingBadge:(VUITextBadge *)arg1 ;
-(void)setAgeRatingLabel:(UILabel *)arg1 ;
@end

