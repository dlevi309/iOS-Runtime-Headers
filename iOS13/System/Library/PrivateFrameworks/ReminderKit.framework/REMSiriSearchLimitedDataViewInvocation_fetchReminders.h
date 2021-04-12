/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(NSNumber *)completed;
-(NSNumber *)hasLocation;
-(id)initWithTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 ;
-(NSDate *)dueBefore;
-(NSDate *)dueAfter;
@end

