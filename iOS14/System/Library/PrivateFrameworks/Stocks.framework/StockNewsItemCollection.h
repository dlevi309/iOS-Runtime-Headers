/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSArray;

@interface StockNewsItemCollection : NSObject {

	NSArray* _newsItems;
	double _expirationTime;

}

@property (nonatomic,retain) NSArray * newsItems;                //@synthesize newsItems=_newsItems - In the implementation block
@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(id)initWithArchiveArray:(id)arg1 ;
-(id)archiveArray;
-(NSArray *)newsItems;
-(void)setNewsItems:(NSArray *)arg1 ;
@end

