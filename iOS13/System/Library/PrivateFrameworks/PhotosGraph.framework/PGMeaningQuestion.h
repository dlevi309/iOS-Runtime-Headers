/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;
	double _localFactoryScore;

}
-(unsigned short)type;
-(unsigned short)state;
-(unsigned short)displayType;
-(id)additionalInfo;
-(id)entityIdentifier;
-(unsigned short)entityType;
-(double)localFactoryScore;
-(id)initWithMeaningLabel:(id)arg1 assetUUID:(id)arg2 localFactoryScore:(double)arg3 ;
@end

