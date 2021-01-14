/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADFilter : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateFilterMatches:(id)arg1 ;
-(BOOL)validate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
@end

