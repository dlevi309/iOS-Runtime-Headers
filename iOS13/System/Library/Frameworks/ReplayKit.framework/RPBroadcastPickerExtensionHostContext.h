/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPBroadcastPickerExtensionHostProtocol.h>

@class RPBroadcastPickerHostViewController;

@interface RPBroadcastPickerExtensionHostContext : NSExtensionContext <RPBroadcastPickerExtensionHostProtocol> {

	RPBroadcastPickerHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastPickerHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(RPBroadcastPickerHostViewController *)arg1 ;
-(RPBroadcastPickerHostViewController *)hostViewController;
-(id)extensionObjectProxy;
-(oneway void)viewControllerDidFinish;
@end

