/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SplashBoard/XBApplicationController.h>

@interface SBSplashBoardController : XBApplicationController {

	BOOL _isObservingAppLanguageChanges;

}
-(void)dealloc;
-(void)configureForLocaleChanges;
-(void)_observeLocaleChanges;
-(void)_checkForChangedLocale;
-(id)_splashBoardApplicationForBundleID:(id)arg1 ;
-(void)_handleLocaleDidChangeNotification;
@end

