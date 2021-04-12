/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HUTitleDescriptionContentView, UIImageView, UIActivityIndicatorView, UIImage, NSString;

@interface HUActivityIndicatorCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _animating;
	HUTitleDescriptionContentView* _titleDescriptionView;
	UIImageView* _iconImageView;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,readonly) HUTitleDescriptionContentView * titleDescriptionView;              //@synthesize titleDescriptionView=_titleDescriptionView - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;                                       //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;                   //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> titleText; 
@property (nonatomic,retain) id<HFStringGenerator> descriptionText; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                   //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                     //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(UIImageView *)iconImageView;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id<HFStringGenerator>)titleText;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)activityIndicatorView;
-(BOOL)isAnimating;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HUTitleDescriptionContentView *)titleDescriptionView;
@end

