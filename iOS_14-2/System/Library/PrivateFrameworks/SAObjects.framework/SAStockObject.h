/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString, NSArray;

@interface SAStockObject : SADomainObject

@property (nonatomic,copy) NSNumber * averageDailyVolume; 
@property (nonatomic,copy) NSNumber * change; 
@property (nonatomic,copy) NSNumber * changePercent; 
@property (nonatomic,copy) NSString * chartData; 
@property (nonatomic,copy) NSString * currency; 
@property (nonatomic,copy) NSString * displayStyle; 
@property (nonatomic,copy) NSNumber * dividendYield; 
@property (nonatomic,copy) NSNumber * earningsPerShare; 
@property (nonatomic,copy) NSString * exchange; 
@property (nonatomic,copy) NSNumber * fiftyTwoWeekHigh; 
@property (nonatomic,copy) NSNumber * fiftyTwoWeekLow; 
@property (nonatomic,copy) NSNumber * high; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSNumber * low; 
@property (nonatomic,copy) NSString * marketCap; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * open; 
@property (nonatomic,copy) NSNumber * peRatio; 
@property (nonatomic,copy) NSNumber * prevClose; 
@property (nonatomic,copy) NSNumber * price; 
@property (nonatomic,copy) NSNumber * realTimeChange; 
@property (nonatomic,copy) NSNumber * realTimeChangePercent; 
@property (nonatomic,copy) NSNumber * realTimePrice; 
@property (nonatomic,copy) NSNumber * realTimeTS; 
@property (nonatomic,copy) NSArray * requests; 
@property (nonatomic,copy) NSNumber * status; 
@property (nonatomic,copy) NSArray * stockNews; 
@property (nonatomic,copy) NSString * symbol; 
@property (nonatomic,copy) NSNumber * timeStamp; 
@property (nonatomic,copy) NSNumber * volume; 
@property (nonatomic,copy) NSString * yearRange; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)link;
-(NSNumber *)price;
-(NSNumber *)low;
-(void)setLow:(NSNumber *)arg1 ;
-(void)setLink:(NSString *)arg1 ;
-(NSNumber *)high;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setOpen:(NSNumber *)arg1 ;
-(void)setChange:(NSNumber *)arg1 ;
-(NSNumber *)open;
-(id)encodedClassName;
-(NSString *)chartData;
-(void)setChartData:(NSString *)arg1 ;
-(NSNumber *)change;
-(void)setHigh:(NSNumber *)arg1 ;
-(NSString *)currency;
-(NSNumber *)timeStamp;
-(NSArray *)requests;
-(NSNumber *)peRatio;
-(NSString *)name;
-(void)setDisplayStyle:(NSString *)arg1 ;
-(void)setRequests:(NSArray *)arg1 ;
-(NSString *)symbol;
-(void)setTimeStamp:(NSNumber *)arg1 ;
-(void)setPrice:(NSNumber *)arg1 ;
-(void)setSymbol:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)exchange;
-(NSNumber *)volume;
-(void)setCurrency:(NSString *)arg1 ;
-(NSNumber *)averageDailyVolume;
-(void)setAverageDailyVolume:(NSNumber *)arg1 ;
-(NSNumber *)changePercent;
-(void)setChangePercent:(NSNumber *)arg1 ;
-(NSNumber *)dividendYield;
-(void)setDividendYield:(NSNumber *)arg1 ;
-(NSNumber *)earningsPerShare;
-(void)setEarningsPerShare:(NSNumber *)arg1 ;
-(void)setExchange:(NSString *)arg1 ;
-(NSNumber *)fiftyTwoWeekHigh;
-(void)setFiftyTwoWeekHigh:(NSNumber *)arg1 ;
-(NSNumber *)fiftyTwoWeekLow;
-(void)setFiftyTwoWeekLow:(NSNumber *)arg1 ;
-(NSString *)marketCap;
-(void)setMarketCap:(NSString *)arg1 ;
-(void)setPeRatio:(NSNumber *)arg1 ;
-(NSNumber *)prevClose;
-(void)setPrevClose:(NSNumber *)arg1 ;
-(NSNumber *)realTimeChange;
-(void)setRealTimeChange:(NSNumber *)arg1 ;
-(NSNumber *)realTimeChangePercent;
-(void)setRealTimeChangePercent:(NSNumber *)arg1 ;
-(NSNumber *)realTimePrice;
-(void)setRealTimePrice:(NSNumber *)arg1 ;
-(NSNumber *)realTimeTS;
-(NSArray *)stockNews;
-(NSNumber *)status;
-(void)setRealTimeTS:(NSNumber *)arg1 ;
-(void)setStockNews:(NSArray *)arg1 ;
-(NSString *)yearRange;
-(void)setYearRange:(NSString *)arg1 ;
-(NSString *)displayStyle;
@end

