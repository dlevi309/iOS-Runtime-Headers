/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString, NSDictionary, NSDate;

@interface PHQuestion : PHObject {

	unsigned short _type;
	unsigned short _state;
	unsigned short _entityType;
	unsigned short _displayType;
	NSString* _entityIdentifier;
	double _score;
	NSDictionary* _additionalInfo;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSString * entityIdentifier;                //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short entityType;                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned short displayType;                 //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
+(id)entityKeyMap;
+(id)fetchQuestionsWithOptions:(id)arg1 validQuestionsOnly:(BOOL)arg2 ;
+(id)fetchQuestionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 validQuestionsOnly:(BOOL)arg3 ;
+(id)fetchAnsweredYesOrNoQuestionsWithOptions:(id)arg1 validQuestionsOnly:(BOOL)arg2 ;
+(id)fetchAnsweredQuestionsWithOptions:(id)arg1 validQuestionsOnly:(BOOL)arg2 ;
+(id)fetchUnansweredQuestionsWithOptions:(id)arg1 validQuestionsOnly:(BOOL)arg2 ;
+(id)fetchInvalidatedQuestionsWithOptions:(id)arg1 ;
+(id)questionsWithValidEntitiesFromQuestions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(unsigned short)entityType;
-(double)score;
-(unsigned short)displayType;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSDate *)creationDate;
-(unsigned short)type;
-(NSDictionary *)additionalInfo;
-(unsigned short)state;
-(NSString *)entityIdentifier;
@end

