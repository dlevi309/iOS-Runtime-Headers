/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGTripKeyAssetQuestion : PGSurveyQuestion {

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
-(id)initWithKeyAssetUUID:(id)arg1 tripName:(id)arg2 isLongTrip:(BOOL)arg3 localFactoryScore:(double)arg4 ;
@end

