/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)types;
-(void)setTypes:(NSSet *)arg1 ;
-(id)initWithSourceIDs:(id)arg1 types:(id)arg2 ;
-(NSSet *)sourceIDs;
-(void)setSourceIDs:(NSSet *)arg1 ;
@end

