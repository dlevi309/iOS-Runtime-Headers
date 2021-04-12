/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)modificationDate;
-(NSArray *)records;
-(void)setModificationDate:(double)arg1 ;
-(void)setRecords:(NSArray *)arg1 ;
-(long long)syncProvenance;
-(void)setSyncProvenance:(long long)arg1 ;
@end

