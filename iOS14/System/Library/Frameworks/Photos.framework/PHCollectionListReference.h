/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCollectionReference.h>

@class NSArray;

@interface PHCollectionListReference : PHCollectionReference {

	long long _collectionListType;
	long long _collectionListSubtype;
	NSArray* _transientCollectionReferences;

}

@property (nonatomic,copy,readonly) NSArray * transientCollectionReferences;              //@synthesize transientCollectionReferences=_transientCollectionReferences - In the implementation block
@property (nonatomic,readonly) long long collectionListType;                              //@synthesize collectionListType=_collectionListType - In the implementation block
@property (nonatomic,readonly) long long collectionListSubtype;                           //@synthesize collectionListSubtype=_collectionListSubtype - In the implementation block
+(id)representedType;
+(id)referenceForCollectionList:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(id)_transientCollectionInLibrary:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4 collectionReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4 ;
-(NSArray *)transientCollectionReferences;
-(long long)collectionListSubtype;
-(long long)collectionListType;
-(BOOL)transient;
@end
