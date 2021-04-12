/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <UIKitCore/UIViewController.h>

@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {

	FUFlightInfoView* _flight;
	unsigned long long _style;

}
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(id)flightInfoView;
@end

