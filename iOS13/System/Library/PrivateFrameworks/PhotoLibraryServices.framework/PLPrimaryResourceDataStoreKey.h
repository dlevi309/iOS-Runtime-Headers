/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLTaggedPointerDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : NSObject <PLTaggedPointerDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned)strategyFromExternalResource:(id)arg1 asset:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_init;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)keyData;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)_initWithKeyStruct:(const void*)arg1 ;
-(id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
@end

