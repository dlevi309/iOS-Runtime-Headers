/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOMapItemParentVenue : NSObject {

	unsigned long long _businessID;
	int _featureType;

}

@property (nonatomic,readonly) unsigned long long businessID;              //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) int featureType;                            //@synthesize featureType=_featureType - In the implementation block
-(id)init;
-(int)featureType;
-(unsigned long long)businessID;
-(id)initWithLocatedInsideInfo:(id)arg1 ;
-(id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2 ;
@end

