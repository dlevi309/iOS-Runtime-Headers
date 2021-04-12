/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)verifyExportWithPresentingViewController:(id)arg1 ;
-(void)_beginExport;
-(void)_shareExportFileAndCleanUp;
-(void)_cleanUpExport;
-(BOOL)exportInProgress;
@end

