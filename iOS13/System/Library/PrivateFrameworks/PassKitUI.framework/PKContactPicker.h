/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class UIViewController, NSString;

@interface PKContactPicker : NSObject <CNContactPickerDelegate> {

	UIViewController* _pickerViewController;
	/*^block*/id _selectionHandler;
	/*^block*/id _cancelationHandler;

}

@property (nonatomic,retain) UIViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                    //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(UIViewController *)pickerViewController;
-(void)setPickerViewController:(UIViewController *)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(id)initWithSelectionHandler:(/*^block*/id)arg1 cancelationHandler:(/*^block*/id)arg2 ;
-(id)cancelationHandler;
-(void)setCancelationHandler:(id)arg1 ;
@end

