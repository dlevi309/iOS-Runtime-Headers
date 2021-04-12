/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOResolvedItem *)destination;
-(GEOResolvedItem *)origin;
-(int)transportType;
-(id)initWithDirectionIntent:(id)arg1 ;
@end

