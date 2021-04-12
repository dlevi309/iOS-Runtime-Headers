/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

