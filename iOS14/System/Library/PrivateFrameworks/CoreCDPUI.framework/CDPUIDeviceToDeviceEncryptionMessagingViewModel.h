/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <libobjc.A.dylib/CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol.h>

@class CDPUIDeviceToDeviceEncryptionFlowContext, NSString;

@interface CDPUIDeviceToDeviceEncryptionMessagingViewModel : NSObject <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> {

	CDPUIDeviceToDeviceEncryptionFlowContext* _context;
	BOOL _hasLocalSecret;
	BOOL _is2FA;

}

@property (readonly) BOOL is2FA;                                                      //@synthesize is2FA=_is2FA - In the implementation block
@property (readonly) BOOL hasLocalSecret;                                             //@synthesize hasLocalSecret=_hasLocalSecret - In the implementation block
@property (readonly) CDPUIDeviceToDeviceEncryptionFlowContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)message;
-(BOOL)is2FA;
-(CDPUIDeviceToDeviceEncryptionFlowContext *)context;
-(id)title;
-(id)cancelTitle;
-(BOOL)hasLocalSecret;
-(id)continueTitle;
-(id)initWithContext:(id)arg1 is2FA:(BOOL)arg2 hasLocalSecret:(BOOL)arg3 ;
@end

