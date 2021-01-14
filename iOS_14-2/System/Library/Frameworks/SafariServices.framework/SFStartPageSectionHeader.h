/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class SFBannerCell, UIStackView, NSArray, UILabel, NSString;

@interface SFStartPageSectionHeader : UICollectionReusableView {

	SFBannerCell* _bannerView;
	UIStackView* _buttonStackView;
	NSArray* _constraintsWithBanner;
	NSArray* _constraintsWithoutBanner;
	UILabel* _titleLabel;
	BOOL _usesBanner;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)reuseIdentifier;
-(void)setActions:(NSArray *)arg1 ;
-(void)_tap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_addButtonWithTitle:(id)arg1 actionIndex:(long long)arg2 ;
-(NSArray *)actions;
-(void)setModel:(id)arg1 resolvingActionsUsingBlock:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
@end

