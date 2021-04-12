/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HDUserDefault;

@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry {

	HDUserDefault* _userDefault;

}

@property (nonatomic,readonly) HDUserDefault * userDefault;              //@synthesize userDefault=_userDefault - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HDUserDefault *)userDefault;
@end

