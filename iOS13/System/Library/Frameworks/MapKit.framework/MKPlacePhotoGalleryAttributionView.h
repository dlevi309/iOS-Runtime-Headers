/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, UIImageView, NSArray;

@interface MKPlacePhotoGalleryAttributionView : UIView {

	UIVisualEffectView* _effectView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _attributionLogoImageView;
	NSArray* _regularConstraints;
	NSArray* _primaryLabelOnlyConstraints;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                     //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                              //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                            //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * attributionLogoImageView;              //@synthesize attributionLogoImageView=_attributionLogoImageView - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                        //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * primaryLabelOnlyConstraints;               //@synthesize primaryLabelOnlyConstraints=_primaryLabelOnlyConstraints - In the implementation block
-(id)init;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)updateFonts;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setupSubviews;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)updateStyle:(long long)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(NSArray *)regularConstraints;
-(long long)blurEffectWithStyle:(long long)arg1 ;
-(NSArray *)primaryLabelOnlyConstraints;
-(UIImageView *)attributionLogoImageView;
-(void)setDescription:(id)arg1 license:(id)arg2 author:(id)arg3 ;
-(void)setAttributionLogoImage:(id)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setAttributionLogoImageView:(UIImageView *)arg1 ;
-(void)setPrimaryLabelOnlyConstraints:(NSArray *)arg1 ;
@end

