/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg1 options:(id)arg2 ;
+(id)fetchEmptyFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
-(long long)personBuilderState;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)getPersonModelId;
-(long long)unnamedFaceCount;
-(long long)personModelId;
@end

