/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLTaggedPointerDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : PLResourceDataStoreKey <PLTaggedPointerDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned)strategyFromExternalResource:(id)arg1 asset:(id)arg2 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)_initWithKeyStruct:(const void*)arg1 ;
-(id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)keyData;
-(id)_init;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

