/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PHPerson *)person;
-(unsigned short)entityType;
-(void)remove;
-(NSString *)contactIdentifier;
-(unsigned short)displayType;
-(unsigned short)type;
-(id)additionalInfo;
-(unsigned short)state;
-(id)entityIdentifier;
-(double)localFactoryScore;
-(void)persistWithCreationDate:(id)arg1 ;
-(id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3 ;
-(id)initWithConfirmedPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3 ;
-(id)_additionalInfoFromContactIdentifier:(id)arg1 ;
-(void)legacyPersist;
-(void)legacyRemove;
-(id)_personForContactSuggestion;
@end

