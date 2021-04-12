/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController {

	SKStarRatingControl* _ratingControl;
	UIAlertAction* _submitAction;
	/*^block*/id _completion;

}

@property (assign,nonatomic) float rating; 
@property (nonatomic,copy) id completion;               //@synthesize completion=_completion - In the implementation block
+(id)starRatingAlertController;
-(float)rating;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setRating:(float)arg1 ;
-(void)_updateButtonState;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_ratingControlChanged:(id)arg1 ;
-(void)setupActionsWithBundle:(id)arg1 ;
@end

