/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateInterval, NSTimeZone, NSArray;

@interface CLSPublicEvent : NSObject <NSSecureCoding> {

	unsigned long long _muid;
	NSString* _name;
	NSDateInterval* _localDateInterval;
	double _localStartTime;
	double _localEndTime;
	NSTimeZone* _timeZone;
	NSArray* _performers;
	NSArray* _categories;
	unsigned long long _businessItemMuid;
	long long _expectedAttendance;
	CLLocationCoordinate2D _businessItemCoordinates;

}

@property (assign,nonatomic) unsigned long long muid;                                            //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDateInterval * localDateInterval;                                 //@synthesize localDateInterval=_localDateInterval - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) double localStartTime;                                              //@synthesize localStartTime=_localStartTime - In the implementation block
@property (assign,nonatomic) double localEndTime;                                                //@synthesize localEndTime=_localEndTime - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                               //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * performers;                                               //@synthesize performers=_performers - In the implementation block
@property (assign,nonatomic) long long expectedAttendance;                                       //@synthesize expectedAttendance=_expectedAttendance - In the implementation block
@property (assign,nonatomic) unsigned long long businessItemMuid;                                //@synthesize businessItemMuid=_businessItemMuid - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D businessItemCoordinates;                     //@synthesize businessItemCoordinates=_businessItemCoordinates - In the implementation block
@property (nonatomic,readonly) NSDateInterval * universalDateIntervalIncludingTime; 
@property (nonatomic,readonly) BOOL hasExpectedAttendance; 
@property (nonatomic,readonly) BOOL isEnriched; 
+(BOOL)supportsSecureCoding;
+(id)supportedCategories;
-(NSTimeZone *)timeZone;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(BOOL)isEnriched;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)name;
-(void)setExpectedAttendance:(long long)arg1 ;
-(void)setPerformers:(NSArray *)arg1 ;
-(long long)expectedAttendance;
-(BOOL)hasExpectedAttendance;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)performers;
-(unsigned long long)businessItemMuid;
-(NSDateInterval *)localDateInterval;
-(CLLocationCoordinate2D)businessItemCoordinates;
-(NSDateInterval *)universalDateIntervalIncludingTime;
-(void)setBusinessItemMuid:(unsigned long long)arg1 ;
-(void)setBusinessItemCoordinates:(CLLocationCoordinate2D)arg1 ;
-(void)setLocalEndTime:(double)arg1 ;
-(void)setLocalStartTime:(double)arg1 ;
-(void)setLocalDateInterval:(NSDateInterval *)arg1 ;
-(double)localEndTime;
-(double)localStartTime;
-(id)_calculateUniversalDateFromLocalDate:(id)arg1 includingTimeZone:(id)arg2 localStartTime:(double)arg3 ;
@end

