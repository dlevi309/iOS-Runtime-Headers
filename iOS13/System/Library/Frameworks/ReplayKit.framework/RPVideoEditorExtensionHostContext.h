/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol> {

	RPVideoEditorHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPVideoEditorHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(RPVideoEditorHostViewController *)arg1 ;
-(RPVideoEditorHostViewController *)hostViewController;
-(id)extensionObjectProxy;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end

