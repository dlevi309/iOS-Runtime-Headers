/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <UIKitCore/UIWindow.h>

@class BKUIIndicatorViewController;

@interface BKUIIndicatorWindow : UIWindow {

	BOOL _shouldShow;
	BKUIIndicatorViewController* _indicatorController;

}

@property (nonatomic,retain) BKUIIndicatorViewController * indicatorController;              //@synthesize indicatorController=_indicatorController - In the implementation block
@property (assign,nonatomic) BOOL shouldShow;                                                //@synthesize shouldShow=_shouldShow - In the implementation block
+(id)instanceWithWindowScene:(id)arg1 ;
-(id)backgroundColor;
-(BOOL)shouldShow;
-(BKUIIndicatorViewController *)indicatorController;
-(void)setShouldShow:(BOOL)arg1 ;
-(void)setIndicatorController:(BKUIIndicatorViewController *)arg1 ;
@end

