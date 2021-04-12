/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry {

	HDCodableObjectCollection* _collection;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,readonly) HDCodableObjectCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) HDDataOriginProvenance * provenance;                 //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HDCodableObjectCollection *)collection;
-(HDDataOriginProvenance *)provenance;
-(id)initWithCodableObjectCollection:(id)arg1 provenance:(id)arg2 ;
@end

