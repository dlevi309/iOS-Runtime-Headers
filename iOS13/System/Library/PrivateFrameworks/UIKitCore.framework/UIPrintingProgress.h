/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(UIWindowScene *)hostingWindowScene;
-(void)setHostingWindowScene:(UIWindowScene *)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)progressCancel;
-(void)setProgressAlertDelay:(double)arg1 ;
-(UIWindow *)progressAlertWindow;
-(void)setProgressAlertWindow:(UIWindow *)arg1 ;
-(BOOL)progressVisible;
-(void)_presentProgressAlert;
-(void)endProgress;
-(void)showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(double)lastPageUpdate;
-(void)setLastPageUpdate:(double)arg1 ;
-(double)progressAlertDelay;
-(id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(BOOL)arg2 hostingWindowScene:(id)arg3 cancelHandler:(/*^block*/id)arg4 ;
-(id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)setPrintInfoState:(int)arg1 ;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(double)nextPrintDelay;
-(BOOL)creatingPDF;
-(void)setCreatingPDF:(BOOL)arg1 ;
@end

