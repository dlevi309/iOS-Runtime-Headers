/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <SignpostSupport/SignpostSerializable.h>
#import <SignpostSupport/SignpostSupportTimeInterval.h>

@class NSString, NSDate;

@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval> {

	NSString* _subsystem;
	NSString* _category;
	double _timebaseRatio;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * subsystem;                                         //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,retain) NSString * category;                                          //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) long long tv_sec; 
@property (nonatomic,readonly) int tv_usec; 
@property (nonatomic,readonly) int tz_minuteswest; 
@property (nonatomic,readonly) int tz_dsttime; 
@property (nonatomic,readonly) unsigned long long startMachContinuousTime; 
@property (nonatomic,readonly) unsigned long long startNanoseconds; 
@property (nonatomic,readonly) unsigned long long endMachContinuousTime; 
@property (nonatomic,readonly) unsigned long long endNanoseconds; 
@property (nonatomic,readonly) unsigned long long durationMachContinuousTime; 
@property (nonatomic,readonly) float durationSeconds; 
@property (assign,nonatomic) double timebaseRatio;                                         //@synthesize timebaseRatio=_timebaseRatio - In the implementation block
@property (nonatomic,readonly) NSDate * beginDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(id)serializationTypeNumber;
+(id)headerWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)beginDate;
-(float)durationSeconds;
-(double)durationMs;
-(NSString *)subsystem;
-(void)setSubsystem:(NSString *)arg1 ;
-(unsigned long long)durationMachContinuousTime;
-(double)timebaseRatio;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg1 ;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 ;
-(void)setTimebaseRatio:(double)arg1 ;
-(id)humanReadableDictionaryRepresentation;
-(id)beginWallTimeStringWithTimeZoneName:(id)arg1 ;
-(id)endWallTimeStringWithTimeZoneName:(id)arg1 ;
-(long long)tv_sec;
-(int)tv_usec;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(unsigned long long)durationNanoseconds;
-(void)_adjustBeginTimeVal:(timeval*)arg1 ;
-(void)_adjustEndTimeVal:(timeval*)arg1 ;
-(BOOL)_populateTimeStruct:(time*)arg1 withTimeval:(timeval*)arg2 withTZString:(id)arg3 ;
-(id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(BOOL)arg2 ;
-(BOOL)_hasBeginTimeval;
-(BOOL)_hasEndTimeval;
-(BOOL)beginTimeval:(timeval*)arg1 ;
-(BOOL)endTimeval:(timeval*)arg1 ;
-(id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(BOOL)arg3 ;
-(id)_descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 asBegin:(BOOL)arg3 ;
-(unsigned long long)startNanoseconds;
-(unsigned long long)endNanoseconds;
-(BOOL)_containsTimeObject:(id)arg1 ;
-(double)startSeconds;
-(double)endSeconds;
-(double)startMs;
-(double)endMs;
-(BOOL)beginTimezone:(timezone*)arg1 ;
-(BOOL)endTimezone:(timezone*)arg1 ;
-(id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 ;
-(BOOL)_containsMCT:(unsigned long long)arg1 ;
-(id)_containedObjectsFromArray:(id)arg1 ;
@end

