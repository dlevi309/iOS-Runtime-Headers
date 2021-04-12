/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class QLRemoteItemViewController, NSExtension;

@interface QLRemotePreviewHostViewController : _UIRemoteViewController {

	QLRemoteItemViewController* _remoteItemViewController;
	NSExtension* _extension;
	id _request;

}

@property (__weak) QLRemoteItemViewController * remoteItemViewController;              //@synthesize remoteItemViewController=_remoteItemViewController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                  //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id request;                                               //@synthesize request=_request - In the implementation block
-(void)setRequest:(id)arg1 ;
-(id)request;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(QLRemoteItemViewController *)remoteItemViewController;
-(void)setRemoteItemViewController:(QLRemoteItemViewController *)arg1 ;
@end

