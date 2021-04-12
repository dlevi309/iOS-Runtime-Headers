/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSString, PHPerson, NSDictionary;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {

	unsigned short _type;
	unsigned short _displayType;
	unsigned short _state;
	unsigned short _entityType;
	NSString* _entityIdentifier;
	double _score;
	PHPerson* _person;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
+(id)questionForPerson:(id)arg1 ;
-(PHPerson *)person;
-(unsigned short)entityType;
-(void)remove;
-(double)score;
-(unsigned short)displayType;
-(void)setScore:(double)arg1 ;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(unsigned short)type;
-(id)additionalInfo;
-(unsigned long long)hash;
-(unsigned short)state;
-(id)entityIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPerson:(id)arg1 score:(double)arg2 ;
-(void)persistWithCreationDate:(id)arg1 ;
@end

