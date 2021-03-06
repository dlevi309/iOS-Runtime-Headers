/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDClinicalDeletedAccountJournalEntry : HDJournalEntry {

	NSArray* _codableDeletedAccounts;
	long long _syncProvenance;

}

@property (nonatomic,copy,readonly) NSArray * codableDeletedAccounts;              //@synthesize codableDeletedAccounts=_codableDeletedAccounts - In the implementation block
@property (nonatomic,readonly) long long syncProvenance;                           //@synthesize syncProvenance=_syncProvenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)syncProvenance;
-(id)initWithCodableDeletedAccounts:(id)arg1 syncProvenance:(long long)arg2 ;
-(NSArray *)codableDeletedAccounts;
@end

