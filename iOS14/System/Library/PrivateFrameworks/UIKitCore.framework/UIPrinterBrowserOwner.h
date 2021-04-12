/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class PKPrinter;


@protocol UIPrinterBrowserOwner <NSObject>
@property (nonatomic,retain) PKPrinter * printer; 
@optional
-(void)setUserSelectedPrinter:(BOOL)arg1;
-(BOOL)shouldShowPrinter:(id)arg1;

@required
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(PKPrinter *)printer;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setPrinter:(id)arg1;
-(void)cancelPrinting;
-(void)dismissAnimated:(BOOL)arg1;
-(BOOL)filtersPrinters;
-(void)printerBrowserViewDidDisappear;

@end

