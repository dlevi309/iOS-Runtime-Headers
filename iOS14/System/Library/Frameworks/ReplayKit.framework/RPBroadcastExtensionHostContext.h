/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPBroadcastExtensionHostProtocol.h>
#import <libobjc.A.dylib/RPBroadcastExtensionInitProtocol.h>

@class RPBroadcastHostViewController, NSString;

@interface RPBroadcastExtensionHostContext : NSExtensionContext <RPBroadcastExtensionHostProtocol, RPBroadcastExtensionInitProtocol> {

	RPBroadcastHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)extensionObjectProxy;
-(void)setHostViewController:(RPBroadcastHostViewController *)arg1 ;
-(RPBroadcastHostViewController *)hostViewController;
-(oneway void)updateBroadcastHandlerListenerEndpoint:(/*^block*/id)arg1 ;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
@end

