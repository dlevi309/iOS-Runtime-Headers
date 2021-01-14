/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString, NSDate, NSURL;

@interface StockNewsItem : NSObject {

	NSString* _headline;
	NSString* _summary;
	NSString* _source;
	NSDate* _date;
	NSURL* _link;
	NSString* _localizedDateString;

}

@property (nonatomic,retain) NSString * headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * summary;                                   //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * link;                                         //@synthesize link=_link - In the implementation block
@property (nonatomic,retain,readonly) NSString * localizedDateString; 
+(id)localizedStringForDate:(id)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(NSString *)headline;
-(void)setHeadline:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(NSString *)summary;
-(void)resetLocale;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(NSDate *)date;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)source;
-(id)archiveDictionary;
-(long long)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(NSString *)localizedDateString;
@end

