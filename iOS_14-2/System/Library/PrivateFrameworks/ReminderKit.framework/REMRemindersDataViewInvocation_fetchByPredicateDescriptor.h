/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMReminderPredicateDescriptor, NSArray, REMReminderFetchOptions;

@interface REMRemindersDataViewInvocation_fetchByPredicateDescriptor : REMStoreInvocation <NSSecureCoding> {

	REMReminderPredicateDescriptor* _predicateDescriptor;
	NSArray* _sortDescriptors;
	REMReminderFetchOptions* _options;

}

@property (nonatomic,readonly) REMReminderPredicateDescriptor * predicateDescriptor;              //@synthesize predicateDescriptor=_predicateDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) REMReminderFetchOptions * options;                                 //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(REMReminderFetchOptions *)options;
-(NSArray *)sortDescriptors;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REMReminderPredicateDescriptor *)predicateDescriptor;
-(id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

