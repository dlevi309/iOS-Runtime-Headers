/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ARViewerVendorProtocol.h>

@protocol ARViewerVendorProtocol;
@class NSString;

@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol> {

	id<ARViewerVendorProtocol> _arviewerDelegate;

}

@property (retain) id<ARViewerVendorProtocol> arviewerDelegate;              //@synthesize arviewerDelegate=_arviewerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(oneway BOOL)isIgnoringInteractionEvents;
-(oneway void)setStatusBarOrientation:(long long)arg1 ;
-(oneway long long)statusBarOrientation;
-(id<ARViewerVendorProtocol>)arviewerDelegate;
-(void)setArviewerDelegate:(id<ARViewerVendorProtocol>)arg1 ;
@end

