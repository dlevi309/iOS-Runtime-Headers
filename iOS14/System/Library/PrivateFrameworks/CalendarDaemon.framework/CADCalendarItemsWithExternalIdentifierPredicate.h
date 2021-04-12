/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADEventPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <EKPredicateEvaluating, NSSecureCoding> {

	int _entityType;
	NSString* _externalIdentifier;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) int entityType;                             //@synthesize entityType=_entityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(int)entityType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalIdentifier;
-(id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

