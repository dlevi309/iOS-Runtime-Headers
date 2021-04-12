/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)title;
-(RTMapItem *)mapItem;
-(id)initWithTitle:(id)arg1 mapItem:(id)arg2 ;
@end

