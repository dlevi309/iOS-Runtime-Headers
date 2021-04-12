/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry {

	NSArray* _records;
	double _modificationDate;
	long long _syncProvenance;

}

@property (nonatomic,retain) NSArray * records;                     //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) double modificationDate;               //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long syncProvenance;              //@synthesize syncProvenance=_syncProvenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(double)modificationDate;
-(void)setRecords:(NSArray *)arg1 ;
-(NSArray *)records;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)syncProvenance;
-(void)setSyncProvenance:(long long)arg1 ;
@end

