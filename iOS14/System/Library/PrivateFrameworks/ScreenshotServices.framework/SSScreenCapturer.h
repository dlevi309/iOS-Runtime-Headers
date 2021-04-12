/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/SSUIServiceServerDelegate.h>
#import <libobjc.A.dylib/SSTestingCoordinatorDelegate.h>
#import <libobjc.A.dylib/SSScreenshotsWindowDelegate.h>

@protocol SSScreenCapturerDelegate;
@class SSSnapshotter, SSDittoRemoteConnection, SSApplicationScreenshotSupplementalDataCapturer, SSUIServiceServer, SSTestingCoordinator, SSScreenshotsWindow, RCPEventStreamRecorder, RCPScreenRecorder, FBSDisplayLayoutMonitor, UIWindow;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate, SSScreenshotsWindowDelegate> {

	SSSnapshotter* _snapshotter;
	SSDittoRemoteConnection* _dittoRemoteConnection;
	SSApplicationScreenshotSupplementalDataCapturer* _metadataCapturer;
	SSUIServiceServer* _uiServiceServer;
	SSTestingCoordinator* _testingCoordinator;
	SSScreenshotsWindow* _serviceWindow;
	RCPEventStreamRecorder* _recap;
	RCPScreenRecorder* _recapSnapshotter;
	FBSDisplayLayoutMonitor* _layoutMonitor;
	id<SSScreenCapturerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSScreenCapturerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWindow * screenshotsWindow; 
+(BOOL)shouldUseScreenCapturerForScreenshots;
+(void)playScreenshotSound;
+(BOOL)_filesAppExistsOnSystem;
-(void)takeScreenshot;
-(id)init;
-(id<SSScreenCapturerDelegate>)delegate;
-(void)setDelegate:(id<SSScreenCapturerDelegate>)arg1 ;
-(void)dealloc;
-(UIWindow *)screenshotsWindow;
-(void)preheatWithPresentationOptions:(id)arg1 ;
-(void)takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 ;
-(void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2 ;
-(void)screenshotWindowWillBeDisplayed;
-(void)screenshotWindowWasDismissed;
-(id)_betaApplicationName;
-(void)server:(id)arg1 handleRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)startRecap;
-(void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3 ;
-(void)takeScreenshotWithPresentationOptions:(id)arg1 ;
-(void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2 ;
-(void)_captureAndSendDocumentForEnvironmentElement:(id)arg1 ;
-(void)_captureAndSendMetadataForEnvironmentElement:(id)arg1 sendCompletion:(/*^block*/id)arg2 ;
-(void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3 ;
-(id)_environmentDescriptionFromImage:(id)arg1 ;
-(BOOL)_screenshotWasTakenOverBetaApp;
-(id)_bundleIDForCurrentApplication;
-(BOOL)_betaFeedbackEnabled:(id)arg1 ;
-(id)_currentDisplayLayout;
-(void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg1 ;
-(id)_applicationProxyForCurrentApp;
-(id)_testingCoordinator;
@end

