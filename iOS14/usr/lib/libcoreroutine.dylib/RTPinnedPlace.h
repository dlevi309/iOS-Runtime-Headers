/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTMapItem;

@interface RTPinnedPlace : NSObject {

	unsigned long long _type;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                  //@synthesize mapItem=_mapItem - In the implementation block
-(id)init;
-(RTMapItem *)mapItem;
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 mapItem:(id)arg2 ;
@end

