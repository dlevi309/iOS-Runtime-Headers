/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey {

	PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 _keyStruct;
	NSString* _filePathSuffix;

}

@property (assign,nonatomic) PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
@property (nonatomic,copy) NSString * filePathSuffix;                                                    //@synthesize filePathSuffix=_filePathSuffix - In the implementation block
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(id)extension;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)keyData;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 andLibraryID:(id)arg2 ;
-(PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1)keyStruct;
-(void)setKeyStruct:(PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1)arg1 ;
-(NSString *)filePathSuffix;
-(void)setFilePathSuffix:(NSString *)arg1 ;
@end

