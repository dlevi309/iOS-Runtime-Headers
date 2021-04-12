/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject {

	long long _month;
	NSMutableSet* _days;

}

@property (assign,nonatomic) long long month;                    //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) NSMutableSet * days;              //@synthesize days=_days - In the implementation block
-(NSMutableSet *)days;
-(void)setMonth:(long long)arg1 ;
-(long long)month;
-(id)debugDescription;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMonth:(long long)arg1 ;
@end

