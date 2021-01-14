/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe {

	unsigned _recipeID;

}

@property (assign,nonatomic) unsigned recipeID;              //@synthesize recipeID=_recipeID - In the implementation block
-(void)setRecipeID:(unsigned)arg1 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(unsigned)recipeID;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(id)description;
-(BOOL)isMarkedFullSize;
-(id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(BOOL)arg4 reason:(id)arg5 ;
-(void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned)arg2 conversionClient:(id)arg3 isHighPriority:(BOOL)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(BOOL)arg5 reason:(id)arg6 progress:(id*)arg7 completion:(/*^block*/id)arg8 ;
-(id)expectedFileURLForVersion:(unsigned)arg1 asset:(id)arg2 ;
-(id)utiInContext:(id)arg1 ;
-(id)codecInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
@end

