/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_SFAppleConnectExtensionVendorProtocol.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _SFAppleConnectExtensionContext : NSExtensionContext <_SFAppleConnectExtensionVendorProtocol> {

	NSObject*<OS_dispatch_source> _completeRequestSource;
	BOOL _presentingExtensionUI;

}

@property (assign,nonatomic) BOOL presentingExtensionUI;              //@synthesize presentingExtensionUI=_presentingExtensionUI - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)_completeRequest;
-(void)_completeRequestAfterDelay;
-(void)messageReceivedWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)setPresentingExtensionUI:(BOOL)arg1 ;
-(BOOL)presentingExtensionUI;
@end

