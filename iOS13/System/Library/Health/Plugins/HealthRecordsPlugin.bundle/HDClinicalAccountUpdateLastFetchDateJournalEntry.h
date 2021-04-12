/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class NSDate;

@interface HDClinicalAccountUpdateLastFetchDateJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	BOOL _wasFullFetch;
	NSDate* _lastFetchDate;

}

@property (nonatomic,copy,readonly) NSDate * lastFetchDate;              //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL wasFullFetch;                        //@synthesize wasFullFetch=_wasFullFetch - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastFetchDate;
-(id)initWithLastFetchDate:(id)arg1 wasFullFetch:(BOOL)arg2 accountIdentifier:(id)arg3 ;
-(BOOL)wasFullFetch;
@end

