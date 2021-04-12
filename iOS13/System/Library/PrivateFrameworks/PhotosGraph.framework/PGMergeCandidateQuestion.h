/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(double)score;
-(void)setScore:(double)arg1 ;
-(unsigned short)displayType;
-(id)additionalInfo;
-(id)entityIdentifier;
-(PHPerson *)person;
-(unsigned short)entityType;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(void)persistWithCreationDate:(id)arg1 ;
-(id)initWithPerson:(id)arg1 score:(double)arg2 ;
@end

