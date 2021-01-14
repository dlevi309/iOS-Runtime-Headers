/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, CPSLabelWithPlaceholder, CPSAppStoreButton, CPSHighlightForwardingButton, PLPlatterView, NSString, UIImage;

@interface CPSAppAttributionBanner : UIView {

	UIImageView* _iconView;
	UILabel* _supertitleLabel;
	CPSLabelWithPlaceholder* _titleLabel;
	CPSLabelWithPlaceholder* _subtitleLabel;
	CPSAppStoreButton* _appStoreButton;
	CPSHighlightForwardingButton* _overlayButton;
	PLPlatterView* _platterView;
	/*^block*/id _tapAction;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * supertitle; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) BOOL showsAppStoreButton; 
@property (nonatomic,copy) id tapAction;                            //@synthesize tapAction=_tapAction - In the implementation block
+(id)preferredImageDescriptor;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIImage *)icon;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)commonInit;
-(void)_handleTap:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)tapAction;
-(void)setTapAction:(id)arg1 ;
-(NSString *)supertitle;
-(void)setSupertitle:(NSString *)arg1 ;
-(void)setShowsAppStoreButton:(BOOL)arg1 ;
-(BOOL)showsAppStoreButton;
@end

