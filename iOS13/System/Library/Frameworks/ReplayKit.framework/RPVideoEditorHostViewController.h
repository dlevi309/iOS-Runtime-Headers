/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol> {

	RPPreviewViewController* _previewViewController;
	RPVideoEditorExtensionHostContext* _hostContext;

}

@property (assign,nonatomic,__weak) RPPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) RPVideoEditorExtensionHostContext * hostContext;                     //@synthesize hostContext=_hostContext - In the implementation block
-(void)setPreviewViewController:(RPPreviewViewController *)arg1 ;
-(RPPreviewViewController *)previewViewController;
-(void)setHostContext:(RPVideoEditorExtensionHostContext *)arg1 ;
-(RPVideoEditorExtensionHostContext *)hostContext;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end

