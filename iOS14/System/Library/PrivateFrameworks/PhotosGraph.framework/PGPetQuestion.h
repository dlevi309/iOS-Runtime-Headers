/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGPetQuestion : PGSurveyQuestion {

	unsigned short _state;
	unsigned short _displayType;
	unsigned short _entityType;
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
-(id)initWithAssetUUID:(id)arg1 displayString:(id)arg2 localFactoryScore:(double)arg3 ;
@end

