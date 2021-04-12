/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)_ratingControlChanged:(id)arg1 ;
-(void)setupActionsWithBundle:(id)arg1 ;
-(void)_updateButtonState;
@end

