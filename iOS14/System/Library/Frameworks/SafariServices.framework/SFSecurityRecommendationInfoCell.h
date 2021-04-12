/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/SFPasswordTableViewCell.h>

@class UIImageView, UILabel, UIView, NSArray, NSLayoutConstraint, WBSSavedPassword, UIImage, NSString;

@interface SFSecurityRecommendationInfoCell : UITableViewCell <SFPasswordTableViewCell> {

	UIImageView* _iconView;
	UIImageView* _completedUpgradeCheckmarkView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _monogramLabel;
	UIView* _monogramBackgroundView;
	unsigned long long _configuration;
	NSArray* _completedUpgradeCheckmarkViewConstraints;
	NSLayoutConstraint* _standardTitleTrailingConstraint;
	WBSSavedPassword* _savedPassword;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) WBSSavedPassword * savedPassword;              //@synthesize savedPassword=_savedPassword - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(unsigned long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)showCheckmarkForDetailView;
-(UIImage *)icon;
-(NSString *)subtitle;
-(WBSSavedPassword *)savedPassword;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2 ;
-(void)setSavedPassword:(WBSSavedPassword *)arg1 ;
-(void)setShowsUpgradeCompletionCheckmark:(BOOL)arg1 ;
-(double)_iconWidth;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

