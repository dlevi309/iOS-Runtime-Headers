/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <UIKitCore/UIView.h>

@class FULabel;

@interface FUErrorView : UIView {

	FULabel* _errorLabel;

}

@property (retain) FULabel * errorLabel;              //@synthesize errorLabel=_errorLabel - In the implementation block
-(id)init;
-(void)setStyleProvider:(id)arg1 ;
-(void)setErrorLabel:(FULabel *)arg1 ;
-(FULabel *)errorLabel;
@end

