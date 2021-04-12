/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PLResourceRecipe : NSObject <NSCopying>
+(Class)classFromRecipeID:(unsigned)arg1 ;
+(id)recipeFromID:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)utiInContext:(id)arg1 ;
-(BOOL)colorSpaceIsNativeForDisplay;
-(BOOL)isMarkedFullSize;
-(id)codecInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(id)expectedFileURLForVersion:(unsigned)arg1 asset:(id)arg2 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 completion:(/*^block*/id)arg6 ;
-(id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2 ;
-(unsigned)recipeID;
-(long long)adjustedIngredientsForAsset:(id)arg1 ingredients:(id)arg2 version:(unsigned)arg3 ;
-(BOOL)isDerivative;
-(unsigned short)recipeClassID;
@end

