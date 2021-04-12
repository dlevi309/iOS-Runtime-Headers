/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/


@protocol BTAlertDelegate;
@class UIAlertController, BTSDevice;

@interface BTAlert : NSObject {

	id<BTAlertDelegate> _delegate;
	UIAlertController* _alert;
	BTSDevice* _device;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)show;
-(void)dismiss;
-(BOOL)isiPhone;
-(void)showAlertWithResult:(id)arg1 ;
-(void)userActionResponseWithUnpairStatus:(BOOL)arg1 ;
@end

