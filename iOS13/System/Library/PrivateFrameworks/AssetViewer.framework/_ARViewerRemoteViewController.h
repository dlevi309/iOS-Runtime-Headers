/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/ARViewerHostProtocol.h>

@protocol ARViewerHostProtocol;
@class NSString;

@interface _ARViewerRemoteViewController : _UIRemoteViewController <ARViewerHostProtocol> {

	id<ARViewerHostProtocol> _arviewerDelegate;

}

@property (retain) id<ARViewerHostProtocol> arviewerDelegate;              //@synthesize arviewerDelegate=_arviewerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(oneway void)setStatusBarOrientation:(long long)arg1 ;
-(oneway void)isIgnoringInteractionEvents:(/*^block*/id)arg1 ;
-(oneway void)statusBarOrientation:(/*^block*/id)arg1 ;
-(id<ARViewerHostProtocol>)arviewerDelegate;
-(void)setArviewerDelegate:(id<ARViewerHostProtocol>)arg1 ;
@end

