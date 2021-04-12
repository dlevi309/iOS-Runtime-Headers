/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/_REMFetchExecutor.h>

@class REMReminderPredicateDescriptor, NSArray;

@interface REMReminderFetchExecutor : _REMFetchExecutor {

	REMReminderPredicateDescriptor* _predicateDescriptor;
	NSArray* _sortDescriptors;
	unsigned long long _options;

}

@property (nonatomic,retain) REMReminderPredicateDescriptor * predicateDescriptor;              //@synthesize predicateDescriptor=_predicateDescriptor - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                      //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(REMReminderPredicateDescriptor *)predicateDescriptor;
-(id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setPredicateDescriptor:(REMReminderPredicateDescriptor *)arg1 ;
-(id)resultsFromFetchResult:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)resultsFromFetchResult:(id)arg1 inParentReminder:(id)arg2 error:(id*)arg3 ;
@end

