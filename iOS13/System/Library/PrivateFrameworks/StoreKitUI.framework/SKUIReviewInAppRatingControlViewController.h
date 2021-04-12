/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController {

	SKUIStarRatingControl* _ratingControl;

}

@property (nonatomic,retain) SKUIStarRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(SKUIStarRatingControl *)ratingControl;
-(id)_repeatedTemplateImageForImage:(id)arg1 ;
-(void)setRatingControl:(SKUIStarRatingControl *)arg1 ;
@end

