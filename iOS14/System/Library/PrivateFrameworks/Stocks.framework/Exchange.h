/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString, NSDate;

@interface Exchange : NSObject {

	NSString* _name;
	NSDate* _lastCloseDate;
	NSDate* _nextOpenDate;
	long long _status;
	double _streamInterval;
	double _lastUpdateTime;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * lastCloseDate;               //@synthesize lastCloseDate=_lastCloseDate - In the implementation block
@property (nonatomic,retain) NSDate * nextOpenDate;                //@synthesize nextOpenDate=_nextOpenDate - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double streamInterval;                //@synthesize streamInterval=_streamInterval - In the implementation block
@property (nonatomic,readonly) double lastUpdateTime;              //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
+(id)formattedExchangeNameForName:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(double)lastUpdateTime;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(id)archiveDictionary;
-(BOOL)marketIsOpen;
-(double)streamInterval;
-(void)_updateWithDictionary:(id)arg1 newUpdate:(BOOL)arg2 ;
-(void)setNextOpenDate:(NSDate *)arg1 ;
-(void)setLastCloseDate:(NSDate *)arg1 ;
-(void)setStreamInterval:(double)arg1 ;
-(NSDate *)lastCloseDate;
-(NSDate *)nextOpenDate;
-(BOOL)marketIsAfterHours;
@end

