/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID;

@interface HDClinicalAuthorizationSessionJournalEntry : HDJournalEntry {

	NSUUID* _state;

}

@property (nonatomic,copy,readonly) NSUUID * state;              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)state;
@end

