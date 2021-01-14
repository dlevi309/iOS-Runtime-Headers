/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIDocumentPickerViewControllerHost.h>
#import <UIKitCore/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentPickerRemoteViewControllerContaining;
@class UIViewController, NSString;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating> {

	UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> _publicController;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)viewDidLoad;
-(void)_dismissViewController;
-(void)_didSelectURLWrapper:(id)arg1 ;
-(void)_didSelectURLBookmark:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)setPublicController:(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)arg1 ;
-(void)invalidate;
-(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)publicController;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
@end

