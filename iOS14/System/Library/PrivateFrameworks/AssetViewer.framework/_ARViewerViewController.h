/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(oneway long long)statusBarOrientation;
-(oneway BOOL)isIgnoringInteractionEvents;
-(oneway void)setStatusBarOrientation:(long long)arg1 ;
-(id<ARViewerVendorProtocol>)arviewerDelegate;
-(void)setArviewerDelegate:(id<ARViewerVendorProtocol>)arg1 ;
@end

