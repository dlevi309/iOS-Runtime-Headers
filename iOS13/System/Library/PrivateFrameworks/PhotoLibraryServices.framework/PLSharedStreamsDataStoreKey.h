/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey : NSObject <PLResourceDataStoreKey, PLChooserKeyProperties> {

	NSString* _relativePath;
	unsigned _sharedStreamsResourceType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1 ;
+(id)_replacementPathExtensionForType:(unsigned)arg1 ;
+(id)_keyDataWithRelativePath:(id)arg1 type:(unsigned)arg2 ;
+(id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)resourceType;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)keyData;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned)arg3 ;
-(unsigned)resourceVersion;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
@end

