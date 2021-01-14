/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDScorecardLayout, NSString, NSArray;

@interface GEOPlaceQuestionnaire : NSObject {

	GEOPDScorecardLayout* _scorecardLayout;
	NSString* _version;
	NSArray* _ratingCategories;

}

@property (nonatomic,copy,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * ratingCategories;              //@synthesize ratingCategories=_ratingCategories - In the implementation block
-(NSArray *)ratingCategories;
-(id)initWithScorecardLayout:(id)arg1 ;
-(NSString *)version;
@end

