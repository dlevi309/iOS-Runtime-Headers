/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class WDExportManager, NSURL, UIViewController;

@interface WDExportController : NSObject {

	WDExportManager* _exportManager;
	unsigned long long _backgroundTask;
	unsigned long long _exportResult;
	NSURL* _exportFileURL;
	BOOL _isExporting;
	UIViewController* _exportPresentingViewController;

}
-(id)initWithProfile:(id)arg1 ;
-(BOOL)exportInProgress;
-(void)verifyExportWithPresentingViewController:(id)arg1 ;
-(void)_beginExport;
-(void)_shareExportFileAndCleanUp;
-(void)_cleanUpExport;
@end

