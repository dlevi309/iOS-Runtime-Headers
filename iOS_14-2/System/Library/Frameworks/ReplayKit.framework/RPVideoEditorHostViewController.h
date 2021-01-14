/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RPVideoEditorExtensionHostContext *)hostContext;
-(void)setHostContext:(RPVideoEditorExtensionHostContext *)arg1 ;
-(void)setPreviewViewController:(RPPreviewViewController *)arg1 ;
-(RPPreviewViewController *)previewViewController;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end

