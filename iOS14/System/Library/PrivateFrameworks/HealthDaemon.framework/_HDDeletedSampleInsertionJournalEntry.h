/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray, HDDataOriginProvenance;

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry {

	NSArray* _samples;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,copy,readonly) NSArray * samples;                                //@synthesize samples=_samples - In the implementation block
@property (nonatomic,copy,readonly) HDDataOriginProvenance * provenance;              //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSArray *)samples;
-(HDDataOriginProvenance *)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCodableDeletedSamples:(id)arg1 provenance:(id)arg2 ;
@end

