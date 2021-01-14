/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/EKCustomPropertiesLoading.h>

@class NSArray, CADObjectID, NSString;

@interface CADPropertySearchPredicate : CADPredicate <EKPredicateEvaluating, EKCustomPropertiesLoading> {

	NSArray* _propertiesToLoad;
	int _entityType;
	NSArray* _filters;
	NSArray* _calendarRowIDs;
	CADObjectID* _sourceID;

}

@property (nonatomic,readonly) int entityType;                               //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                            //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) NSArray * calendarRowIDs;                     //@synthesize calendarRowIDs=_calendarRowIDs - In the implementation block
@property (nonatomic,readonly) CADObjectID * sourceID;                       //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,retain) NSArray * defaultPropertiesToLoad; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(int)entityType;
-(BOOL)validate;
-(NSArray *)defaultPropertiesToLoad;
-(NSArray *)filters;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDefaultPropertiesToLoad:(NSArray *)arg1 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 ;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithCoder:(id)arg1 ;
-(CADObjectID *)sourceID;
-(NSArray *)calendarRowIDs;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4 ;
-(id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2 ;
@end

