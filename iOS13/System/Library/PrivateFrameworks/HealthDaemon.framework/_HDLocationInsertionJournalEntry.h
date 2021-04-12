/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSArray;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry {

	NSUUID* _seriesIdentifier;
	NSArray* _data;

}

@property (nonatomic,readonly) NSUUID * seriesIdentifier;              //@synthesize seriesIdentifier=_seriesIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * data;                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)data;
-(id)initWithSeriesPersistentID:(id)arg1 locationData:(id)arg2 ;
-(NSUUID *)seriesIdentifier;
@end

