/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIAlertController, UIPrintingProgressViewController, UIWindowScene, UIWindow;

@interface UIPrintingProgress : NSObject {

	NSString* _printerName;
	/*^block*/id _cancelHandler;
	double _startTime;
	double _displayTime;
	UIAlertController* _alertController;
	UIPrintingProgressViewController* _viewController;
	BOOL _donePrinting;
	BOOL _forceDisplayAsAlert;
	BOOL _creatingPDF;
	double _lastPageUpdate;
	double _progressAlertDelay;
	UIWindowScene* _hostingWindowScene;
	UIWindow* _progressAlertWindow;

}

@property (readonly) NSString * title; 
@property (assign) BOOL creatingPDF;                                //@synthesize creatingPDF=_creatingPDF - In the implementation block
@property (assign) double lastPageUpdate;                           //@synthesize lastPageUpdate=_lastPageUpdate - In the implementation block
@property (assign) double progressAlertDelay;                       //@synthesize progressAlertDelay=_progressAlertDelay - In the implementation block
@property (__weak) UIWindowScene * hostingWindowScene;              //@synthesize hostingWindowScene=_hostingWindowScene - In the implementation block
@property (retain) UIWindow * progressAlertWindow;                  //@synthesize progressAlertWindow=_progressAlertWindow - In the implementation block
-(id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(BOOL)arg2 hostingWindowScene:(id)arg3 cancelHandler:(/*^block*/id)arg4 ;
-(void)progressCancel;
-(UIWindowScene *)hostingWindowScene;
-(void)setHostingWindowScene:(UIWindowScene *)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)setProgressAlertDelay:(double)arg1 ;
-(UIWindow *)progressAlertWindow;
-(void)_mainQueue_presentProgressAlert;
-(BOOL)progressVisible;
-(void)setProgressAlertWindow:(UIWindow *)arg1 ;
-(void)_mainQueue_showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(void)_presentProgressAlert;
-(void)_mainQueue_hideProgressAnimated:(BOOL)arg1 ;
-(void)_mainQueue_endProgress;
-(void)showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(double)lastPageUpdate;
-(void)setLastPageUpdate:(double)arg1 ;
-(double)progressAlertDelay;
-(void)setPrintInfoState:(int)arg1 ;
-(BOOL)creatingPDF;
-(id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(double)nextPrintDelay;
-(void)setCreatingPDF:(BOOL)arg1 ;
-(void)endProgress;
-(NSString *)title;
@end

