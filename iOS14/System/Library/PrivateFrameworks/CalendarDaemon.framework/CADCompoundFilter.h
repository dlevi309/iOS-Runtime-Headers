/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADFilter.h>

@class NSArray;

@interface CADCompoundFilter : CADFilter {

	NSArray* _filters;
	long long _operation;

}

@property (nonatomic,readonly) NSArray * filters;                //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) long long operation;              //@synthesize operation=_operation - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateFilterMatches:(id)arg1 ;
-(BOOL)validate;
-(long long)operation;
-(NSArray *)filters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFilters:(id)arg1 operation:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
@end

