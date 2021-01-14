/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry {

	NSString* _key;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
@end

