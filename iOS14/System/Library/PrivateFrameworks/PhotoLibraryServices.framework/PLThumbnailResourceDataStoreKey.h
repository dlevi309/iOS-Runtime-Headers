/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLTableThumbResourceKey.h>

@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey> {

	PLThumbnailDataStoreKeyStruct_V1 _keyStruct;

}

@property (assign,nonatomic) PLThumbnailDataStoreKeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
@property (nonatomic,readonly) unsigned tableType; 
@property (nonatomic,readonly) int index; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned)recipeIDForTableType:(unsigned)arg1 inStore:(id)arg2 ;
+(BOOL)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1 ;
-(int)index;
-(unsigned)resourceType;
-(BOOL)isDerivative;
-(PLThumbnailDataStoreKeyStruct_V1)keyStruct;
-(id)fileURLForAssetID:(id)arg1 ;
-(BOOL)representsSquareResource;
-(void)setKeyStruct:(PLThumbnailDataStoreKeyStruct_V1)arg1 ;
-(id)uniformTypeIdentifier;
-(id)descriptionForAssetID:(id)arg1 ;
-(void)tableType:(unsigned*)arg1 index:(int*)arg2 ;
-(unsigned)resourceVersion;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)keyData;
-(unsigned)tableType;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

