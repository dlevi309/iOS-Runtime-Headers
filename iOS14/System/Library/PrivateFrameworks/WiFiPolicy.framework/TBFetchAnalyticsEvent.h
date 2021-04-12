/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBAnalyticsEvent.h>

@class NSNumber, NSString, NSError, NSDate, NSDictionary;

@interface TBFetchAnalyticsEvent : NSObject <TBAnalyticsEvent> {

	unsigned long long _source;
	unsigned long long _type;
	unsigned long long _trigger;
	NSNumber* _duration;
	NSNumber* _requestCount;
	NSNumber* _resultCount;
	NSString* _tileKey;
	NSError* _error;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned long long source;                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long trigger;                    //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * requestCount;                       //@synthesize requestCount=_requestCount - In the implementation block
@property (nonatomic,retain) NSNumber * resultCount;                        //@synthesize resultCount=_resultCount - In the implementation block
@property (nonatomic,retain) NSString * tileKey;                            //@synthesize tileKey=_tileKey - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDictionary * eventDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchEventWithSource:(unsigned long long)arg1 type:(unsigned long long)arg2 trigger:(unsigned long long)arg3 duration:(id)arg4 requestCount:(id)arg5 resultCount:(id)arg6 error:(id)arg7 tileKey:(id)arg8 ;
-(void)setRequestCount:(NSNumber *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSNumber *)resultCount;
-(unsigned long long)trigger;
-(void)setTrigger:(unsigned long long)arg1 ;
-(NSString *)eventName;
-(void)setDate:(NSDate *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setSource:(unsigned long long)arg1 ;
-(NSString *)tileKey;
-(NSDictionary *)eventDictionary;
-(NSNumber *)requestCount;
-(unsigned long long)type;
-(NSDate *)date;
-(NSNumber *)duration;
-(void)setTileKey:(NSString *)arg1 ;
-(unsigned long long)source;
-(void)setResultCount:(NSNumber *)arg1 ;
@end

