/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint;

@interface PUAssetPickerHeaderView : UICollectionReusableView {

	UILabel* _label;
	double _sideMargins;
	NSLayoutConstraint* _labelLeadingConstraint;
	NSLayoutConstraint* _labelTrailingConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * labelLeadingConstraint;               //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * labelTrailingConstraint;              //@synthesize labelTrailingConstraint=_labelTrailingConstraint - In the implementation block
@property (nonatomic,retain) UILabel * label;                                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double sideMargins;                                          //@synthesize sideMargins=_sideMargins - In the implementation block
+(id)kind;
+(id)identifier;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(NSLayoutConstraint *)labelTrailingConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)sideMargins;
-(void)setSideMargins:(double)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

