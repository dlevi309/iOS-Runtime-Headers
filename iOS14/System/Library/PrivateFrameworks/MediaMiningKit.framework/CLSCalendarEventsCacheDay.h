/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject {

	long long _day;
	NSMutableSet* _events;

}

@property (assign,nonatomic) long long day;                        //@synthesize day=_day - In the implementation block
@property (nonatomic,readonly) NSMutableSet * events;              //@synthesize events=_events - In the implementation block
-(long long)day;
-(void)setDay:(long long)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(NSMutableSet *)events;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDay:(long long)arg1 ;
@end

