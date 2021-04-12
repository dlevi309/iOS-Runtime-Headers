/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FULabel *)errorLabel;
-(void)setErrorLabel:(FULabel *)arg1 ;
@end

