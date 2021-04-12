/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)cursorForDate:(id)arg1 ;
+(id)cursorForOrder:(unsigned long long)arg1 ;
+(id)cursorForCurrentDate;
+(id)cursorForBottomOfFeed;
+(id)cursorForTopOfFeed;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(long long)compareToCursor:(id)arg1 ;
-(BOOL)isEqualToCursor:(id)arg1 ;
-(BOOL)isTopOfFeed;
-(BOOL)isBottomOfFeed;
-(BOOL)hasReachedCursor:(id)arg1 ;
-(id)topmostCursor:(id)arg1 ;
-(id)bottommostCursor:(id)arg1 ;
@end

