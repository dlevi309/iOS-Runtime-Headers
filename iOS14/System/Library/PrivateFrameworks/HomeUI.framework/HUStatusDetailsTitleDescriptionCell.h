/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class HUGridLayoutOptions, UITextView, UILabel, NSArray, NSString;

@interface HUStatusDetailsTitleDescriptionCell : UICollectionViewCell <UITextViewDelegate> {

	HUGridLayoutOptions* _layoutOptions;
	UITextView* _descriptionTextView;
	UILabel* _titleLabel;
	NSArray* _labelConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * descriptionTextView;                 //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                       //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> titleText; 
@property (nonatomic,copy) id<HFStringGenerator> descriptionText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(UITextView *)descriptionTextView;
-(void)_layoutContentApplyingFrames:(BOOL)arg1 forTargetSize:(CGSize)arg2 desiredSize:(out CGSize*)arg3 ;
-(id<HFStringGenerator>)titleText;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
@end

