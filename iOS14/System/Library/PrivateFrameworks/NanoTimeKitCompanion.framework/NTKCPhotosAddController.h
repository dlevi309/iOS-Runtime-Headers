/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString;

@interface NTKCPhotosAddController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	/*^block*/id _multipleCompletion;
	/*^block*/id _singleCompletion;

}

@property (nonatomic,copy) id multipleCompletion;                   //@synthesize multipleCompletion=_multipleCompletion - In the implementation block
@property (nonatomic,copy) id singleCompletion;                     //@synthesize singleCompletion=_singleCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstance;
+(void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)_presentAddControllerFromViewController:(id)arg1 multiple:(BOOL)arg2 limit:(unsigned long long)arg3 completion:(id)arg4 ;
+(void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)setMultipleCompletion:(id)arg1 ;
-(void)setSingleCompletion:(id)arg1 ;
-(void)_dismiss:(id)arg1 photos:(id)arg2 single:(id)arg3 ;
-(id)multipleCompletion;
-(id)singleCompletion;
@end

