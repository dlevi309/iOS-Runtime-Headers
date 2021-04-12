/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCollectionReference.h>

@class NSArray;

@interface PHAssetCollectionReference : PHCollectionReference {

	long long _assetCollectionType;
	long long _assetCollectionSubtype;
	NSArray* _transientAssetReferences;

}

@property (nonatomic,copy,readonly) NSArray * transientAssetReferences;              //@synthesize transientAssetReferences=_transientAssetReferences - In the implementation block
@property (nonatomic,readonly) long long assetCollectionType;                        //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                     //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
+(id)representedType;
+(id)referenceForAssetCollection:(id)arg1 ;
-(long long)assetCollectionType;
-(long long)assetCollectionSubtype;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(BOOL)transient;
-(id)_transientCollectionInLibrary:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 assetReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 ;
-(NSArray *)transientAssetReferences;
@end

