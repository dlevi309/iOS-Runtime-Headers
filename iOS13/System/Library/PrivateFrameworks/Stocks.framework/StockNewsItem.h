/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)source;
-(void)setDate:(NSDate *)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)archiveDictionary;
-(NSString *)summary;
-(void)resetLocale;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(long long)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(NSString *)localizedDateString;
@end

