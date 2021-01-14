/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties> {

	PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 _keyStruct;

}

@property (assign,nonatomic) PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(id)_fileURLFromKeyStruct:(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1*)arg1 assetID:(id)arg2 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
-(unsigned)resourceType;
-(BOOL)isDerivative;
-(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)keyStruct;
-(id)fileURLForAssetID:(id)arg1 ;
-(void)setKeyStruct:(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)arg1 ;
-(id)uniformTypeIdentifier;
-(unsigned)resourceVersion;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)keyData;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 resourceVersion:(unsigned)arg2 resourceType:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
@end

