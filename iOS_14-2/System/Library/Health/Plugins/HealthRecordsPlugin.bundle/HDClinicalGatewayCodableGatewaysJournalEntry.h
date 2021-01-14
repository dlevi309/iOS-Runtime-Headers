/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDClinicalGatewayCodableGatewaysJournalEntry : HDJournalEntry {

	NSArray* _codableResources;
	long long _syncProvenance;

}

@property (nonatomic,copy,readonly) NSArray * codableResources;              //@synthesize codableResources=_codableResources - In the implementation block
@property (nonatomic,readonly) long long syncProvenance;                     //@synthesize syncProvenance=_syncProvenance - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)syncProvenance;
-(id)initWithCodableResources:(id)arg1 syncProvencance:(long long)arg2 ;
-(NSArray *)codableResources;
@end

