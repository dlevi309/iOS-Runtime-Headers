/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSString, NSUUID;

@interface HDClinicalAccountManagerEndLoginSessionJournalEntry : HDJournalEntry {

	NSString* _code;
	NSUUID* _state;

}

@property (nonatomic,copy,readonly) NSString * code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * state;               //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)state;
-(NSString *)code;
-(id)initWithCode:(id)arg1 state:(id)arg2 ;
@end

