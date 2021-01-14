/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties> {

	NSString* _relativePath;
	unsigned _sharedStreamsResourceType;

}
+(id)_replacementPathExtensionForType:(unsigned)arg1 ;
+(id)_keyDataWithRelativePath:(id)arg1 type:(unsigned)arg2 ;
+(id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4 ;
+(unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1 ;
-(unsigned)resourceType;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned)arg3 ;
-(id)uniformTypeIdentifier;
-(id)descriptionForAssetID:(id)arg1 ;
-(unsigned)resourceVersion;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)keyData;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

