/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/


@protocol BTAlertDelegate;
@class UIAlertController, BTSDevice;

@interface BTAlert : NSObject {

	id<BTAlertDelegate> _delegate;
	UIAlertController* _alert;
	BTSDevice* _device;

}
-(BOOL)isiPhone;
-(id)initWithDevice:(id)arg1 ;
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(void)showAlertWithResult:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)userActionResponseWithUnpairStatus:(BOOL)arg1 ;
@end

