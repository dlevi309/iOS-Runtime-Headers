/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/NMBUIWelcomeViewControllerDelegate.h>

@protocol NMBUIOnboardingDataSource;
@class NMBUIAlertControllerVisualStyleProvider, NSString;

@interface NMBUIWelcomeAlertViewController : UIAlertController <NMBUIWelcomeViewControllerDelegate> {

	NMBUIAlertControllerVisualStyleProvider* _alertStyleProvider;
	id<NMBUIOnboardingDataSource> _dataSource;

}

@property (nonatomic,retain) id<NMBUIOnboardingDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(id<NMBUIOnboardingDataSource>)dataSource;
-(void)setDataSource:(id<NMBUIOnboardingDataSource>)arg1 ;
-(BOOL)_shouldFitWidthToContentViewControllerWidth;
-(void)welcomeViewControllerDidChooseToContinue:(BOOL)arg1 ;
@end

