/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject {

	long long _day;
	NSMutableSet* _events;

}

@property (assign,nonatomic) long long day;                        //@synthesize day=_day - In the implementation block
@property (nonatomic,readonly) NSMutableSet * events;              //@synthesize events=_events - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)setDay:(long long)arg1 ;
-(long long)day;
-(NSMutableSet *)events;
-(id)initWithDay:(long long)arg1 ;
@end

