/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject {

	GEOResolvedItem* _origin;
	GEOResolvedItem* _destination;
	int _transportType;

}

@property (nonatomic,readonly) GEOResolvedItem * origin;                   //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOResolvedItem * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) int transportType;                          //@synthesize transportType=_transportType - In the implementation block
-(GEOResolvedItem *)origin;
-(int)transportType;
-(id)initWithDirectionIntent:(id)arg1 ;
-(GEOResolvedItem *)destination;
@end

