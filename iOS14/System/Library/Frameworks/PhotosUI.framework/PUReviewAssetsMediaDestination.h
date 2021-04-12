/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUMediaDestination.h>

@class NSURL, PUEditableMediaProvider, NSMutableDictionary;

@interface PUReviewAssetsMediaDestination : PUMediaDestination {

	NSURL* __desiredOutputDirectory;
	PUEditableMediaProvider* __mediaProvider;
	NSMutableDictionary* _pendingRequestsByRequestIdentifier;

}

@property (nonatomic,readonly) NSURL * _desiredOutputDirectory;                                                                                  //@synthesize _desiredOutputDirectory=__desiredOutputDirectory - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * _mediaProvider;                                                                         //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (getter=_pendingRequestsByRequestIdentifier,nonatomic,readonly) NSMutableDictionary * pendingRequestsByRequestIdentifier;              //@synthesize pendingRequestsByRequestIdentifier=_pendingRequestsByRequestIdentifier - In the implementation block
-(id)initWithOutputDirectory:(id)arg1 mediaProvider:(id)arg2 ;
-(id)_saveEditsWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)_desiredOutputDirectory;
-(id)_pendingRequestsByRequestIdentifier;
-(void)_requestDidFinish:(id)arg1 ;
-(long long)_workImageVersionForContentEditingOutput:(id)arg1 ;
-(void)cancelRequestWithIdentifier:(int)arg1 ;
-(PUEditableMediaProvider *)_mediaProvider;
-(BOOL)isSavingRequestWithIdentifier:(int)arg1 ;
-(int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 useRawIfAvailable:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(int)revertEditsForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsProgressForRequestWithIdentifier:(int)arg1 ;
-(double)progressForRequestWithIdentifier:(int)arg1 ;
@end

