/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGAgeCategoryQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;
	double _localFactoryScore;

}
-(unsigned short)entityType;
-(unsigned short)displayType;
-(unsigned short)type;
-(id)additionalInfo;
-(unsigned short)state;
-(id)entityIdentifier;
-(double)localFactoryScore;
-(id)initWithPersonIdentifier:(id)arg1 ageCategory:(unsigned long long)arg2 localFactoryScore:(double)arg3 ;
@end

