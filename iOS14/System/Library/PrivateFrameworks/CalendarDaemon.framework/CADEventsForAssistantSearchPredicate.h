/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CADEventsForAssistantSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {

	NSString* _location;
	NSString* _notes;
	NSArray* _participants;
	long long _limit;

}

@property (nonatomic,copy) NSString * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * notes;                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSArray * participants;                  //@synthesize participants=_participants - In the implementation block
@property (assign,nonatomic) long long limit;                       //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)notes;
-(id)predicateFormat;
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
-(id)defaultPropertiesToLoad;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(NSString *)description;
-(id)initWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 limit:(long long)arg8 ;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithCoder:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

