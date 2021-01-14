/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUMediaDestination.h>

@class NSMutableDictionary;

@interface PUPhotoKitPhotoEditMediaDestination : PUMediaDestination {

	NSMutableDictionary* _pendingRequestsByRequestIdentifier;

}

@property (getter=_pendingRequestsByRequestIdentifier,nonatomic,readonly) NSMutableDictionary * pendingRequestsByRequestIdentifier;              //@synthesize pendingRequestsByRequestIdentifier=_pendingRequestsByRequestIdentifier - In the implementation block
-(id)init;
-(id)_pendingRequestsByRequestIdentifier;
-(id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_requestDidFinish:(id)arg1 ;
-(long long)_workImageVersionForContentEditingOutput:(id)arg1 ;
-(void)cancelRequestWithIdentifier:(int)arg1 ;
-(id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
-(BOOL)isSavingRequestWithIdentifier:(int)arg1 ;
-(int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 useRawIfAvailable:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(int)revertEditsForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsProgressForRequestWithIdentifier:(int)arg1 ;
-(double)progressForRequestWithIdentifier:(int)arg1 ;
@end

