/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView, CPSVibrantLabel, CPSScaledImageView, CPSAppStoreButton, NSArray, UIImage;

@interface CPSAppMetadataView : UIButton {

	UIImageView* _appIconView;
	CPSVibrantLabel* _poweredByVibrantLabel;
	CPSVibrantLabel* _appNameVibrantLabel;
	CPSScaledImageView* _contentRatingImageView;
	CPSAppStoreButton* _appStoreButton;
	NSArray* _leadingAppStoreButtonConstraints;
	NSArray* _trailingAppStoreButtonConstraints;

}

@property (nonatomic,retain) UIImage * appIcon; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAppIcon:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImage *)appIcon;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setUpSubviews;
-(void)updateWithMetadata:(id)arg1 ;
-(id)_contentRatingLabelContainer;
-(void)_updateAppStoreButtonConstraints;
@end

