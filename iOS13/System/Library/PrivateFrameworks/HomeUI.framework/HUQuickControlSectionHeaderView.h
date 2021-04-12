/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UILabel, NSArray;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView {

	NSString* _titleText;
	UILabel* _titleLabel;
	NSArray* _labelConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
+(id)_titleFont;
+(BOOL)requiresConstraintBasedLayout;
+(double)estimatedHeight;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
@end

