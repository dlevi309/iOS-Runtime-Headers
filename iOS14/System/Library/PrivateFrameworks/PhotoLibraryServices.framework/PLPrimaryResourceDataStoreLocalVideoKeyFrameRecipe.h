/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLResourceRecipe.h>

@class NSMutableOrderedSet, NSMutableSet;

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {

	os_unfair_lock_s _jobLock;
	NSMutableOrderedSet* _jobQueue;
	NSMutableSet* _inflightJobs;

}
+(void)_generateKeyFrameFromVideoURL:(id)arg1 destinationURL:(id)arg2 time:(SCD_Struct_PL14)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned)recipeID;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(id)_nextJobAfterCompletingInflightJob:(id)arg1 ;
-(void)_handleKeyFrameGeneratedWithSuccess:(BOOL)arg1 error:(id)arg2 asset:(id)arg3 destinationURL:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_generateAndStoreForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 progress:(id*)arg3 completion:(/*^block*/id)arg4 ;
-(void)generateAndStoreForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 progress:(id*)arg3 completion:(/*^block*/id)arg4 ;
-(void)_runJob:(id)arg1 ;
-(id)codecInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
@end

