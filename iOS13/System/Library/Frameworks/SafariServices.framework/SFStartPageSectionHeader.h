/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)actions;
-(void)updateConstraints;
-(void)_tap:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setModel:(id)arg1 resolvingActionsUsingBlock:(/*^block*/id)arg2 ;
-(void)_addButtonWithTitle:(id)arg1 actionIndex:(long long)arg2 ;
@end

