/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject {

	long long _month;
	NSMutableSet* _days;

}

@property (assign,nonatomic) long long month;                    //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) NSMutableSet * days;              //@synthesize days=_days - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)setMonth:(long long)arg1 ;
-(long long)month;
-(NSMutableSet *)days;
-(id)initWithMonth:(long long)arg1 ;
@end

