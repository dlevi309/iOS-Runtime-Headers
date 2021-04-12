/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

