/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <libobjc.A.dylib/BCSActionPickerItemDelegate.h>

@class UIAlertController, NSString;

@interface BCSActionPickerViewAssistant : NSObject <BCSActionPickerItemDelegate> {

	UIAlertController* _alertController;

}

@property (getter=isShowingPicker,nonatomic,readonly) BOOL showingPicker; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isShowingPicker;
-(BOOL)showActionPickerWithItems:(id)arg1 fromViewController:(id)arg2 presentingRect:(CGRect)arg3 ;
-(void)_cleanUpAlertController;
-(id)actionPickerItemAlertController:(id)arg1 ;
-(void)actionPickerItem:(id)arg1 didDismissAlertController:(id)arg2 ;
@end

