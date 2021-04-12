/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)keyData;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithResourceType:(unsigned)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)fileURLForAssetID:(id)arg1 inContext:(id)arg2 ;
@end

