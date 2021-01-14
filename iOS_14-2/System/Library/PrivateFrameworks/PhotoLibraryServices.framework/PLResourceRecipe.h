/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PLResourceRecipe : NSObject <NSCopying>
+(id)recipeFromID:(unsigned)arg1 ;
+(Class)classFromRecipeID:(unsigned)arg1 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(BOOL)isDerivative;
-(unsigned)recipeID;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(unsigned short)recipeClassID;
-(BOOL)colorSpaceIsNativeForDisplay;
-(BOOL)isMarkedFullSize;
-(id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2 ;
-(id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2 ;
-(void)populateAdjustedRecipeIngredients:(id)arg1 asset:(id)arg2 version:(unsigned)arg3 ;
-(id)expectedFileURLForVersion:(unsigned)arg1 asset:(id)arg2 ;
-(unsigned long long)hash;
-(id)utiInContext:(id)arg1 ;
-(id)codecInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
@end

