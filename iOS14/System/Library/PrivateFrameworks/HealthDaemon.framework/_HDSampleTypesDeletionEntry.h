/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSSet;

@interface _HDSampleTypesDeletionEntry : HDJournalEntry {

	NSSet* _sourceIDs;
	NSSet* _types;

}

@property (nonatomic,copy) NSSet * sourceIDs;              //@synthesize sourceIDs=_sourceIDs - In the implementation block
@property (nonatomic,copy) NSSet * types;                  //@synthesize types=_types - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSSet *)types;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTypes:(NSSet *)arg1 ;
-(NSSet *)sourceIDs;
-(id)initWithSourceIDs:(id)arg1 types:(id)arg2 ;
-(void)setSourceIDs:(NSSet *)arg1 ;
@end

