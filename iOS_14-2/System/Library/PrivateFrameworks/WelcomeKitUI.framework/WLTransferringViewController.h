/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <OnBoardingKit/OBSetupAssistantProgressController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@protocol OS_dispatch_source;
@class WLWelcomeController, NSDateComponentsFormatter, NSObject, NSString;

@interface WLTransferringViewController : OBSetupAssistantProgressController <OBSetupAssistantSupport> {

	WLWelcomeController* _welcomeController;
	NSDateComponentsFormatter* _remainingDownloadTimeFormatter;
	double _remainingDownloadTime;
	NSObject*<OS_dispatch_source> _remainingDownloadTimeUpdateTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProgressText:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithSourceDevice:(id)arg1 welcomeController:(id)arg2 ;
-(void)_cancelRemainingDownloadTimeUpdateTimer;
-(void)setRemainingDownloadTime:(double)arg1 ;
-(void)importDidStart;
@end

