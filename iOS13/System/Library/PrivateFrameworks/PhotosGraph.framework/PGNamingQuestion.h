/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;
	double _localFactoryScore;
	PHPerson* _person;
	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) PHPerson * person;                         //@synthesize person=_person - In the implementation block
+(id)questionForPerson:(id)arg1 ;
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(NSString *)contactIdentifier;
-(unsigned short)displayType;
-(id)additionalInfo;
-(id)entityIdentifier;
-(PHPerson *)person;
-(unsigned short)entityType;
-(void)persistWithCreationDate:(id)arg1 ;
-(double)localFactoryScore;
-(id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3 ;
-(id)_additionalInfoFromContactIdentifier:(id)arg1 ;
-(void)legacyPersist;
-(void)legacyRemove;
-(id)_personForContactSuggestion;
@end

