/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString, RTMapItem;

@interface RTFavoritePlace : NSObject {

	NSString* _title;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(id)init;
-(RTMapItem *)mapItem;
-(id)description;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 mapItem:(id)arg2 ;
@end

