/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPBroadcastActivityCommunicationHostProtocol.h>

@class RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext <RPBroadcastActivityCommunicationHostProtocol> {

	RPBroadcastActivityHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastActivityHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)extensionObjectProxy;
-(void)setHostViewController:(RPBroadcastActivityHostViewController *)arg1 ;
-(RPBroadcastActivityHostViewController *)hostViewController;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(oneway void)presentationInfoWithCompletion:(/*^block*/id)arg1 ;
@end

