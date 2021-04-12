/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface REMEventKitBridgingDataViewInvocation_fetchCompletedRemindersWithCompletionDate : REMStoreInvocation <NSSecureCoding> {

	NSArray* _listIDs;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * listIDs;               //@synthesize listIDs=_listIDs - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSArray *)listIDs;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithListIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

