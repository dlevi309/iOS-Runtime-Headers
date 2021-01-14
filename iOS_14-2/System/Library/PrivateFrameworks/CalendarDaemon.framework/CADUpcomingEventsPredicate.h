/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predicateFormat;
-(id)initWithLimit:(int)arg1 ;
-(int)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

