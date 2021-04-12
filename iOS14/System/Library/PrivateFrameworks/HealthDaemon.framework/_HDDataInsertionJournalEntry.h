/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject, HDDataOriginProvenance;

@interface _HDDataInsertionJournalEntry : HDJournalEntry {

	HKObject* _dataObject;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,readonly) HKObject * dataObject;                            //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) HDDataOriginProvenance * provenance;              //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(HDDataOriginProvenance *)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDataObject:(id)arg1 provenance:(id)arg2 ;
-(HKObject *)dataObject;
@end

