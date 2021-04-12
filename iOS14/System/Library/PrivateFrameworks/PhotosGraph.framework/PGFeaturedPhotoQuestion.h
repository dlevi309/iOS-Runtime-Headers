/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;

}
-(unsigned short)entityType;
-(unsigned short)displayType;
-(unsigned short)type;
-(id)additionalInfo;
-(unsigned short)state;
-(id)entityIdentifier;
-(id)initWithAssetUUID:(id)arg1 suggestionType:(unsigned short)arg2 suggestionSubtype:(unsigned short)arg3 ;
-(BOOL)isEquivalentToQuestion:(id)arg1 ;
@end

