/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIScreenRoutePickerRemoteViewControllerHost.h>

@protocol NSCopyingNSObject;
@class _UIScreenRoutePickerViewController, NSExtension, NSString;

@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost> {

	_UIScreenRoutePickerViewController* _publicController;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;

}

@property (assign,nonatomic,__weak) _UIScreenRoutePickerViewController * publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                          //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)invalidate;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_dismissViewController;
-(void)setPublicController:(_UIScreenRoutePickerViewController *)arg1 ;
-(_UIScreenRoutePickerViewController *)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
@end

