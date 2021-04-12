/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UILabel, NSArray;

@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView {

	BOOL _isPresentedInFormSheet;
	UILabel* _titleLabel;
	double _containerHeight;
	NSArray* _featureViews;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * featureViews;                   //@synthesize featureViews=_featureViews - In the implementation block
@property (assign,nonatomic) double containerHeight;                   //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInFormSheet;              //@synthesize isPresentedInFormSheet=_isPresentedInFormSheet - In the implementation block
-(UILabel *)titleLabel;
-(void)setContainerHeight:(double)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(NSArray *)featureViews;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)adjustedContentInsetDidChange;
-(void)updateContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)containerHeight;
-(BOOL)isPresentedInFormSheet;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end

