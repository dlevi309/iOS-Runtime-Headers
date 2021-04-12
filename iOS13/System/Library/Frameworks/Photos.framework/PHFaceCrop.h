/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceCropsWithOptions:(id)arg1 ;
+(id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1 ;
-(short)type;
-(short)state;
-(NSData *)resourceData;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
@end

