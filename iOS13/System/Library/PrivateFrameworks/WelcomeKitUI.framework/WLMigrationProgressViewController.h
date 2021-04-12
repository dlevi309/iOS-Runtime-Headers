/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>
#import <libobjc.A.dylib/WLDataMigrationDelegate.h>

@protocol OS_dispatch_source;
@class UILabel, UIActivityIndicatorView, UIProgressView, NSArray, WLSourceDevice, WLDataMigrationController, NSDateComponentsFormatter, NSObject, NSString;

@interface WLMigrationProgressViewController : WLWelcomeGroupViewController <WLDataMigrationDelegate> {

	UILabel* _stateView;
	UIActivityIndicatorView* _spinner;
	UILabel* _deviceNameView;
	UIProgressView* _progressView;
	UILabel* _explanationView;
	NSArray* _stateViewConstraintsForWithSpinner;
	NSArray* _stateViewConstraintsForNoSpinner;
	BOOL _usingRetryPolicies;
	WLSourceDevice* _sourceDevice;
	unsigned long long _migrationState;
	WLDataMigrationController* _migrationController;
	BOOL _migrationControllerIsRestartable;
	BOOL _migrationConcluded;
	NSDateComponentsFormatter* _remainingDownloadTimeFormatter;
	double _remainingDownloadTime;
	NSObject*<OS_dispatch_source> _remainingDownloadTimeUpdateTimer;
	/*^block*/id _completionHandler;
	/*^block*/id _migrationDidBeginHandler;

}

@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id migrationDidBeginHandler;              //@synthesize migrationDidBeginHandler=_migrationDidBeginHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dataMigratorDidGetInterrupted;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataMigratorDidBecomeRestartable:(id)arg1 ;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateRemainingDownloadTime:(double)arg2 ;
-(void)_startMigration;
-(void)_didCompleteMigrationWithSuccess:(BOOL)arg1 retry:(BOOL)arg2 ;
-(void)_updateProgressViewsWithOneLineStateKey:(id)arg1 twoLineStateKey:(id)arg2 showDeviceName:(BOOL)arg3 showSpinner:(BOOL)arg4 explanationText:(id)arg5 ;
-(void)_callClientCompletionWithSuccess:(BOOL)arg1 retry:(BOOL)arg2 ;
-(id)initWithSourceDevice:(id)arg1 metrics:(id)arg2 usingRetryPolicies:(BOOL)arg3 ;
-(id)migrationDidBeginHandler;
-(void)setMigrationDidBeginHandler:(id)arg1 ;
@end

