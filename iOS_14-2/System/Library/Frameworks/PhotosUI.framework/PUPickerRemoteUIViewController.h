/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_PUPickerRemoteUIViewControllerHostInterface.h>

@protocol _PUPickerRemoteUIViewControllerHostInterface;
@class NSString;

@interface PUPickerRemoteUIViewController : _UIRemoteViewController <_PUPickerRemoteUIViewControllerHostInterface> {

	id<_PUPickerRemoteUIViewControllerHostInterface> __delegate;

}

@property (assign,nonatomic,__weak) id<_PUPickerRemoteUIViewControllerHostInterface> _delegate;              //@synthesize _delegate=__delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(id<_PUPickerRemoteUIViewControllerHostInterface>)_delegate;
-(void)set_delegate:(id<_PUPickerRemoteUIViewControllerHostInterface>)arg1 ;
-(void)_pickerDidFinishPicking:(id)arg1 ;
@end

