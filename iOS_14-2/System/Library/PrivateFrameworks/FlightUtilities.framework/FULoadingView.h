/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <UIKitCore/UIView.h>

@class FULabel;

@interface FULoadingView : UIView {

	FULabel* _loadingLabel;

}

@property (retain) FULabel * loadingLabel;              //@synthesize loadingLabel=_loadingLabel - In the implementation block
-(id)init;
-(void)setStyleProvider:(id)arg1 ;
-(FULabel *)loadingLabel;
-(void)setLoadingLabel:(FULabel *)arg1 ;
@end

