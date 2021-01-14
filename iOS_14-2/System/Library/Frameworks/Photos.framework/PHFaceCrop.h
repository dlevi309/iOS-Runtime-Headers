/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSData;

@interface PHFaceCrop : PHObject {

	short _state;
	short _type;
	NSData* _resourceData;

}

@property (nonatomic,readonly) NSData * resourceData;              //@synthesize resourceData=_resourceData - In the implementation block
@property (nonatomic,readonly) short state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) short type;                         //@synthesize type=_type - In the implementation block
+(id)entityKeyMap;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceCropsWithOptions:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1 ;
+(id)fetchTransientTrainingFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)_trainingFaceCropByUUIDForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropByFaceLocalIdentifierForFaces:(id)arg1 fetchOptions:(id)arg2 ;
+(id)managedEntityName;
-(NSData *)resourceData;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(short)type;
-(short)state;
@end

