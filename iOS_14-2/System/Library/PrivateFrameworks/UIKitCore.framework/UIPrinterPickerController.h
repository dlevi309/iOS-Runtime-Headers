/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)_printerPickerDidDismiss;
-(id<UIPrinterPickerControllerDelegate>)delegate;
-(BOOL)_delegateFiltersPrinters;
-(BOOL)_shouldShowPrinter:(id)arg1 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)presentAnimated:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_setupPickerPanel:(/*^block*/id)arg1 ;
-(UIPrinter *)selectedPrinter;
-(id)initWithInitiallySelectedPrinter:(id)arg1 ;
-(void)setSelectedPrinter:(UIPrinter *)arg1 ;
-(void)setDelegate:(id<UIPrinterPickerControllerDelegate>)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

