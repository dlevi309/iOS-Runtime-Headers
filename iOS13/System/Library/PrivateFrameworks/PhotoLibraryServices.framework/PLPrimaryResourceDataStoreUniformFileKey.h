/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties> {

	PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 _keyStruct;

}

@property (assign,nonatomic) PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(unsigned)resourceType;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)keyData;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(unsigned)resourceVersion;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 resourceVersion:(unsigned)arg2 resourceType:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)keyStruct;
-(void)setKeyStruct:(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)arg1 ;
@end

