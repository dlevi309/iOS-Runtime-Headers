/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCancelationHandler:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(UIViewController *)pickerViewController;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
-(id)initWithSelectionHandler:(/*^block*/id)arg1 cancelationHandler:(/*^block*/id)arg2 ;
-(id)cancelationHandler;
-(void)setPickerViewController:(UIViewController *)arg1 ;
@end

