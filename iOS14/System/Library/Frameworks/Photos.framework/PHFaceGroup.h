/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@interface PHFaceGroup : PHObject {

	long long _unnamedFaceCount;
	long long _personModelId;
	long long _personBuilderState;

}

@property (nonatomic,readonly) long long personModelId;                   //@synthesize personModelId=_personModelId - In the implementation block
@property (nonatomic,readonly) long long personBuilderState;              //@synthesize personBuilderState=_personBuilderState - In the implementation block
@property (nonatomic,readonly) long long unnamedFaceCount;                //@synthesize unnamedFaceCount=_unnamedFaceCount - In the implementation block
+(id)entityKeyMap;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)fetchType;
+(id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchEmptyFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsWithOptions:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
+(id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)getPersonModelId;
-(long long)unnamedFaceCount;
-(long long)personModelId;
-(long long)personBuilderState;
@end

