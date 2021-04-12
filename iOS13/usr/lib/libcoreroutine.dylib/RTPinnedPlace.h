/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(RTMapItem *)mapItem;
-(id)initWithType:(unsigned long long)arg1 mapItem:(id)arg2 ;
@end

