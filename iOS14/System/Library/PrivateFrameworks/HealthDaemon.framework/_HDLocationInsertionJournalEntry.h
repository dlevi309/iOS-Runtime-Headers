/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSArray;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry {

	NSUUID* _seriesIdentifier;
	NSArray* _data;

}

@property (nonatomic,copy,readonly) NSUUID * seriesIdentifier;              //@synthesize seriesIdentifier=_seriesIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * data;                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeriesPersistentID:(id)arg1 locationData:(id)arg2 ;
-(NSUUID *)seriesIdentifier;
@end

