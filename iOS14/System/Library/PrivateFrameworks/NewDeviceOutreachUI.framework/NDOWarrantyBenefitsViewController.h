/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@class NDOWarranty;

@interface NDOWarrantyBenefitsViewController : OBTextWelcomeController {

	NDOWarranty* _warranty;

}

@property (__weak) NDOWarranty * warranty;              //@synthesize warranty=_warranty - In the implementation block
-(void)donePressed:(id)arg1 ;
-(void)loadView;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
-(id)initWithWarranty:(id)arg1 ;
@end

