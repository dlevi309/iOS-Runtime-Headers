/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <CoreCDPUI/CDPPassphraseEntryPane.h>

@class UIButton, CDPRemoteValidationEscapeOffer, CDPDevice;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {

	UIButton* _footerButton;
	BOOL _remoteAccountRecovery;
	CDPRemoteValidationEscapeOffer* _escapeOffer;
	unsigned long long _remoteSecretType;
	CDPDevice* _device;

}

@property (nonatomic,retain) CDPRemoteValidationEscapeOffer * escapeOffer;              //@synthesize escapeOffer=_escapeOffer - In the implementation block
@property (assign,nonatomic) unsigned long long remoteSecretType;                       //@synthesize remoteSecretType=_remoteSecretType - In the implementation block
@property (nonatomic,retain) CDPDevice * device;                                        //@synthesize device=_device - In the implementation block
@property (assign) BOOL remoteAccountRecovery;                                          //@synthesize remoteAccountRecovery=_remoteAccountRecovery - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
-(void)setEscapeOffer:(CDPRemoteValidationEscapeOffer *)arg1 ;
-(void)setRemoteSecretType:(unsigned long long)arg1 ;
-(CDPRemoteValidationEscapeOffer *)escapeOffer;
-(void)setRemoteAccountRecovery:(BOOL)arg1 ;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
-(id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2 ;
-(unsigned long long)remoteSecretType;
-(BOOL)remoteAccountRecovery;
@end

