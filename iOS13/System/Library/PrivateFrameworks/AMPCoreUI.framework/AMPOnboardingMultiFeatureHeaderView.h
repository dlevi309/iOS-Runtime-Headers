/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UILabel, NSArray;

@interface AMPOnboardingMultiFeatureHeaderView : UIScrollView {

	BOOL _isPresentedInFormSheet;
	UILabel* _titleLabel;
	double _containerHeight;
	NSArray* _featureViews;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * featureViews;                   //@synthesize featureViews=_featureViews - In the implementation block
@property (assign,nonatomic) double containerHeight;                   //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInFormSheet;              //@synthesize isPresentedInFormSheet=_isPresentedInFormSheet - In the implementation block
-(void)updateContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)adjustedContentInsetDidChange;
-(id)initWithFeatures:(id)arg1 ;
-(void)setContainerHeight:(double)arg1 ;
-(double)containerHeight;
-(NSArray *)featureViews;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(BOOL)isPresentedInFormSheet;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end

