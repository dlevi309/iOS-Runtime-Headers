/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(RPBroadcastHostViewController *)arg1 ;
-(RPBroadcastHostViewController *)hostViewController;
-(id)extensionObjectProxy;
-(oneway void)updateBroadcastHandlerListenerEndpoint:(/*^block*/id)arg1 ;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
@end

