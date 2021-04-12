/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDictionary;

@interface TSTAIUTCValue : NSObject <NSCopying> {

	NSDate* _utcDate;
	NSDate* _taiDate;
	unsigned long long _modifiedJulianDay;
	double _constant;
	double _coefficient;
	unsigned long long _offset;

}

@property (nonatomic,retain) NSDate * utcDate;                                  //@synthesize utcDate=_utcDate - In the implementation block
@property (nonatomic,retain) NSDate * taiDate;                                  //@synthesize taiDate=_taiDate - In the implementation block
@property (assign,nonatomic) unsigned long long modifiedJulianDay;              //@synthesize modifiedJulianDay=_modifiedJulianDay - In the implementation block
@property (assign,nonatomic) double constant;                                   //@synthesize constant=_constant - In the implementation block
@property (assign,nonatomic) double coefficient;                                //@synthesize coefficient=_coefficient - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                         //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(double)constant;
-(id)init;
-(double)coefficient;
-(NSDate *)utcDate;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)offset;
-(void)setConstant:(double)arg1 ;
-(NSDictionary *)dictionary;
-(NSDate *)taiDate;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)modifiedJulianDay;
-(void)setUtcDate:(NSDate *)arg1 ;
-(void)setTaiDate:(NSDate *)arg1 ;
-(void)setModifiedJulianDay:(unsigned long long)arg1 ;
-(void)setCoefficient:(double)arg1 ;
@end

