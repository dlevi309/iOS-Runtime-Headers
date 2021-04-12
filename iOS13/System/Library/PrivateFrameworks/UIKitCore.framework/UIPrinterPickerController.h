/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPrinterPickerControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIPrinter;

@interface UIPrinterPickerController : NSObject {

	/*^block*/id _completionHandler;
	id _state;
	UIPrinter* _selectedPrinter;
	id<UIPrinterPickerControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIPrinter * selectedPrinter;                                        //@synthesize selectedPrinter=_selectedPrinter - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrinterPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1 ;
-(id)init;
-(id<UIPrinterPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPrinterPickerControllerDelegate>)arg1 ;
-(id)_init;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)_printerPickerDidDismiss;
-(BOOL)_delegateFiltersPrinters;
-(BOOL)_shouldShowPrinter:(id)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSelectedPrinter:(UIPrinter *)arg1 ;
-(BOOL)_setupPickerPanel:(/*^block*/id)arg1 ;
-(UIPrinter *)selectedPrinter;
@end

