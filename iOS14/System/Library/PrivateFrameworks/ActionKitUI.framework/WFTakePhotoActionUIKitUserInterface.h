/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/WFTakePhotoActionUserInterface.h>

@class WFContentCollection, NSMutableArray, NSString;

@interface WFTakePhotoActionUIKitUserInterface : WFActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface> {

	/*^block*/id _completionHandler;
	WFContentCollection* _outputCollection;
	unsigned long long _remainingPhotos;
	NSMutableArray* _outputImages;

}

@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) WFContentCollection * outputCollection;              //@synthesize outputCollection=_outputCollection - In the implementation block
@property (assign,nonatomic) unsigned long long remainingPhotos;                  //@synthesize remainingPhotos=_remainingPhotos - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputImages;                       //@synthesize outputImages=_outputImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cameraDeviceFromString:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)completionHandler;
-(void)finishWithError:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithPhotoCount:(unsigned long long)arg1 device:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)remainingPhotos;
-(void)setRemainingPhotos:(unsigned long long)arg1 ;
-(WFContentCollection *)outputCollection;
-(void)setOutputCollection:(WFContentCollection *)arg1 ;
-(NSMutableArray *)outputImages;
-(void)setOutputImages:(NSMutableArray *)arg1 ;
@end

