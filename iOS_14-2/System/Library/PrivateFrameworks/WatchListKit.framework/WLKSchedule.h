/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSMutableArray, NSDictionary, NSString, NSDate, NSNumber, NSArray;

@interface WLKSchedule : NSObject {

	NSMutableArray* _mutableEvents;
	NSDictionary* _dictionary;
	NSString* _serviceID;
	NSString* _externalServiceID;
	NSString* _channelID;
	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _cleanupTime;
	NSDate* _earliestEventDate;
	NSDate* _latestEventDate;

}

@property (nonatomic,copy,readonly) NSString * serviceID;                      //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalServiceID;              //@synthesize externalServiceID=_externalServiceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                      //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSNumber * cleanupTime;                         //@synthesize cleanupTime=_cleanupTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * earliestEventDate;                //@synthesize earliestEventDate=_earliestEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestEventDate;                  //@synthesize latestEventDate=_latestEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(void)prune;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)serviceID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)channelID;
-(unsigned long long)hash;
-(NSArray *)events;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)externalServiceID;
-(BOOL)_isDate:(id)arg1 containedByDate:(id)arg2 andDate:(id)arg3 ;
-(id)eventForDate:(id)arg1 ;
-(id)adjacentEventsForDate:(id)arg1 fuzziness:(double)arg2 ;
-(id)eventAfterDate:(id)arg1 ;
-(NSNumber *)cleanupTime;
-(NSDate *)earliestEventDate;
-(NSDate *)latestEventDate;
@end

