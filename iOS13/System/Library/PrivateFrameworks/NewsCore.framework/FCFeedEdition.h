/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, FCDateRange;

@interface FCFeedEdition : NSObject <NSCopying> {

	NSDate* _keyDate;
	FCDateRange* _feedDateRange;

}

@property (nonatomic,copy) NSDate * keyDate;                         //@synthesize keyDate=_keyDate - In the implementation block
@property (nonatomic,copy) FCDateRange * feedDateRange;              //@synthesize feedDateRange=_feedDateRange - In the implementation block
+(id)editionWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCDateRange *)feedDateRange;
-(id)initWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(NSDate *)keyDate;
-(void)setKeyDate:(NSDate *)arg1 ;
-(void)setFeedDateRange:(FCDateRange *)arg1 ;
@end

