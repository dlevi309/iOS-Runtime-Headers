/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <UIKitCore/UIViewController.h>

@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {

	FUFlightInfoView* _flight;
	unsigned long long _style;

}
-(void)setStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)flightInfoView;
@end

