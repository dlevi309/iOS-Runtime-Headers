/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject {

	long long _year;
	NSMutableSet* _months;

}

@property (assign,nonatomic) long long year;                       //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) NSMutableSet * months;              //@synthesize months=_months - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(NSMutableSet *)months;
-(id)debugDescription;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithYear:(long long)arg1 ;
@end

