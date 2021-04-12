/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCFeedCursor, FCDateRange;

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying> {

	FCFeedCursor* _top;
	FCFeedCursor* _bottom;

}

@property (nonatomic,copy) FCFeedCursor * top;                            //@synthesize top=_top - In the implementation block
@property (nonatomic,copy) FCFeedCursor * bottom;                         //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,readonly) BOOL reachesTopOfFeed; 
@property (nonatomic,readonly) BOOL reachesBottomOfFeed; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) FCDateRange * dateRange; 
+(BOOL)supportsSecureCoding;
+(id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2 ;
+(id)feedRangeWithTop:(id)arg1 bottom:(id)arg2 ;
+(id)feedRangeFromDateRange:(id)arg1 ;
+(id)feedRangeFromDate:(id)arg1 toDate:(id)arg2 ;
+(id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2 ;
-(BOOL)reachesBottomOfFeed;
-(FCDateRange *)dateRange;
-(BOOL)intersectsRange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBottom:(FCFeedCursor *)arg1 ;
-(BOOL)containsFeedRange:(id)arg1 ;
-(BOOL)containsCursor:(id)arg1 ;
-(id)description;
-(void)setTop:(FCFeedCursor *)arg1 ;
-(FCFeedCursor *)bottom;
-(id)feedRangeByUnioningWithRange:(id)arg1 ;
-(FCFeedCursor *)top;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)reachesTopOfFeed;
-(BOOL)containsOrder:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(id)feedRangeByIntersectingWithRange:(id)arg1 ;
-(BOOL)intersectsOrAdjoinsRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

