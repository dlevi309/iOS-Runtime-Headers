/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@class NDOWarranty;

@interface NDOWarrantyBenefitsViewController : OBTextWelcomeController {

	NDOWarranty* _warranty;

}

@property (__weak) NDOWarranty * warranty;              //@synthesize warranty=_warranty - In the implementation block
-(void)loadView;
-(void)donePressed:(id)arg1 ;
-(id)initWithWarranty:(id)arg1 ;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
@end

