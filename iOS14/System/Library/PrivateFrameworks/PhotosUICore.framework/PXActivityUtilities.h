/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXActivityUtilities : NSObject
+(void)requestPersonImageWithTargetSize:(CGSize)arg1 matchingEmail:(id)arg2 orPhone:(id)arg3 withFirstName:(id)arg4 lastName:(id)arg5 prefersPhotosImage:(BOOL)arg6 withCompletion:(/*^block*/id)arg7 ;
+(void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
+(id)textForDate:(id)arg1 ;
+(id)sharedWorkQueue;
+(void)requestMeContactWithCompletion:(/*^block*/id)arg1 ;
+(void)requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
+(void)requestImageForContact:(id)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
+(void)_requestMonogramForFirstName:(id)arg1 lastName:(id)arg2 targetSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
+(id)_initialsFromFirstName:(id)arg1 lastName:(id)arg2 ;
@end

