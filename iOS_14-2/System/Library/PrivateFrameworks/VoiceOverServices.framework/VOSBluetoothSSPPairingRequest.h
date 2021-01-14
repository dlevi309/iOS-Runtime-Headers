/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class VOSBluetoothDevice, PSSpecifier, UIAlertController;

@interface VOSBluetoothSSPPairingRequest : NSObject {

	VOSBluetoothDevice* _device;
	PSSpecifier* _specifier;
	id _delegate;
	int _pairingStyle;
	UIAlertController* _alert;
	/*^block*/id _pairingAcceptedBlock;
	/*^block*/id _pairingFailedBlock;

}

@property (nonatomic,copy) id pairingAcceptedBlock;              //@synthesize pairingAcceptedBlock=_pairingAcceptedBlock - In the implementation block
@property (nonatomic,copy) id pairingFailedBlock;                //@synthesize pairingFailedBlock=_pairingFailedBlock - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)dealloc;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
-(id)_sanitizeNameForAlert:(id)arg1 ;
-(void)showWithWindow:(id)arg1 ;
-(id)pairingAcceptedBlock;
-(void)setPairingAcceptedBlock:(id)arg1 ;
-(id)pairingFailedBlock;
-(void)setPairingFailedBlock:(id)arg1 ;
@end

