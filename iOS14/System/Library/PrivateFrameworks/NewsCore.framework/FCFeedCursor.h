/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _order;

}

@property (assign,nonatomic) unsigned long long order;              //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL isTopOfFeed; 
@property (nonatomic,readonly) BOOL isBottomOfFeed; 
@property (nonatomic,copy,readonly) NSDate * date; 
+(BOOL)supportsSecureCoding;
+(id)cursorForOrder:(unsigned long long)arg1 ;
+(id)cursorForTopOfFeed;
+(id)cursorForDate:(id)arg1 ;
+(id)cursorForCurrentDate;
+(id)cursorForBottomOfFeed;
-(BOOL)isBottomOfFeed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)topmostCursor:(id)arg1 ;
-(id)description;
-(long long)compareToCursor:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTopOfFeed;
-(NSDate *)date;
-(BOOL)hasReachedCursor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bottommostCursor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(BOOL)isEqualToCursor:(id)arg1 ;
@end

