/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADUpcomingEventsPredicate : CADPredicate <NSSecureCoding> {

	int _limit;

}

@property (nonatomic,readonly) int limit;              //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithLimit:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(int)limit;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithLimit:(int)arg1 ;
@end

