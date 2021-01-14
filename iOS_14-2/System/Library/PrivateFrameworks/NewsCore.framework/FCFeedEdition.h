/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)keyDate;
-(void)setFeedDateRange:(FCDateRange *)arg1 ;
-(void)setKeyDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(FCDateRange *)feedDateRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

