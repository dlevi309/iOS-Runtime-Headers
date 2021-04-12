/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(double)lastUpdateTime;
-(id)archiveDictionary;
-(void)updateWithDictionary:(id)arg1 ;
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

