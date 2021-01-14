/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController {

	SKUIStarRatingControl* _ratingControl;

}

@property (nonatomic,retain) SKUIStarRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
-(void)commonInit;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(SKUIStarRatingControl *)ratingControl;
-(id)_repeatedTemplateImageForImage:(id)arg1 ;
-(void)setRatingControl:(SKUIStarRatingControl *)arg1 ;
@end

