/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSURL;

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey {

	NSURL* _cachedUrl;
	unsigned char _onceToken;
	PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 _keyStruct;

}
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)fileURLForAssetID:(id)arg1 inContext:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)keyData;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithResourceType:(unsigned)arg1 ;
@end

