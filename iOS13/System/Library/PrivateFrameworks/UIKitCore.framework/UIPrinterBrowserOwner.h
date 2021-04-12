/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class PKPrinter;


@protocol UIPrinterBrowserOwner <NSObject>
@property (nonatomic,retain) PKPrinter * printer; 
@optional
-(void)setUserSelectedPrinter:(BOOL)arg1;
-(BOOL)shouldShowPrinter:(id)arg1;

@required
-(void)dismissAnimated:(BOOL)arg1;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(id)arg1;
-(BOOL)filtersPrinters;

@end

