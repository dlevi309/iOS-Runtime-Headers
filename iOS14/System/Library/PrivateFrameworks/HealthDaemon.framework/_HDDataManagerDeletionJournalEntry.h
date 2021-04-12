/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@protocol HKUUIDCollection;
@class HDDataDeletionConfiguration;

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry {

	id<HKUUIDCollection> _UUIDCollection;
	HDDataDeletionConfiguration* _configuration;

}

@property (nonatomic,readonly) id<HKUUIDCollection> UUIDCollection;                           //@synthesize UUIDCollection=_UUIDCollection - In the implementation block
@property (nonatomic,copy,readonly) HDDataDeletionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HDDataDeletionConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2 ;
-(id<HKUUIDCollection>)UUIDCollection;
@end

