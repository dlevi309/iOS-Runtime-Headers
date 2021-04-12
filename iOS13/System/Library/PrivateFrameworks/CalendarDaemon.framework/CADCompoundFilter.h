/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)operation;
-(NSArray *)filters;
-(BOOL)validate;
-(id)initWithFilters:(id)arg1 operation:(long long)arg2 ;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
@end

