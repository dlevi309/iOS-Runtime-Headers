/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_dismissViewController;
-(NSExtension *)extension;
-(void)setPublicController:(_UIScreenRoutePickerViewController *)arg1 ;
-(void)invalidate;
-(_UIScreenRoutePickerViewController *)publicController;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
@end

