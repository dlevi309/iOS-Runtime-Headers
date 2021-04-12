/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)categories;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(NSArray *)performers;
-(void)setPerformers:(NSArray *)arg1 ;
-(long long)expectedAttendance;
-(void)setExpectedAttendance:(long long)arg1 ;
-(BOOL)hasExpectedAttendance;
-(void)setCategories:(NSArray *)arg1 ;
-(BOOL)isEnriched;
-(unsigned long long)businessItemMuid;
-(NSDateInterval *)universalDateIntervalIncludingTime;
-(id)_calculateUniversalDateFromLocalDate:(id)arg1 includingTimeZone:(id)arg2 localStartTime:(double)arg3 ;
-(NSDateInterval *)localDateInterval;
-(void)setLocalDateInterval:(NSDateInterval *)arg1 ;
-(double)localStartTime;
-(void)setLocalStartTime:(double)arg1 ;
-(double)localEndTime;
-(void)setLocalEndTime:(double)arg1 ;
-(void)setBusinessItemMuid:(unsigned long long)arg1 ;
-(CLLocationCoordinate2D)businessItemCoordinates;
-(void)setBusinessItemCoordinates:(CLLocationCoordinate2D)arg1 ;
@end

