/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject {

	BOOL _containsMePerson;
	unsigned long long _numberOfPeople;
	unsigned long long _peopleTrait;
	unsigned long long _locationTrait;
	NSSet* _categories;

}

@property (assign,nonatomic) BOOL containsMePerson;                          //@synthesize containsMePerson=_containsMePerson - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeople;              //@synthesize numberOfPeople=_numberOfPeople - In the implementation block
@property (assign,nonatomic) unsigned long long peopleTrait;                 //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (assign,nonatomic) unsigned long long locationTrait;               //@synthesize locationTrait=_locationTrait - In the implementation block
@property (nonatomic,retain) NSSet * categories;                             //@synthesize categories=_categories - In the implementation block
-(void)setCategories:(NSSet *)arg1 ;
-(id)init;
-(NSSet *)categories;
-(id)description;
-(unsigned long long)peopleTrait;
-(void)setPeopleTrait:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPeople;
-(void)setNumberOfPeople:(unsigned long long)arg1 ;
-(void)setContainsMePerson:(BOOL)arg1 ;
-(void)setLocationTrait:(unsigned long long)arg1 ;
-(unsigned long long)locationTrait;
-(BOOL)containsMePerson;
@end

