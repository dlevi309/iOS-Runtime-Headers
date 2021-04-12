/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CDPUIDeviceToDeviceEncryptionFlowContext *)context;
-(id)title;
-(id)message;
-(id)cancelTitle;
-(BOOL)hasLocalSecret;
-(id)continueTitle;
-(id)initWithContext:(id)arg1 is2FA:(BOOL)arg2 hasLocalSecret:(BOOL)arg3 ;
-(BOOL)is2FA;
@end

