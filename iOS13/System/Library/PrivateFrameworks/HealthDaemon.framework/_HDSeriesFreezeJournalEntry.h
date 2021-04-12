/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSDictionary;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry {

	NSUUID* _seriesUUID;
	NSDictionary* _metadata;
	Class _seriesClass;

}

@property (nonatomic,copy,readonly) NSUUID * seriesUUID;                  //@synthesize seriesUUID=_seriesUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) Class seriesClass;                         //@synthesize seriesClass=_seriesClass - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3 ;
-(Class)seriesClass;
-(NSUUID *)seriesUUID;
@end

