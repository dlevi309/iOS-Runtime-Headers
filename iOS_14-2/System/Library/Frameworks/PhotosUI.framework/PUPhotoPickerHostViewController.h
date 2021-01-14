/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PUPhotoPickerHostExtensionProvider.h>
#import <libobjc.A.dylib/PUPhotoPickerTestSupportHandler.h>

@protocol PUPhotoPickerHostViewControllerDelegate;
@class NSExtensionContext, NSString;

@interface PUPhotoPickerHostViewController : _UIRemoteViewController <PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler> {

	BOOL __invalidated;
	NSExtensionContext* _hostExtensionContext;
	id<PUPhotoPickerHostViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<PUPhotoPickerHostService> hostProxy; 
@property (assign,getter=_isInvalidated,nonatomic) BOOL _invalidated;                                  //@synthesize _invalidated=__invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoPickerHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSExtensionContext * hostExtensionContext;                                //@synthesize hostExtensionContext=_hostExtensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isInvalidated;
-(id<PUPhotoPickerHostViewControllerDelegate>)delegate;
-(id<PUPhotoPickerHostService>)hostProxy;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)set_invalidated:(BOOL)arg1 ;
-(NSExtensionContext *)hostExtensionContext;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<PUPhotoPickerHostViewControllerDelegate>)arg1 ;
-(id)_hostContext;
-(void)invalidate;
-(void)setHostExtensionContext:(NSExtensionContext *)arg1 ;
-(void)performTraitCollectionUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)performPhotoPickerPreviewOfFirstAsset;
@end

