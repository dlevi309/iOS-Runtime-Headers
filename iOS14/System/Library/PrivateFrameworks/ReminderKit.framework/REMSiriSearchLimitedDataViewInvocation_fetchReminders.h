/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber;

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding> {

	NSString* _title;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSNumber* _completed;
	NSNumber* _hasLocation;
	NSString* _location;

}

@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * dueAfter;                   //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,readonly) NSDate * dueBefore;                  //@synthesize dueBefore=_dueBefore - In the implementation block
@property (nonatomic,readonly) NSNumber * completed;                //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) NSNumber * hasLocation;              //@synthesize hasLocation=_hasLocation - In the implementation block
@property (nonatomic,readonly) NSString * location;                 //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)completed;
-(NSString *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)dueAfter;
-(NSNumber *)hasLocation;
-(NSDate *)dueBefore;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

