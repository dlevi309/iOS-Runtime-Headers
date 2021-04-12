/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSUUID, NSDate, RTLocation, RTMapItem;

@interface RTHistoryEntryPlaceDisplay : NSObject {

	NSUUID* _identifier;
	NSDate* _usageDate;
	RTLocation* _location;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * usageDate;                 //@synthesize usageDate=_usageDate - In the implementation block
@property (nonatomic,readonly) RTLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                //@synthesize mapItem=_mapItem - In the implementation block
-(id)init;
-(id)description;
-(NSUUID *)identifier;
-(RTLocation *)location;
-(RTMapItem *)mapItem;
-(NSDate *)usageDate;
-(id)initWithIdentifier:(id)arg1 usageDate:(id)arg2 location:(id)arg3 mapItem:(id)arg4 ;
@end

