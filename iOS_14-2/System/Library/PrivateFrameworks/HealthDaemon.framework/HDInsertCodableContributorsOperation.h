/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSArray;

@interface HDInsertCodableContributorsOperation : HDJournalableOperation {

	NSArray* _contributors;
	long long _provenance;

}

@property (nonatomic,copy,readonly) NSArray * contributors;              //@synthesize contributors=_contributors - In the implementation block
@property (nonatomic,readonly) long long provenance;                     //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)provenance;
-(id)init;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)contributors;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContributors:(id)arg1 provenance:(long long)arg2 ;
@end

