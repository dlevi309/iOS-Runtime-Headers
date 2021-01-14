/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableDictionary, NSDate;

@interface PGMoodGenerationContext : NSObject {

	NSMutableDictionary* _isLongTimeNoSeeByPersonLocalIdentifier;
	NSMutableDictionary* _isLongTimeNoSeeBySocialGroupUUID;
	NSMutableDictionary* _isLongTimeNoSeeByLocationUUID;
	NSDate* _longTimeNoSeePeopleLatestDate;
	NSDate* _longTimeNoSeeLocationLatestDate;

}
-(id)initWithReferenceDate:(id)arg1 ;
-(BOOL)momentIsLongTimeNoSeeForPeopleWithMomentNode:(id)arg1 ;
-(BOOL)momentIsLongTimeNoSeeForLocationWithMomentNode:(id)arg1 ;
-(BOOL)personIsLongTimeNoSeeWithPersonNode:(id)arg1 ;
-(BOOL)socialGroupIsLongTimeNoSeeWithSocialGroupNode:(id)arg1 ;
-(BOOL)locationIsLongTimeNoSeeWithLocationNode:(id)arg1 ;
@end

