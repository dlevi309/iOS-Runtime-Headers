/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/HFItemSectionAccessoryButtonHeader.h>

@protocol HFItemSectionAccessoryButtonHeaderDelegate;
@class HFItemSection, NSString, UILabel, NSArray, UIButton;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView <HFItemSectionAccessoryButtonHeader> {

	BOOL _hideSeparator;
	HFItemSection* itemSection;
	NSString* _titleText;
	NSString* _accessoryButtonTitleText;
	id<HFItemSectionAccessoryButtonHeaderDelegate> _accessoryButtonTarget;
	UILabel* _titleLabel;
	NSArray* _labelConstraints;
	UIButton* _accessoryButton;
	NSArray* _accessoryButtonConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                                                               //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) UIButton * accessoryButton;                                                               //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,retain) NSArray * accessoryButtonConstraints;                                                     //@synthesize accessoryButtonConstraints=_accessoryButtonConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * accessoryButtonTitleText;                                                      //@synthesize accessoryButtonTitleText=_accessoryButtonTitleText - In the implementation block
@property (assign,nonatomic) BOOL hideSeparator;                                                                       //@synthesize hideSeparator=_hideSeparator - In the implementation block
@property (assign,nonatomic,__weak) id<HFItemSectionAccessoryButtonHeaderDelegate> accessoryButtonTarget;              //@synthesize accessoryButtonTarget=_accessoryButtonTarget - In the implementation block
@property (nonatomic,retain) HFItemSection * itemSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_titleFont;
+(double)estimatedHeight;
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSString *)titleText;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateConstraints;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(UIButton *)accessoryButton;
-(void)setItemSection:(HFItemSection *)arg1 ;
-(HFItemSection *)itemSection;
-(void)setAccessoryButtonTitleText:(NSString *)arg1 ;
-(void)setAccessoryButtonTarget:(id<HFItemSectionAccessoryButtonHeaderDelegate>)arg1 ;
-(void)updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setHideSeparator:(BOOL)arg1 ;
-(void)accessoryButtonTapped;
-(BOOL)hideSeparator;
-(NSArray *)accessoryButtonConstraints;
-(void)setAccessoryButtonConstraints:(NSArray *)arg1 ;
-(id<HFItemSectionAccessoryButtonHeaderDelegate>)accessoryButtonTarget;
-(NSString *)accessoryButtonTitleText;
@end

